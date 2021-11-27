#include<bits/stdc++.h>
#include "thoigian.h"
using namespace std;

/*Chuc mung nam moi- Xuan Mau Tuat 2018*/
int namnhuan(int yyyy){
	if((yyyy%4==0 && yyyy%100!=0)||yyyy%400==0) return 1;
	return 0;
}

int demsongay(int dd, int mm, int yyyy, int dd1, int mm1, int yyyy1){
	int tn[13]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //cac thang cua nam nhuan
	int tt[13]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i;
	int songay=0;
	//Dem so ngay (chua tru)
	for(i=yyyy; i<=yyyy1; i++){
		if(namnhuan(i)){
			songay=songay+366;
		}
		else songay=songay+365;
	}
	//Tru bot phia truoc(dd/mm/yyyy)
	if(namnhuan(yyyy)){
		for(i=0; i<mm; i++){
			songay=songay-tn[i];
		}
		songay=songay+(tn[mm-1]-dd);
	}
	else{
		for(i=0; i<mm; i++){
			songay=songay-tt[i];
		}
		songay=songay+(tt[mm-1]-dd);
	}
	//Tru bot phia sau(dd1/mm1/yyyy1)
	if(namnhuan(yyyy1)){
		for(i=mm1-1; i<12; i++){
			songay=songay-tn[i];
		}
		songay=songay+dd1;
	}
	else{
		for(i=mm1-1; i<12; i++){
			songay=songay-tt[i];
		}
		songay=songay+dd1;
	}
	
	return songay;
}
string rundemsongaysong(){
	int dd, mm, yyyy;
	printf("Nhap ngay thang nam sinh(dd/mm/yyyy):");
	scanf("%d/%d/%d", &dd, &mm, &yyyy);
	return to_string(demsongay(dd, mm, yyyy, get_day(), get_month(), get_year()));
}
