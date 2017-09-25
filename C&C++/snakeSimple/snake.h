#include<iostream>
#include<ncurses.h>
#include<vector>
#include<cstdlib>
#include<unistd.h>

#ifndef SNAKE_H
#define SNAKE_H

struct snakepart{
    int x,y;
    snakepart(int col, int row);
    snakepart();
};


class snakeclass{
    int points;
    int del;
    int maxwidth;
    int maxheight;
    char direction;
    char partchar;
    char oldalchar;
    char foo;
    char etel;
    bool get;
    snakepart food;
    std::vector<snakepart> snake;

    void putfood();
    bool collision();
    void movesnake();

public:
    snakeclass();
    ~snakeclass();
    void start();
};



#endif
