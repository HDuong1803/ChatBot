#include<bits/stdc++.h>
#include<Windows.h>
#include<time.h>
#include<thread>
#include<chrono>
#include "dohoa.h"
using std::this_thread::sleep_for;
using std::chrono::milliseconds;


//void gotoxy(int x,int y){
//	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD g = {(short)x,(short)y};
//	SetConsoleCursorPosition(h,g);
//}
//void resizeConsole(int width, int height){
//	HWND console = GetConsoleWindow();
//	RECT r;
//	GetWindowRect(console, &r);
//	MoveWindow(console, r.left, r.top, width, height, TRUE);
//}
//void textcolor(int x){
//	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(h,x);
//}

class rain{
	int x;
	int y;
	public:
		rain();
		void fall();
		int getx();
		int gety();
};

rain::rain(){
	x = rand()%100 + 1;
	y = rand()%20 + 1;
}
int rain::getx(){
	return x;
}
int rain::gety(){
	return y;
}


void rain::fall(){
	if(y == 20){
		x = rand()%100 + 1;
		y = rand()%20 + 1;
	}
	else y++;
}


void runrain(){
	int n = 50, time = 40, sl = 1;
	resizeConsole(1000,600);
	rain a[n];
	Sleep(1000);
	system("cls");
	while(sl < 500){
		for(int i=0; i<n; i++){
			a[i].fall();
			gotoxy(a[i].getx(), a[i].gety());
			textcolor(3);printf("|");
		} 
		Sleep(time);
		for(int i=0; i<n; i++){
			gotoxy(a[i].getx(), a[i].gety());
			printf(" ");
		}
		sl++;
	}
	system("cls");
	textcolor(3);
}

