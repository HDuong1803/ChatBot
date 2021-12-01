#include<bits/stdc++.h>
#include<Windows.h>
#include<time.h>
#include<thread>
#include<chrono>
#include "dohoa.h"
using std::this_thread::sleep_for;
using std::chrono::milliseconds;


class mua{
	int x;
	int y;
	public:
		mua();
		void roi();
		int getx();
		int gety();
};

mua::mua(){
	x = rand()%100 + 1;
	y = rand()%20 + 1;
}
int mua::getx(){
	return x;
}
int mua::gety(){
	return y;
}


void mua::roi(){
	if(y == 20){
		x = rand()%100 + 1;
		y = rand()%20 + 1;
	}
	else y++;
}

void intro(){
	for(int i=3; i>0; i--){
		gotoxy(50, 12);
		printf("%d", i);
		Sleep(1000);
	}
	gotoxy(48, 12);
	printf("READY!");
	Sleep(1000);
	system("cls");
}

void print(int x, int y, int time, char *a){
	int n = strlen(a);
	int rem = time/n;
	gotoxy(x,y);textcolor(12);
	for(int i=0; i<strlen(a); i++){
		printf("%c", a[i]);
		sleep_for(milliseconds(rem));
	}
	Sleep(500);
}

void runtotinh2(){
	system("cls");
	int n = 100, time = 40, sl = 1;
	resizeConsole(1000,600);
	intro();
	mua a[n];
	char text[20][100] = {
		"Minh chia tay nhau khi chua bat dau",
		"Minh chia tay nhau cho voi don dau",
		"Noi nho anh se giu lai vao noi con mua cat giau",
		"Minh chia tay nhau khi chua bat dau",
		"Tinh yeu co le la mot phep mau",
		"Du co don dau long van muon yeu dam sau",
		"Du co don dau, long van muon yeu em dam sau..."
	};
	print(35, 6, 4000, text[0]);
	print(35, 8, 4000, text[1]);
	print(31, 10, 6000, text[2]);
	print(35, 12, 4000, text[3]);
	print(37, 14, 3000, text[4]);
	print(32, 16, 6000, text[5]);
	Sleep(1000);
	while(sl < 200){
		if(sl >= 50) goto tt;
		gotoxy(35, 6);textcolor(12);printf("Minh chia tay nhau khi chua bat dau");
		gotoxy(35, 8);textcolor(12);printf("Minh chia tay nhau cho voi don dau");
		gotoxy(31, 10);textcolor(12);printf("Noi nho anh se giu lai vao noi con mua cat giau");
		gotoxy(35, 12);textcolor(12);printf("Minh chia tay nhau khi chua bat dau");
		gotoxy(37, 14);textcolor(12);printf("Tinh yeu co le la mot phep mau");
		gotoxy(32, 16);textcolor(12);printf("Du co don dau long van muon yeu dam sau");
		tt:;
		sl++;
		for(int i=0; i<n; i++){
			gotoxy(a[i].getx(), a[i].gety());
			textcolor(3);printf("|");
		} 
		Sleep(time);
		for(int i=0; i<n; i++){
			gotoxy(a[i].getx(), a[i].gety());
			printf(" ");
			a[i].roi();
		}
	}
	print(32, 9, 6000, text[6]);
	Sleep(5000);
	system("cls");
}


