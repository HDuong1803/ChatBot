#include<bits/stdc++.h>
#include<Windows.h>
#include<time.h>
#include<thread>
#include<chrono>
#include "dohoa.h"
using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void reply(string s){
	int i, n = s.length();
	if(n <= 50) Sleep(35*n);
	else Sleep(1000);
	textcolor(13);
	for(char i:s){
		cout << i << flush;
		sleep_for(milliseconds(100));
	}
}

void runyeuhayko(){
	string a;
	reply("Thien linh linh, dia linh linh\n");
	reply("Than tien hien linh, ket thanh chu' phap\n");
	reply("Ta la dai boss, ngu. o dia cau\n");
	reply("Chung than o dau, hay nghe ta khan\n");
	reply("Nguoi tran mat thit, dang ngoi o day\n");
	reply("Xem xong cau nay, chu' ti`nh duoc lap\n\n");
	reply("Nguoi ngoi truoc may tinh nghe day\n");
	reply("Tat chuong trinh chung to yeu ta!\n");
	reply("Tat may cung chung to yeu ta!\n");
	reply("Ko quan tam cung chung to yeu ta!\n");
	reply("Ko tra loi cung chung to yeu ta!\n");
	reply("Du la lam gi cung deu yeu ta <3\n");
	srand(time(NULL));
	while(1){
		cout << "\nAnh: ";
		reply("Yeu anh khong?\n");
		cout << "Em: ";
		textcolor(3);
		getline(cin, a);
		for(int i=0; i<a.length(); i++){
			if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
		}
		if(a == "co" || a == "da co" || a == "yeu" || a == "da yeu"
		|| a == "em yeu anh" || a == "em that su yeu anh" || a == "em rat yeu anh"
		|| a == "em yeu anh lam" || a == "em yeu anh vo cung"
		|| a == "i love you"){
			reply("Um, anh biet, nhung em khong co cua, ahihi\n");
			break;
		}
		else{
			string i = "Tra loi sai roi em, tra loi lai di <3\n",
			       l = "Anh ko nhin thay, em tra loi lai di nao\n",
			       o = "ahihi, dung co doi long\n",
			       v = "that khong? noi lai lan nua di nao\n",
			       e = "tra loi lai -_-\n",
			       u = "he thong loi, yeu cau nhap lai cau tra loi!\n";
			vector<string> traloi;
			traloi.push_back("em noi gi anh ko nhin ro\n");
			traloi.push_back("\n");
			traloi.push_back("\n");
			traloi.push_back("\n");
			traloi.push_back("\n");
			traloi.push_back("\n");
			traloi.push_back("\n");
			traloi.push_back("anh ko tin -_-\n");
			traloi.push_back("nguoi ta noi con gai noi 1 la 2 noi 2 la 1 :v\n");
			traloi.push_back("yeu em mai mai, yeu em suot kiep <3\n");
			traloi.push_back("em yeu, yeu anh di em anh khong doi qua\n");
			traloi.push_back("yeu mot nguoi vo tam, la nuoc mat tuon am tham\n");
			traloi.push_back("hom qua anh thay oi nguoi ay, dang trong tay voi co nao day\n");
			traloi.push_back("tinh yeu dau phai ai cung may man tim duoc nhau\n");
			traloi.push_back("biet den khi nao, chung ta, nhan ra chang the quen duoc nhau\n");
			traloi.push_back("tat ca voi anh chi la, chi co em thoi anh khong can chi nua het\n");
			traloi.push_back("luc o ben em anh thay minh nhu tre con\n");
			traloi.push_back("chi thay em cuoi, the la quen sach het the gian uu phien\n");
			traloi.push_back("em vo tam the sao?\n");
			traloi.push_back("em that su khong co tinh cam voi anh a?\n");
			traloi.push_back("tai sao em lai noi vay?\n");
			traloi.push_back("day khong phai la dieu anh muon nghe, cung khong phai la dieu em muon noi\n");
			traloi.push_back("co le so phan khong cho em thoat khoi day\n");
			int rd = rand()%traloi.size()+6;
			if(rd == 1) reply(i);
			if(rd == 2) reply(l);
			if(rd == 3) reply(o);
			if(rd == 4) reply(v);
			if(rd == 5) reply(e);
			if(rd == 6) reply(u);
			else reply(traloi[rd]);
		}
	}
}
