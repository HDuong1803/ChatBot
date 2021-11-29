#include<bits/stdc++.h>
#include<Windows.h>
#include<time.h>
#include<thread>
#include<chrono>
#include "dohoa.h"
using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;


char sky[22][200] = {
		"     .       *           * *             *        * *            . *        *     .    o       *       ",
		" *                                                                                                     ",
		"    *            *       *  *       * *.   .          *    *                    *        .    *       *",
		" *              .                                                                                      ",
		"        *                * .*             *         *.           o        *          .    *       *    ",
		"*                  *            *                .   *                          .    *       *         ",
		"    .                           o                 * *    .         .*     *     .    *       *         ",
		"*            *     * *             * *      .      *  *              *        .    *       *           ",
		"             *       o *        .    *       * o   .          *   *         .    *       *  .    *     ",
		"*            *       *  *        . *        .   . *                       .    *       *               ",
		"        *      * *             *                   *        * *           .    *       *   *          *",
		"     .       *           * *             *        * *            . *        *     .    o       *       ",
		" *                                                                                                     ",
		"    *            *       *  *       * *.   .          *    *                    *        .    *       *",
		" *              .                                                                                      ",
		"        *                * .*             *         *.           o        *          .    *       *    ",
		"*                  *            *                .   *                          .    *       *         ",
		"    .                           o                 * *    .         .*     *     .    *       *         ",
		"*            *     * *             * *      .      *  *              *        .    *       *           ",
		"             *       o *        .    *       * o   .          *   *         .    *       *  .    *     ",
		"*            *       *  *        . *        .   . *                       .    *       *               ",
		"        *      * *             *                   *        * *           .    *       *   *          *"
	};


class meteor{
	int x;
	int y;
	public:
		meteor();
		void fall();
		int getx();
		int gety();
		void reset();
};

meteor::meteor(){
	x = rand()%100 + 1;
	y = rand()%7 + 1;
}
int meteor::getx(){
	return x;
}
int meteor::gety(){
	return y;
}


void meteor::fall(){
	if(y >= 21 || x <= 0){
		x = rand()%100 + 1;
		y = rand()%7 + 1;
	}
	else x--, y++;
}


void meteor::reset(){
	x = 0;
	y = 0;
}

void sao(){
	textcolor(3);
	char change[4] = {' ', '*', 'o', '.'};
	for(int i=0; i<22; i++){
		gotoxy(0, i);
		printf(sky[i]);
		printf("\n");
	}
	for(int i=0; i<5; i++){
		int x = rand()%22;
		int y = rand()%(strlen(sky[0])-2);
		int random = rand()%20;
		char repl;
		if(random == 2) repl = change[0];
		else if(random == 6) repl = change[1];
		else if(random == 12) repl = change[2];
		else if(random == 18) repl = change[3];
		sky[x][y] = repl;
	}
	
}



void runsaobang(){
	srand(time(NULL));
	int n = 3, sl = 0; // so luong sao bang
	int time, dem(0);
	resizeConsole(1000,600);
	Sleep(1000);
	meteor a[5];
	sao();
	while(sl < 200){
		sl++;
		textcolor(7);
		for(int i=0; i<n; i++){
			gotoxy(a[i].getx(), a[i].gety());
			printf("/");
		} 
		Sleep(50);
		for(int i=0; i<n; i++){
			gotoxy(a[i].getx(), a[i].gety());
			printf(" ");
			if(a[i].gety() >= 21 || a[i].getx() <= 0){
				dem++;
				if(dem == n){
					sao();
					Sleep(rand()%2000 + 1000);
					dem = 0;
					n = rand()%3 + 1;
				} 
			}
			a[i].fall();
		}
	}
	system("cls");
}

