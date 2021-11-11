#include<bits/stdc++.h>
using namespace std;

vector<string> get_dat(string filename){
	
}

void save_dat(string filename, vector<string> list){
	ofstream outfile; 
	outfile.open(filename, ios::app);
	string data = "";
	vector<string>::iterator i; // Khai báo con tr? d? duy?t
//	for (i = list.begin(); i != list.end(); i++) {
//		data = data + i + "|";
//	}
	outfile << data << endl; 
	outfile.close();
}
