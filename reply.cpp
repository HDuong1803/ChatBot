#include<bits/stdc++.h>
#include<string>
#include<Windows.h>
#include<thread>
#include<chrono>
#include<time.h>
#include "dohoa.h"

using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;


void rep(string mss){
	srand(time(NULL));
	int i, n = mss.length(), time;
	if(n <= 50) {
		Sleep(rand()%400+300);
		time = 80;
	}
	else {
		Sleep(rand()%500 + 500);
		time = rand()%60 + 20;
	}
	if(n > 120) time = 30;
	textcolor(13);
	for(char i:mss){
		cout << i << flush;
		sleep_for(milliseconds(80));
	}
	cout << "\n";
}

string select_mess(vector<string> list){
	return list[rand()%list.size()];
}
