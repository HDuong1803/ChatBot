#include<bits/stdc++.h>
#include<time.h>
using namespace std;

time_t baygio = time(0);		
tm *time_now = localtime(&baygio);


string get_time(){
	return (to_string(time_now->tm_hour)+":"+to_string(time_now->tm_min)+"");
}

string get_date(){
	return (to_string(time_now->tm_mday)+"/"+to_string(1 + time_now->tm_mon)+"/"+to_string(1900 + time_now->tm_year)+"");
}

string get_dateofweek(){
	int dow = time_now->tm_wday;
	if(dow == 0) return "Sunday";
	else if(dow == 1) return "Monday";
	else if(dow == 2) return "Tuesday";
	else if(dow == 3) return "Wednesday";
	else if(dow == 4) return "Thursday";
	else if(dow == 5) return "Friday";
	else if(dow == 6) return "Saturday";
}

string lay_thu(){
	int dow = time_now->tm_wday;
	if(dow == 0) return "Chu nhat";
	else if(dow == 1) return "Thu 2";
	else if(dow == 2) return "Thu 3";
	else if(dow == 3) return "Thu 4";
	else if(dow == 4) return "Thu 5";
	else if(dow == 5) return "Thu 6";
	else if(dow == 6) return "Thu 7";
}

int get_day(){
	return time_now->tm_mday;
}

int get_month(){
	return (1 + time_now->tm_mon);
}

int get_year(){
	return (1900 + time_now->tm_year);
}

int get_hour(){
	return time_now->tm_hour;
}

int get_minute(){
	return time_now->tm_min;
}

int get_second(){
	return time_now->tm_sec;
}

int kt_nam_nhuan(){
	int year = get_year();
	if((year%4 == 0)&&((year%100 !=0)) || (year%400 == 0))
	return 1;
	else return 0;
}

string nam_am_lich(){
	int year = get_year();
	string result = "";
	year -= 3;
	switch (year%10){
		case 1:
			result += "Giap";
			break;
		case 2:
			result += "At";
			break;
		case 3:
			result += "Binh";
			break;
		case 4:
			result += "Dinh";
			break;
		case 5:
			result += "Mau";
			break;
		case 6:
			result += "Ky";
			break;
		case 7:
			result += "Canh";
			break;
		case 8:
			result += "Tan";
			break;
		case 9:
			result += "Nham";
			break;
		case 0:
			result += "Quy";
			break;
	}
	result += " ";
	switch (year%12){
		case 1:
			result += "Ti";
			break;
		case 2:
			result += "Suu";
			break;
		case 3:
			result += "Dan";
			break;
		case 4:
			result += "Mao";
			break;
		case 5:
			result += "Thin";
			break;
		case 6:
			result += "Ty";
			break;
		case 7:
			result += "Ngo";
			break;
		case 8:
			result += "Mui";
			break;
		case 9:
			result += "Than";
			break;
		case 10:
			result += "Dau";
			break;
		case 11:
			result += "Tuat";
			break;
		case 0:
			result += "Hoi";
			break;
	}
	return result;
}
