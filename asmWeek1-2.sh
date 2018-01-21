#!/bin/bash

DATA=`egrep -o "<a href=\"http:\/\/www.textfiles.com\/etext\/FICTION\/.+(\.txt)?\">.+(\.txt)?<\/a>" ETEXT.TEXTFILES.COM\:\ FICTION.html | egrep -o "http:\/\/www.textfiles.com\/etext\/FICTION\/.+(\.txt)?\">"`

if [ ! -d cache ]
then
mkdir cache
fi

cd cache

loop=1

for x in $DATA
do
AAAA=`echo $x | tr -d "\">"`
echo "$loop: $AAAA"
wget -q $AAAA

loop=$[loop+1]
#if [ $loop -gt 2 ]
#then
#break
#fi

done

files=`ls`
cat $files > "../output.txt"

cd ..

#rm -R cache

