#include<bits/stdc++.h>
using namespace std;

vector<string> split(string s, string delimiter){
	size_t pos = 0;
	string token;
	vector<string> result;
	while ((pos = s.find(delimiter)) != std::string::npos) {
	    token = s.substr(0, pos);
	    result.push_back(token+"");
	    s.erase(0, pos + delimiter.length());
	}
	result.push_back(s+"");
}
