#include <iostream>
#include <ncurses.h>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;

int x,y,fruitX,fruitY,score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void Setup(){
	gameOver = false;
	dir  = STOP;
	x= width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void Draw(){
	system("clear"); //system clear screen in terminal yepppp!!!!!
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
	
	for (int i = 0; i < height; i++){
		
		for (int j = 0; j < width + 2; j++){

			if (j == 0)
				cout << "#";
			if (i == y && j == x)
				cout << "O";
			else if (i ==fruitY && j == fruitX)
				cout << "F";
			else
				cout <<  " ";
			if (j == width-1)
				cout << "#";
		}
	cout << endl;

	}

	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
	cout << "Score: " << score << endl;
}

void Input(){
	WINDOW *switch_;
	int ch;
	initscr();
	clear();
	noecho();
	cbreak();
	ch = wgetch(switch_);
	switch (ch){
		case 'a':
			dir = LEFT;
			break;
		case 'b':
			dir  = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	clrtoeol();
	refresh();
	endwin();
	
}

void Logic(){

	switch (dir){
		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		case UP:
			y++;
			break;
		case DOWN:
			y--;
			break;
		default:
			break;
	}
	
	if (x > width || x < 0 || y > height || y < 0)
		gameOver = true;
	if ( x == fruitX && y == fruitY)
		score += 3;
		fruitX = rand() % width;
		fruitY = rand() % height;
}

int main(){
	Setup();
	while(!gameOver){
		Draw();
		Input();
		Logic();
		
	}
	return 0;
}
