#pragma once

#include<bits/stdc++.h>
#include<Windows.h>
#include<time.h>
#include<thread>
#include<chrono>
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void gotoxy(int x,int y);
void resizeConsole(int width, int height);
void textcolor(int x);

