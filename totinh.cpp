#include<bits/stdc++.h>
#include<Windows.h>
#include<time.h>
#include<thread>
#include<chrono>
#include "dohoa.h"
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
int load = 0;


void loader(int value){
	int rem;
	gotoxy(34,6); textcolor(13); printf("Loading:");
	for(int i=load; i<=value; i++){
		rem = 100+ rand()%300;
		gotoxy(42,6); textcolor(13); printf("%d%%", i);
		Sleep(rem);
	}
	printf("\a");
	load = value;
	Sleep(500);
}

void Begin(){
	gotoxy(26,2); textcolor(10); printf("CONNECTING FROM LOVE SERVER");	
    gotoxy(16,4); textcolor(12); printf("^_^");gotoxy(60,4);printf("T_T");
    gotoxy(20,4); textcolor(11); printf(" Send to: Nguoi con gai T tham thuong");
    gotoxy(18,7); textcolor(14); printf("____________________________________________");
    loader(12);
}

void print(int x, int y, int color, int time, char *a){
	int n = strlen(a);
	gotoxy(x,y);
	textcolor(color);
	int rem;
	for(int i=0; i<strlen(a); i++){
		printf("%c", a[i]);
		rem = 50+ rand()%120;
		sleep_for(milliseconds(rem));
	}
	Sleep(time);
	gotoxy(x,y);
	for(int i=0; i<strlen(a); i++){
		printf(" ");
	}
}

void love(){
	textcolor(12);
	printf("\t                                       \n");
	printf("\t                                       \n");
	printf("\t           *               *           \n");Sleep(100);
	printf("\t    *            *   *            *    \n");Sleep(100);
	printf("\t                                       \n");
	printf("\t *                 *                 * \n");Sleep(100);
	printf("\t                                       \n");
	printf("\t*                                     *\n");Sleep(100);
	printf("\t                                       \n");
	printf("\t *                                   * \n");Sleep(100);
	printf("\t                                       \n"); 
	printf("\t   *                               *   \n");Sleep(100);
	printf("\t                                       \n");  
	printf("\t       *                       *       \n");Sleep(100);
	printf("\t                                       \n");
	printf("\t             *           *             \n");Sleep(100);
	printf("\t                                       \n");  
	printf("\t                   *                   \n");Sleep(100);
	textcolor(10);
	print(21, 10, 1, 100, "T THICH M <3\n");
	gotoxy(21, 10);
	printf("T THICH M <3\n");
	Sleep(10000);
}





void runtotinh(){
	srand(time(NULL));
	system("cls");
	resizeConsole(950, 600);
   	Begin(); 
   	print(10, 10, 1, 1500, "Hi ^^!! T co dieu muon noi voi M...Mong m se bo chut thoi gian de doc ^^");
   	print(10, 10, 1, 1500, "Truoc khi gap M....T co nhieu thoi gian trong rong lam...haha");
   	print(10, 10, 1, 1000, "T cung chang ban tam moi thu xung quanh dang xay ra");
   	print(10, 10, 1, 1500, "Nhung tu luc gap duoc m....Nhung khoang thoi gian do khong con nua");
   	print(10, 10, 1, 2000, "Ma bi lap day boi noi nho, va ca nhung nghi suy ve M ");
   	print(10, 10, 1, 1500, "Luc do t nghi, co le 'T thich M that roi......'");
   	print(10, 10, 1, 1500, "T biet minh khong duoc dep trai, nha cung khong giau hon ai");
  	print(10, 10, 1, 1500, "T cung khong gioi nhu nhieu nguoi khac ma m quen");
   	print(10, 10, 1, 3000, "T chi la 1 thang con trai kem coi......");
   	loader(56);
   	print(10, 10, 1, 1500, "Nhieu luc thuc su T muon lay het can dam tien lai gan M va noi");
   	print(32, 12, 11, 3000, "   'T THICH M'   ");
   	print(30, 10, 1, 1500, "Nhung T khong lam duoc T_T");
   	print(10, 10, 1, 1500, "T khong co diem gi noi bat de co the ngo loi voi M");
   	print(10, 10, 1, 3000, "Va M cung khong co ly do gi de co the chap nhan 1 nguoi nhu t...");
  	loader(82);
   	print(10, 10, 1, 1500, "Vi vay....Thich M, T giu trong long, chi minh T biet!!!");
   	print(10, 10, 1, 1500, "T luon ngam nhin M tu phia sau thoi!!!");         
   	print(10, 10, 1, 1500, "Nhung ma...yeu don phuong, nhieu luc cung thu vi lam");
  	print(10, 10, 1, 1500, "Vi T se khong bao gio bi M tu choi.... ^_^"); 
  	print(10, 10, 1, 1500, "Nhung ma vi khong dam noi ra");
  	print(10, 10, 1, 1000, "Moi cam giac buon vui deu chi minh t biet");
  	print(10, 10, 1, 1500, "Nhieu luc...T ngoi xem lai tin nhan roi tu cuoi mot minh");
  	print(10, 10, 1, 2000, "Nhieu luc cung tu ngoi buon mot minh...roi xem nhu chua xay ra chuyen gi T_T");
   	print(10, 10, 1, 1500, "Nhung ma...T chi can moi ngay duoc nhin thay M");
  	print(10, 10, 1, 3000, "Cung du lam cho T vui roi ^^!!!"); 
	loader(99);
   	print(10, 10, 1, 1500, "Hy vong duy nhat cua T chi la...");
   	print(10, 10, 1, 1500, "Mot ngay nao do M biet duoc rang "); 
   	print(10, 10, 1, 3000, "Da tung co 1 thang con trai tham thuong M rat nhieu");
	system("cls");
	print(12, 2, 9, 1000, "Con 1% cuoi cung...T chi muon noi voi M la:");
	//gotoxy(10, 2);textcolor(4);
	//print(12, 2, 4, 10000, "T da doi m 20 mua valentine roi, m cung nen xuat hien di a...");
   	love();
   	system("cls");
}
