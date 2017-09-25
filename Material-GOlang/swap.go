package main

import "fmt"

func swap(x,y int)(int,int) {
	return y,x
}

func main() {
	a, b :=swap(23, 24)
	fmt.Println(a, b)
}
