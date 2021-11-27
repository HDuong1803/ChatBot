#include<bits/stdc++.h>
#include<Windows.h>
#include<time.h>
#include<thread>
#include<chrono>
#include<iostream>
using std::this_thread::sleep_for;
using std::chrono::milliseconds;


void gotoxy(int x,int y){
	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD g = {(short)x,(short)y};
	SetConsoleCursorPosition(h,g);
}
void resizeConsole(int width, int height){
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void textcolor(int x){
	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,x);
}

