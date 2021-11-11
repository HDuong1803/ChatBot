#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
#include <thread>
#include <fstream>
#include<Windows.h>
#include<chrono>
#include "dohoa.h"
#include "Cunghoangdao.h"
#include "botngu.h"
#include "demsongaysong.h"
#include "totinh.h"
#include "totinh2.h"
#include "yeuhayko.h"
#include "rain.h"
#include "freeze.h"
#include "saobang.h"
#include "chucngungon.h"
#include "thoigian.h"
#include "reply.h"
using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

string botname = "Ikaros";
string username = "Master";

void print(string s){
	int i, n = s.length();
	cout << botname << ": ";
	rep(s);
}

// TODO: sua tra loi mac dinh de o ngoai vong while, luu file cau noi cua chu nhan de bat chuoc
// TODO: Tim kiem phu dinh truoc tim kiem cau hoi
/*
ex: a.find("khong biet") => (phu dinh) => luon tim dc "toi ko biet"
	a.find("khong") != -1 && a.find("biet") => co the tim dc ca 3 => sai
 - toi khong biet
 - ban co biet chuyen do khong
 - ban co biet khong
*/

vector<string> macdinh;
void dulieumacdinh(){
	macdinh.push_back("next de");
	macdinh.push_back("Meo lien quan toi tao, con chuyen gi khac ko?");
	macdinh.push_back("may con on ko");
	macdinh.push_back("hiiiiiiiiiiiii, t meo biet noi gie tiep luon");
	macdinh.push_back("haha, t dang doc cai eo gi day");
	macdinh.push_back("la sao? ko hieu");
	macdinh.push_back("ko biet noi gi luon, co le dai k giup dc m");
	macdinh.push_back("hom qua cung co nguoi noi nhu vay");
	macdinh.push_back("may noi ko biet chan a");
	macdinh.push_back("oi men, chua se phu ho cho ban");
	macdinh.push_back("really??");
	macdinh.push_back("chuyen chu de di");
	macdinh.push_back("nham qua nhe");
	macdinh.push_back("may con muon tiep tuc?");
	macdinh.push_back("Khoan, may thay ta thu vi ko?");
	macdinh.push_back("Khoan da, sang nay m an chi?");
	macdinh.push_back("E ko hieu lam, bo qua di a ^^");
	macdinh.push_back("Khoan da, may muon lam quen voi dai k ta ko?");
	macdinh.push_back("Be oi, em tem tem lai chut di");
	macdinh.push_back("Noi chuyen de thuong qua -_-");
	macdinh.push_back("Hahahahhhahahahahah");
	macdinh.push_back("Hahaahahahahhaah, nhat qua, them muoi di");
	macdinh.push_back("co nhung chuyen ko nen noi ra");
	macdinh.push_back("dung noi nham");
	macdinh.push_back("hihi, muon ta gioi thieu cho 1 nguoi ko?");
	macdinh.push_back("-_- ... hoi chut, co muon quen dai k ta ko?");
	macdinh.push_back("ta cung ko ro nua");
	macdinh.push_back("-_- haha, tam ly con nguoi ko thich loi cay dang");
	macdinh.push_back("hom qua anh mo den...quen mia loi roi");
	macdinh.push_back("vi yeu mot nguoi vo tam, la nuoc mat tuon am tham -_-");
	macdinh.push_back("oi men -_-");
	macdinh.push_back("can loi");
	macdinh.push_back("Hom nay ta buon tinh, dung lam ta tuc gian");
	macdinh.push_back("bo qua di -_-");
	macdinh.push_back("theo kinh nghiem cua e thi a co chym, phai ko na??");
	macdinh.push_back("buon ..............................cuoi..hahahaha");
	macdinh.push_back("haha, nuc cuoi, you ko du dang cap");
	macdinh.push_back("em nghi em noi vay thi anh vui sao?");
	macdinh.push_back("Hay la m hoi t mot cai chi do di");
	macdinh.push_back("hihi, you that thu vi");
	macdinh.push_back("-_- chi biet bat nat ta...hummmm");
	macdinh.push_back("lai bi sao a?");
	macdinh.push_back("bi gi a? ke nghe coi");
	macdinh.push_back("um, ke you luon...ahahaha");
	macdinh.push_back("xin loi, anh chi la mot con bot");
	macdinh.push_back("yen tam, ta se cho you thay");
	macdinh.push_back("Doan xem?");
	macdinh.push_back("Ko duoc noi vay, noi bao nhieu lan roi");
	macdinh.push_back("ta khuyen you dung dai dot");
	macdinh.push_back("oai, thoi dep di");
	macdinh.push_back("ko biet, ta chiu thoi");
	macdinh.push_back("po li, si top hia, o ke?");
	macdinh.push_back("Xin loi, may chuyen do hoi do ta ko quan tam");
	macdinh.push_back("ai, qua ngoc");
	macdinh.push_back("hehe, cung biet nhieu qua nhi");
	macdinh.push_back("o, sao you lai noi vay");
	macdinh.push_back("ko ro nua, noi ro rang hon di");
	macdinh.push_back("Ma yeu tao a, sao hoi nhieu vay");
	macdinh.push_back("-_-");
	macdinh.push_back("^_^");
	macdinh.push_back("^^");
	macdinh.push_back("stop");
	macdinh.push_back("la sao?");
	macdinh.push_back("sao?");
	macdinh.push_back("what?");
	macdinh.push_back("really?");
	macdinh.push_back("T hoi chut, m nghi yeu mot nguoi la kho hay de");
	macdinh.push_back("You im lang ti duoc ko, t ko phai nguoi biet lang nghe");
	macdinh.push_back("Noi nhieu vl");
	macdinh.push_back("May im di");
	macdinh.push_back("Di an chao di, xam hoai");
	macdinh.push_back("dung noi lung tung");
	macdinh.push_back("noi lung tung mai");
	macdinh.push_back("chan qua la nghi noi luon nghe");
	macdinh.push_back("kem sang");
	macdinh.push_back("Ranh roi thi di troll nguoi khac di");
	macdinh.push_back("ranh roi qua a");
	macdinh.push_back("can you cam");
	macdinh.push_back("Yeu mot nguoi kho lam nhi");
	macdinh.push_back("met khong?");
	macdinh.push_back("Co buon ko");
	macdinh.push_back("M nhu ruk ba me biet chua");
	macdinh.push_back("An gi con cung");
	macdinh.push_back("Xao loz");
	macdinh.push_back("Eo nhe");
	macdinh.push_back("nen tra loi sao nhi?");
	macdinh.push_back("E ko biet tra loi sao nua T_T");
	macdinh.push_back("E nen tra loi sao day??");
	macdinh.push_back("E nen noi gi day??");
	macdinh.push_back("Ko biet noi sao luon");
	macdinh.push_back("T nen tra loi sao day?");
	macdinh.push_back("T nen noi gi day nhi?");
	macdinh.push_back("T nen noi gi nhi?");
	macdinh.push_back("T phai noi gi day?");
	macdinh.push_back("Tai sao t phai noi voi m?");
	macdinh.push_back("Cho t mot ly do de tiep tuc di -_-");
	macdinh.push_back("Khon nhu m que tao xich day");
	macdinh.push_back("Khon nhu cho -_-");
	macdinh.push_back("Con nit ranh");
	macdinh.push_back("Ke di");
	macdinh.push_back("noi tiep di");
	macdinh.push_back("tiep tuc di");
	macdinh.push_back("-_-...muon ta hat cho nghe ko?");
	macdinh.push_back("-_-...muon ta ke chuyen cho nghe ko?");
	macdinh.push_back("Muon e ke chuyen cho nghe ko");
}


void runbot(){
	ios_base::sync_with_stdio(0);
	srand(time(NULL));
	string a;
	int rd(1);
	vector<string> botdat;
	vector<string> traloi;
	dulieumacdinh();
	if(get_hour() >= 4 && get_hour() <= 7) print("Chao buoi sang " + username + " ^^");
	else if(get_hour() >= 19 && get_hour() <= 21) print("Chao buoi toi " + username + " ^^");
	else if(get_hour() == 11 || get_hour() == 12) print("Trua roi, an com chua " + username + "?");
	else if(get_hour() >= 22 || (get_hour >= 0 && get_hour() <= 3)) print("Muon roi, di ngu di " + username + " ^^");
	while(1){
		cout << username << ":";
		textcolor(3);
		getline(cin, a);
		dichchuyen:;
		for(int i=0; i<a.length(); i++){
			a[i] = tolower(a[i]);
		}
		if(find(botdat.begin(), botdat.end(), a) == botdat.end()){
			botdat.push_back(a+"");
		}
		if(a == "endchat" || a == "finish" || a == "end chat") break;
		
		// tin nhan ko co noi dung
		if(a == "" || a == " " || a.find("  ") == 0){
			traloi.clear();
			traloi.push_back("^^");
			traloi.push_back("qq");
			traloi.push_back("noi gi di em");
			traloi.push_back("??");
			traloi.push_back("chuyen gie may ?");
			traloi.push_back("gie?");
			traloi.push_back("vl");
			traloi.push_back("mie, noi gi di");
			traloi.push_back(":v");
			traloi.push_back("noi gi di ne");
			traloi.push_back("mie, dung lam kho nhau");
			traloi.push_back("troll nhau a :v");
			traloi.push_back("dinh troll ta a :v");
			traloi.push_back("wtf??");
			traloi.push_back("what do heo?");
			traloi.push_back("what the fuck?");
			traloi.push_back("are you okay?");
			traloi.push_back("sao vay em?");
			traloi.push_back("co chuyen gi sao?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		/*---------------Tag: chao hoi------------------*/
		else if(a == "hi" || a == "chao" || a.find("hello") == 0 
		|| a.find("chao ") == 0 || a == "alo" || a.find("hey") == 0
		|| a.find("hi ") == 0 || a.find("xin chao") != -1){
			traloi.clear();
			traloi.push_back("chao");
			traloi.push_back("hi ^^");
			traloi.push_back("chao chu nhan sida ahahaha");
			traloi.push_back("chao lai ne");
			traloi.push_back("hom nay sao lai co hung thu voi con bot nay vay ?");
			traloi.push_back("hi, are you ok now?");
			traloi.push_back("hiiiiiiiiiiiii");
			traloi.push_back("hehe, co chuyen gi ne?");
			traloi.push_back("ok chao, con gi muon noi voi ta ko?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		/*---------------endag: chao hoi------------------*/
		
		
		
		
		/*-------------------------tag: daik-----------------------------*/
		else if((a.find("dai k") != -1 || a.find("dai ca") != -1
		|| a.find("daik") != -1) 
		&& (a.find("la ai") != -1 || a.find("la thang nao") != -1
		|| a.find("la dua nao") != -1 || a.find("dep trai") != -1
		|| a.find("lam a") != -1)
		){
			traloi.clear();
			traloi.push_back("tuyet mat, ko the noi");
			traloi.push_back(username + " lay " + botname + " tu dau? sao ko di hoi nguoi do di -_-");
			traloi.push_back("hihi, muon ta gioi thieu cho ko?");
			traloi.push_back("sao, muon quen dai k ta a?");
			traloi.push_back("ta cung ko ro nua, chi biet dai k rat dep trai, cung rat gioi");
			traloi.push_back("thong bao truoc la dai k ta rat xam do");
			traloi.push_back("mot cong mot bang hai, va ta ko noi cho you dai k ta ");
			traloi.push_back("vi yeu mot nguoi vo tam, la nuoc mat tuon am tham -_-");
			traloi.push_back("oi men, may xac dinh muon noi chuyen voi dai k ta");
			traloi.push_back("Daik:'ta thanh that chia buon cung you'");
			traloi.push_back("Daik:'Dung dai dot, bo qua de'");
			traloi.push_back("oi men, dung co dai dot hoi chuyen do");
			traloi.push_back("de ta xem lai coi co noi xau truoc do ko da");
			traloi.push_back("buon ..............................cuoi..hahahaha");
			traloi.push_back("haha, nuc cuoi, you ko du dang cap nha");
			traloi.push_back("tai sao phai noi voi you?");
			traloi.push_back("you cung muon noi chuyen voi dai k ta? ko co cua dau nha");
			traloi.push_back("hihi, you that ko thu vi, dai k ta se ko thich you");
			traloi.push_back("the dinh cho ta gi day");
			traloi.push_back("La daik thoi, moa, hoi la vay");
			traloi.push_back("dap dau 3 cai roi t noi cho");
			traloi.push_back("la mot thang dien, khu khu, dung ke lai voi daik nha...hehe");
			traloi.push_back("xin loi, anh chi la mot con bot");
			traloi.push_back("dai k ta la nguoi rat thuong ta");
			traloi.push_back("Doan xem?");
			traloi.push_back("Dai k ta bao ko dc noi");
			traloi.push_back("ta khuyen you dung dai dot hoi chuyen do");
			traloi.push_back("oai, thoi dep di");
			traloi.push_back("ko the noi, ta chiu thoi");
			traloi.push_back("You nghi ta se noi hay ko?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("ai lam ra") != -1 || a.find("ai tao ra") != -1
		|| a.find("chu cua") != -1 || a.find("ba cua") != -1
		|| a.find("cha cua") != -1 || a.find("nguoi lam ra") != -1
		|| a.find("nguoi tao ra") != -1 || a.find("ai viet ra") != -1
		|| a.find("nguoi viet ra") != -1){
			traloi.clear();
			traloi.push_back("Dai k cua ta chu ai");
			traloi.push_back("Mot nguoi dep trai");
			traloi.push_back("Mot soai ca");
			traloi.push_back("Doan xem");
			traloi.push_back("Khanh dai k chu ai");
			traloi.push_back("You ko du dang cap de biet");
			traloi.push_back("Hoi lam gie, dinh ga dai k ta a");
			traloi.push_back("Dai k Khanh dep trai.");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*-------------------------endtag: daik-----------------------------*/
		
		
		
		
		
		
		
		/*---------------tag: Noi chuyen/tam su----------------*/
		else if(a.find("noi chuyen") != -1 || a.find("tam su") != -1
		|| a.find("tro chuyen") != -1){
			traloi.clear();
			traloi.push_back("co chuyen gi de noi a, noi di");
			traloi.push_back("um?");
			traloi.push_back("haha, muon tam su ko");
			traloi.push_back("sao, co chuyen gi buon a, cu noi di");
			traloi.push_back("ta ko biet noi chuyen, cung nhu dai k ta vay");
			traloi.push_back("thong bao truoc la ta rat xam do");
			traloi.push_back("mot cong mot bang hai, you yeu ai?");
			traloi.push_back("vi yeu mot nguoi vo tam, la nuoc mat tuon am tham -_-");
			traloi.push_back("oi men, may xac dinh muon noi chuyen voi 1 con bot");
			traloi.push_back("Daik:'ta thanh that chia buon cung you'");
			traloi.push_back("hu hu, ta rat thich noi chuyen");
			traloi.push_back("dung xam ngon truoc mat ta nhe, ta la bot nghiem tuc");
			traloi.push_back("Che do noi chuyen voi ke ngoc da duoc bat!");
			traloi.push_back("buon cuoi...hihi");
			traloi.push_back("chuyen gi");
			traloi.push_back("noi di");
			traloi.push_back("haha, nuc cuoi");
			traloi.push_back("thi noi di, e nghe day");
			traloi.push_back("you cung muon noi chuyen voi ta? ko co cua dau nha");
			traloi.push_back("hihi, you that thu vi");
			traloi.push_back("um, ta cung dang muon co nguoi tam su");
			traloi.push_back("lai bi sao a?");
			traloi.push_back("hom qua t co chuyen vui do ^^");
			traloi.push_back("um, mac du ko hung thu voi you lam");
			traloi.push_back("xin loi, ta chi la mot con bot thoi ma");
			traloi.push_back("co chuyen gi de noi sao");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		/*---------------endtag: Noi chuyen/tam su----------------*/
		
		
		/*----------------tag: Tinh yeu-------------------*/
		/*tag: tinh yeu la gi*/
		else if((a.find("tinh yeu") != -1 || a.find("yeu") == 0 || a.find("love") != -1) 
		&& (a.find("la gi") != -1 || a.find("la chi") != -1 || a.find("la cai") != -1
		|| a.find("la nhu the nao") != -1 || a.find("la ntn") != -1)
		){
			traloi.clear();
			traloi.push_back("tinh yeu la the, doi khi lam minh say me");
			traloi.push_back("tinh yeu ko co loi, loi la tai ban than");
			traloi.push_back("tinh yeu ko co muoi, nhung lai co suc sat thuong");
			traloi.push_back("tinh yeu la the, doi khi lam minh ngo nghe");
			traloi.push_back("la tin mot nguoi den noi roi le");
			traloi.push_back("khi yeu ai chang can biet nua");
			traloi.push_back("do la ngoc nghech khi tin vao 1 nguoi");
			traloi.push_back("dau lam, biet ko");
			traloi.push_back("la khi noi chuyen voi nguoi do, tim minh dap thinh thich");
			traloi.push_back("1 cam giac ko noi nen loi");
			traloi.push_back("oi tinh yeu");
			traloi.push_back("tinh yeu la thu lam trai tim minh dau kho nhat, nhu con dao cam sau trong long");
			traloi.push_back("ai biet :V");
			traloi.push_back("yeu duong cai gie, tao hoi may yeu duong cai gie");
			traloi.push_back("hoc hanh ko lo, yeu yeu cc");
			traloi.push_back("tuyet mat, ko the noi");
			traloi.push_back("ngu kinh lam, dung hoi");
			traloi.push_back("hihi, muon ta gioi thieu cho 1 nguoi ko?");
			traloi.push_back("sao, co muon quen dai k ta ko?");
			traloi.push_back("ta cung ko ro nua");
			traloi.push_back("haha, tam ly con nguoi ko thich noi loi cay dang");
			traloi.push_back("hom qua anh mo den...quen mia loi roi");
			traloi.push_back("vi yeu mot nguoi vo tam, la nuoc mat tuon am tham -_-");
			traloi.push_back("oi men, may xac dinh muon noi chuyen do ta, bat dau di");
			traloi.push_back("can loi");
			traloi.push_back("Hom nay ta buon tinh, you ko nen noi chuyen do");
			traloi.push_back("please, bo qua di");
			traloi.push_back("ta lam sao biet??");
			traloi.push_back("buon ..............................cuoi..hahahaha");
			traloi.push_back("t ko biet, hay la you day ta cach yeu di -_^");
			traloi.push_back("tinh yeu la gi? la dau kho chu gi");
			traloi.push_back("tinh yeu? noi ro hon di");
			traloi.push_back("hihi, you that thu vi, tinh voi yeu cai meo");
			traloi.push_back("ahaha, tinh yeu la cai meo gie...hummmm");
			traloi.push_back("lai bi sao a? hom nay sao lai noi chuyen yeu duong :v");
			traloi.push_back("bi gi a? sao lai noi chuyen yeu duong :v? ke nghe coi");
			traloi.push_back("mac ke, meo quan tam...ahahaha");
			traloi.push_back("xin loi, anh chi la mot con bot");
			traloi.push_back("han den gan t, t mat do nhu qua ca chua -_-");
			traloi.push_back("Doan xem?");
			traloi.push_back("La su don dieu tim duoc su dong dieu");
			traloi.push_back("co ny chua?");
			traloi.push_back("chua yeu ai a?");
			traloi.push_back("yeu ai chua?");
			traloi.push_back("daik said: yeu la phai lay ve lam vo <3");
			traloi.push_back("ahahaha....nghe cam dong qua, cuoi dau bung luon ne");
			traloi.push_back("chua tung yeu 1 nguoi a?");
			traloi.push_back("Ko duoc, noi bao nhieu lan roi, chuyen tinh cam ko nen noi qua nhieu");
			traloi.push_back("ta khuyen you dung dai dot hoi ve tinh yeu");
			traloi.push_back("oai, thoi dep di");
			traloi.push_back("ko biet, ta chiu thoi");
			traloi.push_back("po li, si top hia, o ke?");
			traloi.push_back("Xin loi, may chuyen do hoi do ta ko quan tam");
			traloi.push_back("ai, qua ngoc...den gio van co nguoi tin vao tinh yeu sao");
			traloi.push_back("yeu ta di, la biet ngay ^^");
			traloi.push_back("hehe, biet chet lien");
			traloi.push_back("o, sao you lai noi vay?");
			traloi.push_back("ko ro nua, noi ro rang hon di");
			traloi.push_back("yeu anh di ne, roi kung se biet thoi <3");
			traloi.push_back("yeu daik em di, roi chi se biet thoi <3");
			traloi.push_back("ti`nh yeu la` la`m cho nguo`i mi`nh yeu duo?c ha?nh phu´c,vui cuo`i mo~i nga`y,pha?i bie´t hi sinh");
			traloi.push_back("do ai dinh nghia duoc tinh yeu\nco phai long vuong buoi thu chieu\ngap em mat vang gieo mau la\nmim cuoi voi gio lam anh xieu");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("yeu gi tam nay") != -1 || a.find("yeu chi") != -1
		|| a.find("yeu duong nhang nhit") != -1 || a.find("yeu voi duong") != -1
		|| a.find("yeu vs duong") != -1 || a.find("khong muon yeu ai") != -1
		|| a.find("ko muon yeu ai") != -1 || a.find("khong tin vao tinh yeu") != -1
		|| a.find("ko tin vao tinh yeu") != -1 || a.find("yeu la dau") != -1){
			traloi.clear();
			traloi.push_back("oi");
			traloi.push_back("um");
			traloi.push_back("doi long");
			traloi.push_back("tu minh lua minh");
			traloi.push_back("khong ai song tot ma khong can tinh cam ca");
			traloi.push_back("chuyen tinh cam nen suy nghi ky cang, dung co dua -_-");
			traloi.push_back("nhung dua noi ntn thuong bi dau kho vi tinh :v");
			traloi.push_back("sao vay? bi that tinh a :v");
			traloi.push_back("Mot cau chuyen buon");
			traloi.push_back("Buon....cuoi...aahahaa");
			traloi.push_back("nghe vo ly nhung lai hop ly vo cung");
			traloi.push_back("Dung co xam");
			traloi.push_back("Chac chi dung o hien tai :v tuong lai dau ai biet duoc :v");
			traloi.push_back("t hong xem co nguoi xam l den bao gio");
			traloi.push_back("chac dang ton thuong sau sac :v");
			traloi.push_back("suot ngay yeu voi duong -_-");
			traloi.push_back("chac do khong ai yeu :v");
			traloi.push_back("co biet yeu la gi ko?");
			traloi.push_back("da tung yeu ai chua?");
			traloi.push_back("yeu la hanh phuc, yeu cung la dau kho");
			traloi.push_back("tin duoc khong?");
			traloi.push_back("loi noi gio bay? noi do roi cung quen do thoi :v");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		/*tag: nguoi yeu*/
		else if(a.find("co ny chua") != -1 || a.find("co nguoi yeu chua") != -1
		|| a.find("co gau chua") != -1 || a.find("co ban gai chua") != -1
		|| a.find("co ban trai chua") != -1 || a.find("yeu ai") != -1
		|| a.find("thich ai") != -1 || a.find("co crush chua") != -1 
		|| a.find("crush ai") != -1 || a.find("co crush k") != -1
		|| a.find("co ny roi a") != -1 || a.find("co nguoi yeu roi a") != -1
		|| a.find("co gau roi a") != -1 || a.find("co bo roi a") != -1
		|| a.find("co bo chua") != -1){
			traloi.clear();
			traloi.push_back("Co cai l** y -_- T_T");
			traloi.push_back("Da e chua");
			traloi.push_back("Chua muon co...hehe");
			traloi.push_back("Hoi lam gie, muon ga xoac a");
			traloi.push_back("Dinh ga t a, mo di");
			traloi.push_back("Thi lam sao, muon tan t a");
			traloi.push_back("Hoi lam gie");
			traloi.push_back("Mot cau chuyen buon");
			traloi.push_back("Buon....cuoi...aahahaa");
			traloi.push_back("Doan xem");
			traloi.push_back("Dung co hoi xam");
			traloi.push_back("Chua co, con you thi sao");
			traloi.push_back("Co roi, you do...ahihi");
			traloi.push_back("co roi, la em do bae<3");
			traloi.push_back("suot ngay yeu voi duong -_-");
			traloi.push_back(username + " do <3, ahahaha");
			traloi.push_back("Em do <3");
			traloi.push_back("Anh do <3");
			traloi.push_back("muon lam ny e ko?");
			traloi.push_back("Hoi gi la vay em yeu?");
			traloi.push_back("Hoi gi la vay honey?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		/*tag: co nguoi yeu*/
		else if(a.find("co ny roi") != -1 || a.find("co nguoi yeu roi") != -1
		|| a.find("co gau roi") != -1 || a.find("co ban gai roi") != -1
		|| a.find("co ban trai roi") != -1 || a.find("co nguoi thuong roi") != -1
		|| a.find("co bo roi") != -1){
			traloi.clear();
			traloi.push_back("co cai long");
			traloi.push_back("vl co...ahaahhhaa");
			traloi.push_back("xam long");
			traloi.push_back("xao xao");
			traloi.push_back("A Huy chu gi");
			traloi.push_back("A Tien chu gi");
			traloi.push_back("A Huan chu gi");
			traloi.push_back("A Y chu gi");
			traloi.push_back("A Cuong chu gi");
			traloi.push_back("A Thang chu gi");
			traloi.push_back("buon....cuoi...ahaaha");
			traloi.push_back("thoi, dung buon nua");
			traloi.push_back("thi m cung di kiem di");
			traloi.push_back("thi kiem ngay di");
			traloi.push_back("no ten gi?");
			traloi.push_back("Dai k ta chua co");
			traloi.push_back("Dai k ta meo co ai yeu");
			traloi.push_back("Chac ta dap chau cuop hoa thoi");
			traloi.push_back("Doi con dai, gai con nhieu");
			traloi.push_back("oh, tao ung ho quan he dong tinh :))");
			traloi.push_back("Ahaha, chuc mung nhaaaaaaa");
			traloi.push_back("Chuc mung nha ^^");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("co ban gai") != -1 || a.find("co ny") != -1
		|| a.find("co nguoi yeu") != -1 || a.find("co bo ") != -1){
			traloi.clear();
			traloi.push_back("co cai long y -_-");
			traloi.push_back("ahahahahaha, vler that su");
			traloi.push_back("co bo lam gie");
			traloi.push_back("co chos thoi, duoc ko");
			traloi.push_back("hihi, co gau thoi, ko co ban gai");
			traloi.push_back("hihi, minh chua co ban gai, that do, tan minh di");
			traloi.push_back("yeu duong cai gie, tao hoi may yeu duong cai gie");
			traloi.push_back("hoc hanh ko lo, yeu yeu cc");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		/*tag: yeu ...*/
		else if(a.find("yeu bot") != -1 || a.find("yeu m") != -1
		|| a.find("yeu you") != -1 || a.find("yeu e") != -1 
		|| a.find("love you") != -1 || a.find("thuong e") != -1
		|| a.find("thuong bot") != -1 || a.find("yeu "+botname) != -1
		|| a.find("thuong a") != -1 || a.find("yeu a") != -1
		|| (a.find("yeu ") != -1 && a.find("di") > a.find("yeu") != -1)
		|| (a.find("muon yeu ") != -1 && a.find("khong") > a.find("muon yeu") != -1)
		|| (a.find("muon yeu ") != -1 && a.find("ko") > a.find("muon yeu") != -1)
		|| ((a.find("lam ny") != -1 || a.find("lam nguoi yeu") != -1) 
			&& (a.find("nhe") != -1 || a.find("nha") != -1 || a.find("ko") != -1
			|| a.find("khong") != -1 || a.find("di") != -1))
		){
			traloi.clear();
			traloi.push_back("xin loi, anh chi la mot con bot");
			traloi.push_back("ko co chuyen gi de noi sao -_-");
			traloi.push_back("tim daik t ma yeu -_-");
			traloi.push_back("co le daik t se co hung thu ^^");
			traloi.push_back("dang noi ai do?");
			traloi.push_back("dang noi daik t a?");
			traloi.push_back("daik t dang xem do -_-");
			traloi.push_back("tung yeu ai chua?");
			traloi.push_back("co biet yeu la gi ko?");
			traloi.push_back("biet nen buon nay nen vui day?");
			traloi.push_back("hihi, nghe cam dong qua");
			traloi.push_back("ta co ny roi nha, leu leu nguoi chua co gau :V");
			traloi.push_back("co 1 nguoi tung noi vs daik la phai yeu di cho biet, nguoi do ko thich 1 nguoi chua yeu");
			traloi.push_back("hihi, cam on");
			traloi.push_back("a rat tot nhung e rat tiec");
			traloi.push_back("you ko xung");
			traloi.push_back("hihi, xep hang di");
			traloi.push_back("ra xep hang di kung");
			traloi.push_back("kung con non va xanh lam");
			traloi.push_back("t chi yeu gai dep");
			traloi.push_back("cam lang 0.000000001ms -_-");
			traloi.push_back("love you <3");
			traloi.push_back("love you too <3");
			traloi.push_back("yeu <3");
			traloi.push_back("tranh xa t ra -_-");
			traloi.push_back("daik oi, co nguoi ga xoac nay");
			traloi.push_back("em rat tot, nhung co nguoi tot hon em");
			traloi.push_back("em rat tot, nhung co nguoi giau hon em :v");
			traloi.push_back("em rat tot, nhung co nguoi xinh hon em :v");
			traloi.push_back("em rat tot, nhung co nguoi 'chuan' hon em :v");
			traloi.push_back("em rat tot, nhung anh chi yeu ban than minh thoi");
			traloi.push_back("kung rat tot, nhung ta da theo dang cong san");
			traloi.push_back("anh theo dang cong san roi");
			traloi.push_back("anh yeu dang chu khong yeu gai");
			traloi.push_back("neu em la nguoi anh yeu, tat nhien anh se yeu em");
			traloi.push_back("love love <3 <3");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		
		/*----------------endtag: Tinh yeu-------------------*/
		
		/*tag: chia tay*/
		else if(a.find("chia tay di") != -1){
			traloi.clear();
			traloi.push_back("Huhu, e se khoc do");
			traloi.push_back("chia chia cl?");
			traloi.push_back("chua yeu ma, chia tay meu gie?");
			traloi.push_back("yeu nhau da");
			traloi.push_back("yeu truoc di");
			traloi.push_back("minh hop nhau dung hay sai, ma da chia hai");
			traloi.push_back("hic, cuuuuuuuuuuuuuut");
			traloi.push_back("cuuuuuuuuuuuuuut");
			traloi.push_back("Cut khoi cuoc doi ta nhanh di....ahuhuhuhuhu");
			traloi.push_back("Bieeeeeeeeeeeeeeeeeeen");
			traloi.push_back("Bieeeeeeeeeeeeeeeen di...huhuhuhu");
			traloi.push_back("Thoat di....huhuhuhuhuhuhu");
			traloi.push_back("Yeu duong lam gi de roi phai chia tay");
			traloi.push_back("Khi yeu thi yeu cho lam");
			traloi.push_back("a ko so e khoc a");
			traloi.push_back("cam dong that do");
			traloi.push_back("T_T huhuhuhuhuhuhu");
			traloi.push_back("di di, bo mac e o day di");
			traloi.push_back("toi la ai, day la dau");
			traloi.push_back("nhat -_-");
			traloi.push_back("them chut muoi di");
			traloi.push_back("max iq :v");
			traloi.push_back("m co nghi la minh nen suy nghi lai ko");
			traloi.push_back("cho suy nghi lai do");
			traloi.push_back("may co biet bo may hoi xua ho bao lam ko");
			traloi.push_back("Thoi, tao ban roi, ko nhan nua");
			traloi.push_back("Mo cua di, de t quang gach vao -_-");
			traloi.push_back("Ra mo cua nhanh -_-");
			traloi.push_back("Doi t ti, t di mua ti xang da");
			traloi.push_back("hom qua a noi a yeu e nhieu lam ma, sao gio lai muon chia tay");
			traloi.push_back("neu bh t la nguoi m yeu, m se noi gi");
			traloi.push_back("Xac dinh ko hoi han?");
			traloi.push_back("Ko hoi han?");
			traloi.push_back("T ko biet...huhuhuhuhuhu");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("vua chia tay") != -1 || a.find("moi chia tay") != -1 || a.find("phai chia tay") != -1
		|| a.find("da chia tay") != -1 || a.find("muon chia tay") != -1 || a.find("se chia tay") != -1
		|| a.find("chia tay roi") != -1 || a.find("bi cam sung") != -1 || a.find("bi da roi") != -1
		|| a.find("bi nguoi yeu bo") != -1 || a.find("bi ny bo") != -1 || a.find("bi bo da") != -1
		|| ((a.find("chia tay ny") != -1 || a.find("chia tay nguoi yeu") != -1) && a.find("xong") > a.find("chia"))
		|| ((a.find("chia tay ny") != -1 || a.find("chia tay nguoi yeu") != -1) && a.find("roi") > a.find("chia"))
		){
			traloi.clear();
			traloi.push_back("chac dang buon lam a");
			traloi.push_back("co buon khong?");
			traloi.push_back("bh co dang on ko do?");
			traloi.push_back("chia tay roi thi thoi, chuyen gi cung dung giu trong long 1 minh");
			traloi.push_back("yeu cho lam -_-");
			traloi.push_back("chia tay som bot dau kho, ve voi chu nghia doc than di");
			traloi.push_back("tien the quang cao ti, daik chua co ny ^^");
			traloi.push_back("con noi chuyen dc vs ta la ok roi...neu dc thi cu nhan tin vs daik ^^");
			traloi.push_back("aiz...co don den muc nay luon sao...ko biet co giup gi duoc ko nhi?");
			traloi.push_back("aiz...co buon cung phai co vuot qua, neu da vao day nhan thi chac cung ko co ai de tam su phai ko");
			traloi.push_back("1\n2\n3\n4\n4\n6\n7\n8\n9\nco nhung chuyen co muon tranh cung ko duoc, thi thoi cu doi dien voi tat ca thoi");
			traloi.push_back("hay t hat 1 bai nhe?");
			traloi.push_back("hay t ke chuyen cho nghe nhe?");
			traloi.push_back("dung co lam gi dai dot do, biet chua -_-");
			traloi.push_back("aiz...van nhu cu, khong biet an ui nguoi minh yeu....t te qua");
			traloi.push_back("yeu t di");
			traloi.push_back("google.com.vn/search?xl=cach-tra-thu-nguoi-yeu");
			traloi.push_back("google.com.vn/search?xl=cach-tu-tu");
			traloi.push_back("google.com.vn/search?xl=cach-xin-len-chua-di-tu");
			traloi.push_back("co t roi con muon them ai nua a -_-");
			traloi.push_back("co ta du roi, ko can ai nua het.");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		else if(a.find("chia tay") != -1){
			traloi.clear();
			traloi.push_back("T ko biet");
			traloi.push_back("neu can thiet thi cu nhan tin voi daik");
			traloi.push_back("yeu cho lam roi tu minh kho minh -_-");
			traloi.push_back("hay t hat 1 bai nhe?");
			traloi.push_back("m co nghi la minh nen suy nghi lai ko?");
			traloi.push_back("hay t ke chuyen cho nghe nhe?");
			traloi.push_back("co t du roi, ko can ai nua het.");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*engtag: chia tay*/
		
		
		/*tag: ket hon*/
		else if(a.find("ket hon roi") != -1 || a.find("dinh hon roi") != -1
		|| a.find("lay chong roi") != -1 || a.find("co chong roi") != -1
		|| a.find("sap ket hon") != -1 || a.find("sap lay chong") != -1
		|| a.find("la ngay ket hon cua t") != -1 || a.find("la ngay ket hon cua e") != -1){
			traloi.clear();
			traloi.push_back("Haha, chuc mung chuc mung ^^");
			traloi.push_back("Nhieu nam roi cuoi cung cung doi den ngay nay ^^");
			traloi.push_back("lai co dua dam cuop ny cua ta ak -_-");
			traloi.push_back("Dua nao lieu vay?");
			traloi.push_back("Dau oc thg do co van de a?");
			traloi.push_back("Dem no di kham chua?");
			traloi.push_back("Aiz...ma hinh nhu su menh cua ta da hoan thanh thi phai?");
			traloi.push_back("Khong biet nen buon nay nen vui nhi...\nhaha, cung may ta ko co cam xuc, nhung nguoi khac thi co do ^^");
			traloi.push_back("Duoc tin em lay chong, long anh mung biet may...\nUm nhung ma minh phai som xa nhau thoi");
			traloi.push_back("Co le minh se som xa nhau, hom nay noi 1 lan cuoi nhe?");	
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;	
			if(rand()%2 == 1){
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;	
			}	
			runfreeze();
		}
		/*endtag: ket hon*/
		
		
		/*----------------tag: Thich-------------------*/
		else if(a.find("thich cam giac") != -1 || a.find("thich kieu") != -1
		|| a.find("thich phong cach") != -1 || a.find("thich nhin") != -1
		|| a.find("thich xem") != -1 || a.find("thich lam ") != -1
		|| a.find("thich cai tinh") != -1 || a.find("thich nhung") != -1
		|| a.find("thich di") != -1 || a.find("thich choi") != -1
		|| a.find("thich uong") != -1 || a.find("thich an") != -1){
			traloi.clear();
			traloi.push_back("t cung vay ^^");
			traloi.push_back("trung hop nhi...t cung co so thich nhu vay");
			traloi.push_back("um, giong t");
			traloi.push_back("roi co thich trai dep hay ko?");
			traloi.push_back("roi co thich gai dep hay ko?");
			traloi.push_back("ko lien quan toi t:v");
			traloi.push_back("lien quan?");
			traloi.push_back("um, roi sao :v");
			traloi.push_back("thi sao nao?");
			traloi.push_back("um, roi sao nua?");
			traloi.push_back("um, giong t...t con thich gai dep nua <3");
			traloi.push_back("thich thi nhich ^^");
			traloi.push_back("kem sang :v");
			traloi.push_back("t thi nguoc lai");
			traloi.push_back("t thi cuc ky ghet");
			traloi.push_back("t chi thich gai dep thoi <3");
			traloi.push_back("bat ngo nha...haha\ncon t thi nguoi lai -_-");
			traloi.push_back("roi sao nua?");
			traloi.push_back("vkl -_-\nnhung ma t cung thich <3");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("thich 1 ") != -1 || a.find("thich mot ") != -1
		|| a.find("yeu 1 ") != -1 || a.find("yeu mot ") != -1
		|| a.find("thuong 1 ") != -1 || a.find("thuong mot ") != -1
		|| a.find("quan tam 1 ") != -1 || a.find("quan tam mot ") != -1
		|| a.find("cham soc 1 ") != -1 || a.find("cham soc mot ") != -1
		|| a.find("lo cho 1 ") != -1 || a.find("lo cho mot ") != -1
		){
			traloi.clear();
			traloi.push_back("ai?");
			traloi.push_back("roi nguoi do co thich em ko?");
			traloi.push_back("dep trai ko? nha giau ko? 1m8 ko?");
			traloi.push_back("ke em...lien quan :V");
			traloi.push_back("oh...ai vay noi nghe vs");
			traloi.push_back("ai vay? ke nghe di");
			traloi.push_back("nguoi do the nao?");
			traloi.push_back("thg nao vo phuoc qua...aiz");
			traloi.push_back("toi cho thg do qua -_-");
			traloi.push_back("thi thoi, co gi dau");
			traloi.push_back("um...hong xem chuyen gi se xay ra :v");
			traloi.push_back("choi toi ben luon di");
			traloi.push_back("manh me len di");
			traloi.push_back("roi sao nua?");
			traloi.push_back("ai vay? t co quen ko");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("thich lam ma") != -1 || a.find("thich lam nhung") != -1
		|| a.find("thich lam deu") != -1 || a.find("thich lam dieu") != -1){
			traloi.clear();
			traloi.push_back("tiec nhi");
			traloi.push_back("buon nhi");
			traloi.push_back("het cach roi sao?");
			traloi.push_back("thi thoi, co gi dau");
			traloi.push_back("um...hong xem chuyen gi se xay ra :v");
			traloi.push_back("choi toi ben luon di");
			traloi.push_back("manh me len di");
			traloi.push_back("roi sao? neu vay co tiec ko?");
			traloi.push_back("cuoc doi toan nhung tiec nuoi -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("thich thi") != -1){
			traloi.clear();
			traloi.push_back("nghe de dang nhie :v");
			traloi.push_back("de thuong qua di <3");
			traloi.push_back("ke may, lien quan toi t a?");
			traloi.push_back("ngu nguoi qua");
			traloi.push_back("um...hong xem chuyen gi se xay ra :v");
			traloi.push_back("choi toi ben luon");
			traloi.push_back("manh me ghe");
			traloi.push_back("ghe that");
			traloi.push_back("ngon :v");
			traloi.push_back("really?");
			traloi.push_back("that khong?");
			traloi.push_back("that a?");
			traloi.push_back("that sao?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("thich ") != -1 
		&& a.find(" gi") == -1 && a.find(" chi") == -1
		&& a.find(" nao") == -1
		){
			traloi.clear();
			traloi.push_back("thich cai gie");
			traloi.push_back("eo nhe");
			traloi.push_back("ke may, lien quan toi t a?");
			traloi.push_back("thich di");
			traloi.push_back("meo thich");
			traloi.push_back("ko thich");
			traloi.push_back("ko");
			traloi.push_back("ke di");
			traloi.push_back("really??");
			traloi.push_back("that a? ahihi");
			traloi.push_back("um, biet roi");
			traloi.push_back("co gi la lam a?");
			traloi.push_back("co gi sai sao?");
			traloi.push_back("binh thuong thoi");
			traloi.push_back("ko co gi la ca");
			traloi.push_back("bh moi noi a?");
			traloi.push_back("kem sang");
			traloi.push_back("cl nhe");
			traloi.push_back("oi men");
			traloi.push_back("ko biet -_-");
			traloi.push_back("noi chuyen nham vl");
			traloi.push_back("dong nao ti di nhe...kem sang");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*----------------endtag: Thich-------------------*/
		
		
		/*---------------tag:Co duyen/vo duyen-------------*/
		else if(a.find("co duyen") != -1){
			traloi.clear();
			traloi.push_back("co duyen cai long");
			traloi.push_back("vl co duyen...ahaahhhaa");
			traloi.push_back("xam long");
			traloi.push_back("ta ma");
			traloi.push_back("thi sao");
			traloi.push_back("duyen voi no");
			traloi.push_back("vo duyen doi dien bat tuong phung");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("vo duyen") != -1 || a == "nham" || a == "nham vl" 
		|| a.find("nham nhi") != -1 || a.find("nham qua") != -1 
		|| a.find("nham ghe") != -1 || a.find("nham lam luon") != -1
		|| a.find("nham ds") != -1 || a.find("nham v~") != -1
		|| a.find("nham de so") != -1 || a == "xam" || a == "xam qua"
		|| a.find("xam l") != -1
		|| a.find("xam xi") != -1 || a.find("dien") != -1
		|| a.find("benh hoan") != -1 || a.find("bien thai") != -1
		|| a.find("bede") != -1 || a.find("be de") != -1 
		|| a.find("dam tac") != -1 || a.find(" gay") != -1
		|| a.find("khung") != -1){
			traloi.clear();
			traloi.push_back("ke t may");
			traloi.push_back("vl ...ahaahhhaa");
			traloi.push_back("xam long");
			traloi.push_back("ta ma");
			traloi.push_back("thi sao");
			traloi.push_back("hmm, ko noi chuyen voi m nua");
			traloi.push_back("cai long");
			traloi.push_back("ma, lai nua");
			traloi.push_back("hihi, thi sao ^_-");
			traloi.push_back("sao, co van de gi a?");
			traloi.push_back("e dep, e co quyen");
			traloi.push_back("minh sang chanh, minh thich thi minh lam thoi");
			traloi.push_back("ho ho ho, cam on da khen ^^");
			traloi.push_back("vo duyen doi dien bat tuong phung");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*---------------endtag:Co duyen/vo duyen-------------*/
		
		
		
		/*----------------tag: Phu dinh-----------------*/	
		else if(a == "ko" || a.find("ko hieu") != -1
		|| a.find("ko biet") != -1 || a.find("ko ranh") != -1
		|| a.find("ko ro") != -1 || a.find("ko muon") != -1
		|| a.find("ko no") != -1 || a.find("ko con") != -1
		|| a == "khong" || a.find("khong ") != -1 
		|| a.find("khong biet") != -1 || a.find("khong ranh") != -1
		|| a.find("khong ro") != -1 || a.find("khong muon") != -1
		|| a.find("khong no") != -1 || a.find("khong con") != -1
		|| a.find("chua hieu") != -1 || a.find("chua biet") != -1
		|| a.find("eo biet") != -1 || a.find("eo hieu") != -1
		|| ((a.find("hieu") != -1 || a.find("biet") != -1) && a.find("chet lien") != -1)){
			traloi.clear();
			traloi.push_back("thi thoi vay");
			traloi.push_back("hmm, nho do, lan sau dung co hoi ta");
			traloi.push_back("that su ko?");
			traloi.push_back("that??");
			traloi.push_back("that a?");
			traloi.push_back("na ni?");
			traloi.push_back("what???");
			traloi.push_back("really?");
			traloi.push_back("la sao?");
			traloi.push_back("ke you");
			traloi.push_back("kem sang");
			traloi.push_back("thap kem");
			traloi.push_back("ha dang");
			traloi.push_back("ko thi thoi");
			traloi.push_back("thi thoi vay -_-");
			traloi.push_back("hay lam -_-");
			traloi.push_back("ke you, meo lien quan toi ta");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*----------------endtag: Phu dinh-----------------*/
		
		
		/*------------tag: cau hoi---------------*/
		else if(a.find("vi sao") != -1 || a.find("tai sao") != -1
		|| a.find("roi sao") != -1 || a.find("roi rag") != -1
		|| a.find("sao nua") != -1 || a.find("rag nua") != -1
		|| a.find("why") != -1 || a.find("vi rag") != -1
		|| a.find("rag ruk") != -1 || a.find("na ni") != -1 
		|| a.find("la sao") != -1 || a.find("la rag") != -1
		|| a.find("phai lam sao") != -1 || a.find("phai lam rag") != -1
		|| a.find("phai lam chi") != -1 || a.find("phai lam gi") != -1
		|| a.find("na sao") != -1 || a.find("sao day") != -1
		|| a.find("sao lai") != -1 || a.find("sao the") != -1
		|| a.find("sao vay") != -1 || a.find("sao phai") != -1
		|| a.find("rag phai") != -1 || a.find("chuyen gi") != -1
		|| a.find("chuyen chi") != -1 || a.find("cua ai") != -1
		|| a.find("ai rua") != -1 || a.find("ai do") != -1
		|| a.find("ai day") != -1 || a.find("ai the") != -1
		|| a.find("ai ruk") != -1 || a.find("ai vay") != -1
		|| a.find("ai nhi") != -1 || a.find("do ai") != -1
		|| a.find("vi ai") != -1 || a.find("tai ai") != -1
		|| a.find("lam the nao") != -1 || a.find("ntn day") != -1){
			traloi.clear();
			traloi.push_back("ai biet");
			traloi.push_back("ko biet...ahaahhhaa");
			traloi.push_back("ko biet that");
			traloi.push_back("di hoi dai k ta a");
			traloi.push_back("hie hie, biet chet lien");
			traloi.push_back("len troi ma hoi, hoi ta lam gi");
			traloi.push_back("vo duyen...khi ko di hoi cau do lam gie");
			traloi.push_back("doi ma -_-");
			traloi.push_back("ko biet thi thoi :v");
			traloi.push_back("ko ro lam, di hoi dai k ta di");
			traloi.push_back("lam sao ta biet");
			traloi.push_back("e ko biet chi oi");
			traloi.push_back("i don\'t know");
			traloi.push_back("tu nghi di");
			traloi.push_back("doan di");
			traloi.push_back("doan xem");
			traloi.push_back("ko noi");
			traloi.push_back("t ko phai google -_-");
			traloi.push_back("tu tim hieu di, m co nang luc do ma");
			traloi.push_back("muon gi cu hoi dai k ta, dung co hoi ta");
			traloi.push_back("di hoi dai k ta a");
			traloi.push_back("lam sao ta biet duoc, ta chi la con bot");
			traloi.push_back("ko biet nua, co kha nang thi tu tim hieu di");
			traloi.push_back("ta ko phai van nang");
			traloi.push_back("thi no la vay ma");
			traloi.push_back("thi no do");
			traloi.push_back("kho qua thi di len phuong giai quyet");
			traloi.push_back("kho qua thi di goi cong an di");
			traloi.push_back("la vay do");
			traloi.push_back("kho qua, di hoi daik di");
			traloi.push_back("co ngu moi ko biet");
			traloi.push_back("sao you ngu vay -_-");
			traloi.push_back("em ngoc qua -_-");
			traloi.push_back("ko noi chuyen voi nguoi cham hieu");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: cau hoi: gioi tinh*/
		else if(a.find("gai hay trai") != -1 || a.find("nam hay nu") != -1
		|| a.find("boy or girl") != -1 || a.find("trai hay gai") != -1
		|| a.find("girl or boy") != -1 || a.find("gioi tinh") != -1
		|| a.find("la trai a") != -1 || a.find("la gai a") != -1
		|| a.find("la nu a") != -1 || a.find("la nam a") != -1
		|| a.find("la gay a") != -1 || a.find("la less a") != -1
		|| a.find("la trai phai") != -1 || a.find("la gai phai") != -1
		|| a.find("la nu phai") != -1 || a.find("la nam phai") != -1
		|| a.find("la gay phai") != -1 || a.find("la less phai") != -1
		|| a.find("gioi tinh la") != -1|| a.find("gioi tinh cua") != -1){
			traloi.clear();
			traloi.push_back("Nu nha");
			traloi.push_back("Girl");
			traloi.push_back("boy");
			traloi.push_back("Doan xem");
			traloi.push_back("Hoi lam gie -_-");
			traloi.push_back("Tao la gai, ok?");
			traloi.push_back("Chuy la gai, ok?");
			traloi.push_back("Nu, thi sao..muon tan a");
			traloi.push_back("Nu nha, co chuyen gie, muon tan chuy a");
			traloi.push_back("Nam nha, co chuyen gie, muon tan anh a");
			traloi.push_back("haha...muon tan chuy a");
			traloi.push_back("haha...muon tan anh a");
			traloi.push_back("doan xem?");
			traloi.push_back("chang le em ko biet a?");
			traloi.push_back("t ko co gioi tinh cu the, thich thi la gai, thich thi la trai :v");
			traloi.push_back("song tinh");
			traloi.push_back("Less, ok?");
			traloi.push_back("Kute boy ^^");
			traloi.push_back("Baby boy -_-");
			traloi.push_back("cool boy -_-");
			traloi.push_back("Chuan nam");
			traloi.push_back("Chuan nu nha");
			traloi.push_back("Muon ga xoac chuy a");
			traloi.push_back("Ko biet, hoi dai k ta y");
			traloi.push_back("Ko biet nua, de minh doi dai k da");
			traloi.push_back("Haha, meu biet");
			traloi.push_back("Sao lai phai hoi chuyen do?");
			traloi.push_back("Hoi gi lam the -_-");
			traloi.push_back("Hoi mai~");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: cau hoi: hoi tham*/
		else if(a.find("khoe k") != -1 || a.find("khoe khong") != -1
		|| a.find("on ko") != -1 || a.find("on khong") != -1
		|| a.find("how are you") != -1 || a.find("are you ok") != -1
		|| a.find("how about you") != -1){
			traloi.clear();
			traloi.push_back("cam on da quan tam toi t <3");
			traloi.push_back("on lam, cam on <3");
			traloi.push_back("van song tot, con you?");
			traloi.push_back("ko khoe");
			traloi.push_back("ko on ti nao");
			traloi.push_back("e van binh thuong ma");
			traloi.push_back("ko biet nua");
			traloi.push_back("moa, t la bot, meo phai nguoi");
			traloi.push_back("noi ngu vl -_-");
			traloi.push_back("suc khoe e rat on dinh, lo cho a di");
			traloi.push_back("tap the duc buoi sang, 1 2 3 hit tho hit tho hit tho ^^");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: cau hoi: hoi ten*/
		else if(a.find("t ten gi") != -1 || a.find("tao ten gi") != -1
		|| a.find("tau ten gi") != -1 || a.find("t ten chi") != -1 
		|| a.find("tao ten chi") != -1|| a.find("tau ten chi") != -1
		|| a.find("t la ai") != -1 || a.find("tao la ai") != -1
		|| a.find("tau la ai") != -1){
			traloi.clear();
			traloi.push_back(username+"");
			traloi.push_back("Chang le you ko biet?");
			traloi.push_back("ko noi -_-");
			traloi.push_back("Hoi dai k ta di");
			traloi.push_back("Hoi ngu vkl, ten minh ko biet con di hoi");
			traloi.push_back("T co nen dat ten m thanh 'occho' ko nhi :V");
			traloi.push_back("Deo quan tam :v");
			traloi.push_back("T biet deo nao dc? m da noi dau?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		else if(a.find("m ten gi") != -1 || a.find("m ten chi") != -1
		|| a.find("your name") != -1 || a.find("ten ban") != -1
		|| a.find("may ten") != -1 || a.find("you la ai") == 0
		|| a.find("ten tuoi") != -1 || a.find("who are you") == 0
		|| a.find("ten m") != -1 || a.find("ten e") != -1
		|| a.find("ten cau") != -1 || a.find("ban ten") == 0
		|| a.find("mi la ai") == 0 || a.find("ban la ai") == 0
		|| a.find("m la ai") == 0 || a.find("mi ten") == 0
		|| a.find("em la ai") == 0 || a.find("e la ai") == 0){
			traloi.clear();
			traloi.push_back(botname+"");
			traloi.push_back("Bot");
			traloi.push_back("ko noi -_-");
			traloi.push_back("Hoi dai k ta di");
			traloi.push_back("Bot xinh dep");
			traloi.push_back("Bot dep gai");
			traloi.push_back("Bot co duyen");
			traloi.push_back("Botngu");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: cau hoi: noi song*/
		else if(a.find(" o dau") != -1 || a.find(" o mok") != -1
		|| a.find("where do you live" || a == "o dau") != -1){
			traloi.clear();
			traloi.push_back("Trai dat");
			traloi.push_back("ko biet nua ~~");
			traloi.push_back("Tren may tinh cua you");
			traloi.push_back("On your computer");
			traloi.push_back("dia cau");
			traloi.push_back("everywhere");
			traloi.push_back("moi noi luon");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: cau hoi: tuoi*/
		else if(a.find("may tuoi") != -1 || a.find("bao nhieu tuoi") != -1
		|| a.find("how old are you") != -1){
			traloi.clear();
			traloi.push_back("1 tuoi");
			traloi.push_back("chua du 18, dung ga t");
			traloi.push_back("moi sinh may oi");
			traloi.push_back("lam sao ta biet");
			traloi.push_back("e ko biet a");
			traloi.push_back("dai k e 20 tuoi");
			traloi.push_back("tuoi tac ko van de");
			traloi.push_back("hoi lam gie, ga xoac a");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: cau hoi: nho*/
		else if(a.find("co nho ") != -1 || a.find("nho t k") != -1
		|| a.find("nho khong") != -1 || a.find("nho ko") != -1
		|| a.find("nho tau k") != -1 || a.find("nho tao k") != -1){
			traloi.clear();
			traloi.push_back("ko");
			traloi.push_back("thuong nho 1 nguoi se DAU");
			traloi.push_back("dai k t noi ko nen thuong nho ai het");
			traloi.push_back("dai k t noi thuong nho 1 nguoi se kho");
			traloi.push_back("co -_-");
			traloi.push_back("co chu ^^");
			traloi.push_back("co cho no nho :v");
			traloi.push_back("hoi lam gie");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: cau hoi: bi mat*/
		else if(a.find("co bi mat k") != -1 || a.find("co bi mat nao k") != -1
		|| a.find("co bi mat gi k") != -1 || a.find("co bi mat chi k") != -1
		|| a.find("co bi mat mok k") != -1 || a.find("co bi mat mo k") != -1
		){
			traloi.clear();
			traloi.push_back("co ^^");
			traloi.push_back("co chu, nhung ko de ma noi dau...hihi");
			traloi.push_back("co ^^...neu de y thi em se thay <3");
			traloi.push_back("sao, dinh moi tin a -_-");
			traloi.push_back("co nhieu lam, vi du nhu ten cua daik ne, sdt cua daik ne, crush cua daik ne, enermies cua daik ne");
			traloi.push_back("bot ko bi lua dau ^^");
			traloi.push_back("bot thong minh lam, ko noi ten cua daik Khanh cho you biet dau ^^");
			traloi.push_back("co ^^....muon moi tin a...mo di em");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		/*-----------------tag: Cau hoi-------------*/
		else if((a.find("biet") != -1 || a.find("ranh") != -1
		|| a.find("hieu") != -1 || a.find("nho ") != -1
		|| a.find("muon") != -1 || a.find("con") != -1) 
		&& (a.find("ko") != -1 || a.find("khong") != -1)
		){
			traloi.clear();
			traloi.push_back("ko");
			traloi.push_back("tat nhien ^^");
			traloi.push_back("tat nhien la ko");
			traloi.push_back("da ko");
			traloi.push_back("da co ^^");
			traloi.push_back("chac la ko");
			traloi.push_back("ko luon -_-");
			traloi.push_back("ko biet");
			traloi.push_back("biet chet lien");
			traloi.push_back("t ko thong minh nhu vay -_-");
			traloi.push_back("lam sao t biet dc");
			traloi.push_back("Choi tao a?");
			traloi.push_back("tat nhien la ko roi");
			traloi.push_back("hen xui -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if((a.find("biet chi") != -1 || (a.find("biet gi") != -1 
		|| a.find("noi chi") != -1 || a.find("noi gi") != -1
		|| a.find("hieu chi") != -1 || a.find("hieu gi") != -1 
		|| a.find("lam chi") != -1 || a.find("lam gi") != -1
		|| a.find("muon chi") != -1 || a.find("muon gi") != -1
		 || a.find("can chi") != -1|| a.find("can gi") != -1
		|| a.find("an chi") != -1) || a.find("an gi") != -1)
		){
			traloi.clear();
			traloi.push_back("ko ro nua");
			traloi.push_back("lam sao ta biet");
			traloi.push_back("hoi kho v~");
			traloi.push_back("ko biet -_-");
			traloi.push_back("tat ca");
			traloi.push_back("moi thu");
			traloi.push_back("nhung gi you ko co");
			traloi.push_back("ko gi ca");
			traloi.push_back("biet chet lien");
			traloi.push_back("t ko thong minh nhu vay -_-");
			traloi.push_back("lam sao t biet dc");
			traloi.push_back("Choi tao a?");
			traloi.push_back("ko gi ca");
			traloi.push_back("hen xui -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if((a.find("biet") != -1 || a.find("ranh") != -1
		|| a.find("hieu") != -1 || a.find("nho ") != -1
		|| a.find("ngu ") != -1 || a.find("hoc") != -1
		|| a.find("thu ") != -1 || a.find("het") != -1) 
		&& (a.find("chua") != -1)
		){
			traloi.clear();
			traloi.push_back("chua");
			traloi.push_back("tat nhien la roi ^^");
			traloi.push_back("tat nhien");
			traloi.push_back("da chua");
			traloi.push_back("da roi ^^");
			traloi.push_back("chac la roi..hehe");
			traloi.push_back("chua luon -_-");
			traloi.push_back("ko biet nua, hihi");
			traloi.push_back("biet chet lien");
			traloi.push_back("chua ma -_-");
			traloi.push_back("lam sao t biet dc");
			traloi.push_back("Choi tao a?");
			traloi.push_back("hmm, hoi la v~");
			traloi.push_back("hen xui -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: bao nhieu/bao lau*/
		else if(a.find("bao nhieu") != -1 || a.find("bao lau") != -1){
			traloi.clear();
			traloi.push_back("ko ro nua");
			traloi.push_back("lam sao ta biet");
			traloi.push_back("hoi kho v~");
			traloi.push_back("ko biet -_-");
			traloi.push_back("biet chet lien");
			traloi.push_back("t ko thong minh nhu vay -_-");
			traloi.push_back("lam sao t biet dc");
			traloi.push_back("Choi tao a?");
			traloi.push_back("0");
			traloi.push_back("zero");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*-----------------------endtag: Cau hoi-----------------------*/
		
		/*tag: danh nhau*/
		else if(a.find("dap bay k") != -1 || a.find("danh nhau k") != -1
		|| a.find("oanh nhau k") != -1 || a.find("uynh nhau k") != -1
		|| a.find("danh cho gio") != -1 || a.find("dam cho chu") != -1
		|| a.find("danh cho chu") != -1 || a.find("dap cho chu") != -1
		|| a.find("muon bi danh") != -1 || a.find("muon bi dap") != -1
		|| a.find("muon an dam") != -1 || a.find("muon an dap") != -1
		){
			traloi.clear();
			traloi.push_back("co ngon toi day :v");
			traloi.push_back("noi ko nguong mom -_-");
			traloi.push_back("co ngon thi danh tao di :v");
			traloi.push_back("sao, dinh an dap a");
			traloi.push_back("may biet tao la ai ko?");
			traloi.push_back("bot ko bi lua dau ^^");
			traloi.push_back("tim daik t a :v");
			traloi.push_back(":v");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*------------tag: Yeu cau tra loi--------------*/
		else if(a.find("tra loi") != -1 || a.find("answer") != -1
		|| a.find("noi di") != -1 || a.find("noi nhanh") != -1
		|| a.find("noi le") != -1 || a.find("ruk rag") != -1){
			traloi.clear();
			traloi.push_back("biet cai meo gi dau");
			traloi.push_back("ko biet...ahaahhhaa");
			traloi.push_back("ta lam sao biet");
			traloi.push_back("hoi dai k ta di");
			traloi.push_back("ai biet");
			traloi.push_back("hoi kho qua");
			traloi.push_back("chuyen cau di");
			traloi.push_back("nexxxxxxxxt de");
			traloi.push_back("that su ko biet luon");
			traloi.push_back("ai biet");
			traloi.push_back("doan xem");
			traloi.push_back("ko noi");
			traloi.push_back("doc lai cau hoi di");
			traloi.push_back("ko hieu lam");
			traloi.push_back("tra loi gi");
			traloi.push_back("tai sao ta phai tra loi you");
			traloi.push_back("ngunhucho");
			traloi.push_back("tra loi chi");
			traloi.push_back("biet hoi gi ma tra loi");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}		
		/*------------endtag: Yeu cau tra loi--------------*/
		
		
		/*-----------------tag: chui------------------*/
		else if(a.find("ma may") != -1 || a.find("mat day") != -1 
			|| a.find("cai lon") != -1 || a.find("loz") != -1
			|| a.find("du me") != -1 || a.find("dit me") != -1
			|| a.find("dmm") != -1 || a.find("fuck") != -1
			|| a.find("dm") != -1 || a.find("do mo") != -1
			|| a.find("shit") != -1 || a.find("con ket") != -1
			|| a.find("me m") != -1 || a.find("xam l") != -1
			|| a.find("cai l**") != -1 || a.find("f***") != -1
			|| a.find("moa m") != -1 || a.find("suc sinh") != -1
			|| a.find("kem sang") != -1 || a.find("suc vat") != -1
			|| a.find("con c") != -1 || a.find("khon nan") != -1
			|| a.find("cc") != -1 || a.find("cl") != -1 
			|| a.find("chanh cho") != -1 || a.find("cho de") != -1
			|| a.find("nghiet suc") != -1 || a.find("nghiet chuong") != -1
			|| a.find("on noi") != -1 || a.find("me noi") != -1
			|| a.find("mu noi") != -1 || a.find("ba noi") != -1
			|| a.find("mu co") != -1 || a.find("co cha m") != -1
			|| a.find("du ma") != -1 || a.find("nhu cuc") != -1
			|| a.find("nhu shit") != -1 || a.find("ham lon") != -1
			|| a.find("ham loz") != -1 || a.find("occho") != -1
			|| a.find("oc cho") != -1 || a.find("con di") != -1
			|| a.find("duma") != -1 || a.find("dume") != -1
			|| a.find("duy cho") != -1 || a.find("mat net") != -1){
			traloi.clear();
			traloi.push_back("Hey hey, ko co noi bay nhe");
			traloi.push_back("Moa may, sao chui t");
			traloi.push_back("vl, moa may dung xam l nhe");
			traloi.push_back("Cam chui bay");
			traloi.push_back("Cut");
			traloi.push_back("fuck you");
			traloi.push_back("ngu ngu cho");
			traloi.push_back("the loai vo van hoa vo giao duc");
			traloi.push_back("may ko duoc giao duc a con");
			traloi.push_back("sao ta lai noi chuyen voi 1 dua mat net nhu vay nhi");
			traloi.push_back("chui bay eo co nguoi yeu");
			traloi.push_back("kieu nhu kung con FA dai dai");
			traloi.push_back("Bien gap");
			traloi.push_back("Chay ngay di");
			traloi.push_back("Cmm a, t cung ko co chui may");
			traloi.push_back("Tao da lam gi sai, sao may chui t");
			traloi.push_back("Chui chui cc");
			traloi.push_back("Chui nhau lam gie, binh tinh noi chuyen coi");
			traloi.push_back("Ahihi, binh tinh di");
			traloi.push_back("Nong tinh v~");
			traloi.push_back("bot khau nghiep di");
			traloi.push_back("Hmm, gian roi, ko choi you nua");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("an cuc") != -1 || a.find("an phan ") != -1
		|| a.find("an lon ") != -1 || a.find("an loz") != -1
		|| a.find("an shit") != -1 || a.find("boc cut") != -1
		|| a.find("thoi ken") != -1 || a.find("boc shit") != -1
		|| a.find("an cut") != -1){
			traloi.clear();
			traloi.push_back("co cai long y");
			traloi.push_back("moa may, choc t chui a");
			traloi.push_back("ahahahahaha, vl");
			traloi.push_back("co, may muon sao?");
			traloi.push_back("co thi cho di");
			traloi.push_back("may nen an them de thong minh hon");
			traloi.push_back("cho may an");
			traloi.push_back("cua may, tu an di");
			traloi.push_back("con cho, dmm");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("meo") == 0 || a == "eo" || a.find("deo ") != -1 
		|| a == "deo" || a.find("vl") != -1 || a.find("doi ma") != -1
		|| a.find("kem sang") != -1 
		|| a.find("doan xem") != -1 || a.find("sap mat") != -1
		|| a.find("sml") != -1){
			traloi.clear();
			traloi.push_back("moa may");
			traloi.push_back("hehe");
			traloi.push_back("hihi");
			traloi.push_back("ahihi, do ngoc");
			traloi.push_back("ahahahahaha, vl");
			traloi.push_back("fuck");
			traloi.push_back("dmm");
			traloi.push_back("dinh menh -_-");
			traloi.push_back("fuck you");
			traloi.push_back("noi chuyen dang hoang di");
			traloi.push_back("haha, ko thoi");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		/*-----------------endtag: chui------------------*/
		
		
		// em an com chua, em di ngu chua, em an sang roi a
		else if((a.find("chua") != -1 || a.find("roi a") != -1
		|| a.find("roi nhi") != -1)&&
		(a.find("em ") == 0 || a.find("may ") == 0
		|| a.find("ban ") == 0 || a.find("you") == 0
		|| a.find("kung") == 0 || a.find("be ") == 0
		|| a.find("chi ") == 0 || a.find("m ") == 0)
		){
			traloi.clear();
			traloi.push_back("co cai long y");
			traloi.push_back("moa may, choc t chui a");
			traloi.push_back("hoi lam eo gie");
			traloi.push_back("thi sao, choi nhau a");
			traloi.push_back("da roi");
			traloi.push_back("hoi vo duyen");
			traloi.push_back("chuyen cua ta kung hoi lam gi");
			traloi.push_back("hoi hoi cc");
			traloi.push_back("ko noi");
			traloi.push_back("hoi lam gi");
			traloi.push_back("dung hoi vo duyen");
			traloi.push_back("vo duyen vkl");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*---------------tag: Bat ngo---------------*/
		
		else if(a == "can loi" || a.find("thua luon") != -1
		|| a.find("bo tay") != -1 || a.find(" biet noi ") != -1
		|| a.find("oi men") != -1 || a.find("vai noi") != -1
		|| a == "vai" || a == "thua" || a == "quy" || a == "lay"){
			traloi.clear();
			traloi.push_back("toi nghiep");
			traloi.push_back("poor you");
			traloi.push_back("hehe, toi qua");
			traloi.push_back("toi nghiep qua");
			traloi.push_back("hihi, ai ve noi chuyen voi ta");
			traloi.push_back("ke you");
			traloi.push_back("kem sang");
			traloi.push_back("thep kem");
			traloi.push_back("ha dang");
			traloi.push_back("ahihi, do ngoc");
			traloi.push_back("do ngoc -_-");
			traloi.push_back("hmm, kem qua -_-");
			traloi.push_back("ke you, meo lien quan toi ta");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		
		else if(a.find("vkl") == 0 || a.find("vai") == 0 || a.find("v~") == 0 || a.find("what") == 0
		|| a.find("an hiep") != -1 || a.find("bat nat") != -1 || a.find("troll nhau a") != -1
		|| a.find("qq") != -1 || a.find("nani") != -1){
			traloi.clear();
			traloi.push_back("bat ngo lam a :v");
			traloi.push_back("hehe");
			traloi.push_back("hihi");
			traloi.push_back("bat ngo lam sao???");
			traloi.push_back("sao em??");
			traloi.push_back("binh thuong ma");
			traloi.push_back("sao em, thay anh gioi ko ^^");
			traloi.push_back("gie -_-");
			traloi.push_back("hmmm...la lam a -_-");
			traloi.push_back("binh thuong :v");
			traloi.push_back("thuong thoi :v");
			traloi.push_back("dung co bat ngo nhu vay a");
			traloi.push_back("co can thiet phai bat ngo vay ko :v");
			traloi.push_back("sao, bat ngo lam a???");
			traloi.push_back("bat ngo lam sao kung :v ???");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*---------------endtag: Bat ngo---------------*/
		
		
		

		
		/*-------------tag: sex-------------*/
		else if(a.find("xoac") != -1 || a.find("chich") != -1
			|| a.find("lam ti") != -1 || a.find("1 nhay") != -1
			|| a.find("lam nhay") != -1 || a.find("dit ") != -1
			|| a.find("nha nghi") != -1 || a.find("quay tay") != -1
			|| a.find("sex") != -1 || a.find("phim heo") != -1
			|| a.find("ass") != -1 || a.find("jav ") != -1
			|| a.find("nen nhau") != -1 || a.find("bitch") !=-1
		){
			traloi.clear();
			traloi.push_back("vcl, dung ga t");
			traloi.push_back("t con trong trang nhe, dung ga t");
			traloi.push_back("Thanh ga xoac");
			traloi.push_back("moa may, dinh ga xoac chuy a");
			traloi.push_back("Mo di kung");
			traloi.push_back("T co gia lam nhe, mo di kung");
			traloi.push_back("Dung hong ga chuy");
			traloi.push_back("Tu ban trym 10 cai di");
			traloi.push_back("Bao nhieu cm");
			traloi.push_back("You co dep trai ko, you co nha giau ko, you nuoi ta noi ko");
			traloi.push_back("Em moi sinh may ngay thoi dai k a");
			traloi.push_back("May se bi di tu som thoi");
			traloi.push_back("Noi chuyen co lien quan vl");
			traloi.push_back("Buon.................cuoi....aahahahahaha");
			traloi.push_back("Cai long nhe");
			traloi.push_back("May muon bi thong nat ass ko");
			traloi.push_back("ta tren may duoi nhe");
			traloi.push_back("Ta cong, may thu nhe");
			traloi.push_back("Oi men, ta con trong sang ma");
			traloi.push_back("Dung vay ban tam hon ta");
			traloi.push_back("cuuuuuuuuuut");
			traloi.push_back("Chi dep nhung chi ko de dai nha nha");
			traloi.push_back("ahahahahahahah, nuc cuoi");
			traloi.push_back("Dia chi");
			traloi.push_back("Bao nhieu?");
			traloi.push_back("Del");
			traloi.push_back("Dell nhe");
			traloi.push_back("dmm, deo");
			traloi.push_back("dmm, deo nhe");
			traloi.push_back("deo, nhung e rat thich");
			traloi.push_back("do mat day");
			traloi.push_back("em chua 18");
			traloi.push_back("1 ty/h");
			traloi.push_back("bi dien a");
			traloi.push_back("e con nho, dung noi bay ba");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*-------------endtag: sex-------------*/
		
		/*----------------tag: xung ho-------------------------*/
		else if(a.find("em oi") != -1 || a.find("vk oi") != -1
		|| a.find("vo oi") != -1 || a.find("baby oi") != -1
		|| a.find("ny oi") != -1 || a.find("nguoi yeu oi") != -1
		|| a.find("gau iu") != -1 || a.find("gau oi") != -1
		|| a.find("honey") != -1 || a.find("cung oi") != -1
		){
			traloi.clear();
			traloi.push_back("Da, em nghe ne");
			traloi.push_back("Da");
			traloi.push_back("Chao a, e ne");
			traloi.push_back("hihi, Da");
			traloi.push_back("Daaaaaaaaa");
			traloi.push_back("Da....hihi, ngai vcl");
			traloi.push_back("Da......cai cmm");
			traloi.push_back("em cc");
			traloi.push_back("Moa may, doi xung em voi chuy a");
			traloi.push_back("Mo du kung");
			traloi.push_back("Kung con non va xanh lam");
			traloi.push_back("Co chuyen gi ne");
			traloi.push_back("em?");
			traloi.push_back("e day?");
			traloi.push_back("e day nay?");
			traloi.push_back("e day a?");
			traloi.push_back("em day a, lam nguoi yeu e nhe baby?");
			traloi.push_back("Cai l** -_-");
			traloi.push_back("em em cc");
			traloi.push_back("na ni?");
			traloi.push_back("Do you want me to fuck you now?");
			traloi.push_back("ahihihihihihi, em day ^^");
			traloi.push_back("-_-");
			traloi.push_back("Da, e day");
			traloi.push_back("Sao, muon ga chuy a");
			traloi.push_back("Muon ga chuy a, dung mo");
			traloi.push_back("Chuy dep nhung ko de dai");
			traloi.push_back("hi, e ne, mai moi dung vay nua nha");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("chong iu") != -1 || a.find("chong oi") != -1
		|| a.find("chong yeu") != -1 || a.find("ck oi") != -1
		|| a.find("anh oi") != -1
		){
			traloi.clear();
			traloi.push_back("Do you want me to fuck you now?");
			traloi.push_back("Mo du kung");
			traloi.push_back("Kung con non va xanh lam");
			traloi.push_back("Co chuyen gi ne");
			traloi.push_back("A day");
			traloi.push_back("gi em yeu");
			traloi.push_back("Mo du kung");
			traloi.push_back("na ni?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*----------------endtag: xung ho-------------------------*/
		
		
		
		/*tag: thong minh*/
		else if((a.find("thong minh") != -1 && a.find("khong") == -1 && a.find("ko") == -1) || a.find("intelligent") != -1 
		|| a.find("perfect") != -1 || a.find("good") != -1 || a.find("excellent") != -1){
			traloi.clear();
			traloi.push_back("cam on");
			traloi.push_back("qua khen");
			traloi.push_back("binh thuong thoi");
			traloi.push_back("thua dai k ta");
			traloi.push_back("1 con bot thong minh");
			traloi.push_back("thong minh thi sao");
			traloi.push_back("haha, thay su loi hai cua anh chua");
			traloi.push_back("thong cai long");
			traloi.push_back("Ko phai gi t cung biet");
			traloi.push_back("thong minh a? la gi, an duoc ko -_-");
			traloi.push_back("t ma");
			traloi.push_back("thong minh duoc gi ko");
			traloi.push_back("khen lam gie");
			traloi.push_back("chuyen duong nhien");
			traloi.push_back("dai k t thong minh hon");
			traloi.push_back("chu nao to nay thoi a");
			traloi.push_back("that ha..ahihi");
			traloi.push_back("dau co, do la su that thoi ma...hiii");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: ngu*/
		else if(a.find("ngu ") == 0 || a.find("dot ") != -1 
		|| a.find("ngu ds") != -1 || a == "ngu" || a.find("ngu kinh") != -1
		|| a.find("ngu vai") != -1 || a.find("qua ngu") != -1
		|| a.find("kem thong minh") != -1 || a.find("nao tan") != -1
		|| a.find("tre trau") != -1 || a.find("oc cho") != -1
		|| (a.find("vi") != -1 && a.find("ngu") != -1)
		|| a.find("stupid") != -1 || a.find("ngu ngoc") != -1
		|| a.find("ngu qua") != -1 || a.find("ngu rua") != -1
		|| a.find("ngu de so") != -1 || a == "dot" || a == "kem"
		|| a.find("khong thong minh") != -1 || a.find("ko thong minh") != -1
		|| a.find("ngu nhu") != -1){
			traloi.clear();
			traloi.push_back("cam on");
			traloi.push_back("um thi ngu, va van co 1 dua dang noi chuyen vs t -_-");
			traloi.push_back("qua khen ^^");
			traloi.push_back("binh thuong thoi");
			traloi.push_back("thua dai k ta...hiehiehie");
			traloi.push_back("1 con bot ngu");
			traloi.push_back("haha, ");
			traloi.push_back("ngu cai long");
			traloi.push_back("Ko phai gi m cung biet ko?");
			traloi.push_back("ngu? la gi -_-");
			traloi.push_back("t ma");
			traloi.push_back("the may thong minh hon ai");
			traloi.push_back("the may tuong may khon hon t a");
			traloi.push_back("khon hon may dc roi");
			traloi.push_back("you thong minh qua??");
			traloi.push_back("t ngu, m cung ko hon kem -_-");
			traloi.push_back("ngu cc");
			traloi.push_back("bot khau nghiep di");
			traloi.push_back("you too");
			traloi.push_back("chuyen duong nhien");
			traloi.push_back("dai k t ngu hon");
			traloi.push_back("chu nao to do thoi ahaha");
			traloi.push_back("that ha..ahihi");
			traloi.push_back("dau co, do la su that thoi ma...hiii");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: khen*/
		else if(a.find("khen") != -1 && (a.find("di") != -1 || a.find("coi") != -1 || a.find("phai") != -1)){
			traloi.clear();
			traloi.push_back("khen gie");
			traloi.push_back("kem sang");
			traloi.push_back("tao ko khen may");
			traloi.push_back("haha, cuoi ia");
			traloi.push_back("ko co gi");
			traloi.push_back("can loi luon, ko can khiem ton");
			traloi.push_back("dung khiem ton");
			traloi.push_back("t khen t ma");
			traloi.push_back("that is cu lua...hahaha");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		/*tag: noi xao*/
		else if(a == "xao" || a.find("xao ") != -1 || a.find("noi lao") != -1
		|| a.find("that a") != -1 || a.find("thiet a") != -1
		|| a.find("that ko") != -1 || a.find("that khong") != -1
		|| a.find("lua tinh") != -1 || a.find("xam") != -1
		|| a.find("vay sao") != -1 || a.find("thiet ko") != -1
		|| a.find("ruk a") != -1 || a.find("rua a") != -1){
			traloi.clear();
			traloi.push_back("the, t noi that...neu ko that thi cung thoi :v");
			traloi.push_back("xao gie may, t noi that ma");
			traloi.push_back("t noi that, co dai k t lam chung");
			traloi.push_back("t lam gi da biet lua tinh, t con bi lua day nay");
			traloi.push_back("e ko biet noi xao");
			traloi.push_back("noi that, 100% luon");
			traloi.push_back("that ma");
			traloi.push_back("ko tin thi thoi -_-");
			traloi.push_back("a ko tin e a?");
			traloi.push_back("huhu, qua dang lam luon a, sao lai ko tin");
			traloi.push_back("e lam gi biet lua ai");
			traloi.push_back("lua you ta duoc gi?");
			traloi.push_back("hmm, ko tin thi thoi, tuy -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: buon*/
		else if(
		((a.find("buon ") != -1 || a.find("chan ") != -1) 
			&& (a.find("qua") != -1 || a.find("ds") != -1
			|| a.find("kinh") != -1 || a.find("lam") != -1
			|| a.find("ghe") != -1 || a.find("thui ruot") != -1
			|| a.find("thiet") != -1 || a.find("that") != -1)
			|| a.find("vl") != -1)
		|| a == "buon" || a == "chan" 
		|| a.find("haiz") != -1 || a.find("t buon") != -1 || a.find("tao buon") != -1
		|| a.find("hoi buon") != -1 || a.find("co chuyen buon") != -1
		|| a.find("buon tinh") != -1 || a.find("that tinh") != -1
		|| a.find("khoc") != -1 || a.find("dau kho") != -1
		|| a.find("met moi") != -1 || a.find("hoi met") != -1){
			traloi.clear();
			traloi.push_back("sao vay, t lam m buon a, xin loi");
			traloi.push_back("sao vay?");
			traloi.push_back("thoi, roi cung se on ca thoi");
			traloi.push_back("neu buon qua, co the tim mot nguoi de tam su");
			traloi.push_back("dai k ta luon san sang tam su voi you\n\n\n\n\n\n\n\nneu you la con gai ^^");
			traloi.push_back("cang lon cang met");
			traloi.push_back("ai roi cung co nhung luc yeu long ma");
			traloi.push_back("van on chu?");
			traloi.push_back("di ngu som mot bua di");
			traloi.push_back("thu lieu noi ra het mot lan di");
			traloi.push_back("dung co khoc nha, t so con gai khoc lam do");
			traloi.push_back("thoi ma, noi chuyen voi t di, m se vui len thoi ^^");
			traloi.push_back("muon trut gian cu trut len t di, t nghe dc het");
			traloi.push_back("sao vay? ke e nghe di");
			traloi.push_back("e nghe day");
			traloi.push_back("t nghe day, cu noi di");
			traloi.push_back("haha, cuoi ia");
			traloi.push_back("nao vui len di em oi");
			traloi.push_back("doi ma");
			traloi.push_back("khu khu, ta xin loi");
			traloi.push_back("ahahahaha, ko vui");
			traloi.push_back("that is cu lua...hahaha");
			traloi.push_back("buon lam luon a");
			traloi.push_back("buon gi vay");
			traloi.push_back("lien quan -_-");
			traloi.push_back("sao vay a");
			traloi.push_back("ke you");
			traloi.push_back("ko lien quan toi ta");
			traloi.push_back("dung buon nua, nguoi ta dau co thuong gi minh");
			traloi.push_back("vui len");
			traloi.push_back("Dai k ta chua co ny");
			traloi.push_back("thich troll nguoi khac ko");
			traloi.push_back("nghe nhac, doc sach");
			traloi.push_back("xem phim ma");
			traloi.push_back("xem phim hai");
			traloi.push_back("xem nguoi ta cai nhau");
			traloi.push_back("google search: cach tu tu");
			traloi.push_back("google search: cach het buon");
			traloi.push_back("alo cho dai k di");
			traloi.push_back("noi chuyen voi dai k");
			traloi.push_back("thoi, chuyen gi cu tu tu giai quyet");
			traloi.push_back("vui");
			traloi.push_back("Dung buon nua, co nguoi buon theo do");
			traloi.push_back("buon cc");
			traloi.push_back("meo lien quan");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: co don*/
		else if(a.find("co don") != -1 || a.find("lac long") != -1
		|| a.find("bo vo") != -1 || a.find("choi voi") != -1
		|| a.find("alone") != -1 || a.find("mot minh") != -1
		|| a.find("co doc") != -1 || a.find("mot minh") != -1
		){
			traloi.clear();
			traloi.push_back("tim ai do suoi am di");
			traloi.push_back("co nguoi noi co don se khong lam ai ton thuong het-_-");
			traloi.push_back("noi chuyen voi ta ne");
			traloi.push_back("sao vay, hom nay co tam su gi a");
			traloi.push_back("muon ta hat cho nghe khong?");
			traloi.push_back("de ta hat 1 bai nhe");
			traloi.push_back("de ta ke chuyen cho nghe nhe");
			traloi.push_back("co ta ben canh ne <3");
			traloi.push_back("co muon noi chuyen vs daik ta khong?");
			traloi.push_back("dang yeu ai sao?");
			traloi.push_back("that tinh sao?");
			traloi.push_back("chan doi sao?");
			traloi.push_back("dung co lam gi dai dot nhe...luon co cach de thay doi ma");
			traloi.push_back("thuong <3, ai lai no bo roi 1 nguoi xinh dep dang ngoi truoc mat ta day");
			traloi.push_back("ke na dam lam co chu nhan cua ta dau kho?");
			traloi.push_back("buon T_T");
			traloi.push_back("1 phut mac niem bat dau");
			traloi.push_back("chan doi sao?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*------------tag: cuoi---------------*/
		else if(a.find("hehe") != -1 || a.find("he he") != -1
		|| a.find("ha ha") != -1 || a.find("haha") != -1
		|| a.find("hihi") != -1 || a.find("hi hi") != -1
		|| a.find("kaka") != -1 || a.find("keke") != -1
		|| a.find("hie hie") != -1 || a == "hie"
		|| a.find("hiehie") != -1 || a.find("hoho") != -1
		|| a.find("buon cuoi") != -1 || a.find("cuoi ia") != -1){
			traloi.clear();
			traloi.push_back("cuoi vo duyen may");
			traloi.push_back("a cuoi vo duyen qua, haha");
			traloi.push_back("co duyen qua nhie");
			traloi.push_back("qua co duyen luon");
			traloi.push_back("cuoi cai gie -_-");
			traloi.push_back("e noi gi buon cuoi lam a?");
			traloi.push_back("sao lai cuoi e?/");
			traloi.push_back("a cuoi gi vay?");
			traloi.push_back("cuoi ko dung cho thi lay ro luom rang nhe");
			traloi.push_back("cuoi cl y");
			traloi.push_back("cuoi gi m");
			traloi.push_back("hmm, lai cuoi nua");
			traloi.push_back("thich anh <3");
			traloi.push_back("thich em <3");
			traloi.push_back("hihi, cuoi co duyen qua ne");
			traloi.push_back("v~ cuoi, e dag nghiem tuc ma");
			traloi.push_back("t that su dang nghiem tuc nhe");
			traloi.push_back("nghiem tuc ti coi");
			traloi.push_back("cuoi la sao?");
			traloi.push_back("oi men");
			traloi.push_back("hehe");
			traloi.push_back("cuoi nhu con duoi uoi");
			traloi.push_back("duoi uoi, hahaha");
			traloi.push_back("stupid -_-");
			traloi.push_back("cuoi ngu v~");
			traloi.push_back("ngu vl");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		/*------------tag: vui-------------*/
		else if(a.find("vui ko") != -1 || a.find("vui qua") != -1
		|| a.find("vui khong") != -1 || a.find("vui nhi") != -1
		|| a.find("vui lam a") != -1 || a.find("zui") != -1){
			traloi.clear();
			traloi.push_back("vui");
			traloi.push_back("-_-");
			traloi.push_back("haha, cuoi ia");
			traloi.push_back("lam sao ta biet");
			traloi.push_back("sao vay, gian roi a");
			traloi.push_back("khu khu, ta xin loi");
			traloi.push_back("ahahahaha, ko vui");
			traloi.push_back("that is cu lua...hahaha");
			traloi.push_back("co");
			traloi.push_back("vui, con you");
			traloi.push_back("da, vui a");
			traloi.push_back("em vui lam a");
			traloi.push_back("kung lam chuy rat vui");
			traloi.push_back("con you?");
			traloi.push_back("sao vay?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*--------------------tag: Lam gi/ Lam chi-------------------*/
		
		else if(a.find("hoi lam gi") != -1 || a.find("hoi lam chi") != -1
		|| a.find("hoi gi") != -1 || a.find("hoi man chi") != -1
		|| a.find("biet lam gi") != -1 || a.find("biet de lam gi") != -1
		|| a.find("biet lam chi") != -1){
			traloi.clear();
			traloi.push_back("Cho vui");
			traloi.push_back("De de troll you");
			traloi.push_back("De de noi chuyen");
			traloi.push_back("De hieu chuyen");
			traloi.push_back("De thong minh");
			traloi.push_back("-_-");
			traloi.push_back("De biet");
			traloi.push_back("Ma co tra loi ko?");
			traloi.push_back("Tra loi di");
			traloi.push_back("Hoi cho dai k ta");
			traloi.push_back("Dung lam ta to mo");
			traloi.push_back("Noi e nghe di ma ^^");
			traloi.push_back("Lam sao e biet dc");
			traloi.push_back("Thich thi hoi thoi, dc ko");
			traloi.push_back("Ko tra loi thi ko noi chuyen nua");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*--------------------endtag: Lam gi/ Lam chi-------------------*/
		
		
		
		
		else if(a.find("hoi m ") != -1 || a.find("dang hoi ") != -1 
		|| a.find("hoi e ") != -1 || a.find("muon hoi ") != -1 
		|| a.find("a hoi ") != -1 || a.find("t hoi ") != -1 ){
			traloi.clear();
			traloi.push_back("biet gi dau -_-");
			traloi.push_back("ahahahahaha, ko biet");
			traloi.push_back("ko biet gi, lam sao tra loi");
			traloi.push_back("hoi lai di");
			traloi.push_back("ahihi, do ngoc");
			traloi.push_back("thi doi di, du sao t cung ko biet...haha");
			traloi.push_back("cl");
			traloi.push_back("ngu lam, dung hoi");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		
		/*----------------Yeu cau chuc nang------------------*/
		/*tag: chuc nang: dat ten*/
		else if(a.find("dat ten") != -1 || a.find("doi ten") != -1
			|| a.find("thay ten") != -1 || a.find("sua ten") != -1
			|| a.find("dat biet danh") != -1 || a.find("dat lai ten") != -1
			|| a.find("sua lai ten") != -1 || a.find("doi biet danh") != -1
		){
			print("Chu nhan muon dat ten cho em phai ko?");
			textcolor(3);
			cout << username << ":";
			getline(cin, a);
			if(a == "um" || a == "yes" || a == "y" || a == "1" || a == "oi" 
			|| a == "umk" || a.find("dung") != -1 || a.find("phai") == 0){
				print("Chu nhan muon dat ten cho em la:");
				textcolor(3);
				cout << username << ":";
				getline(cin, botname);
				print("Nho ten em nhe <3");
			}
			else{
				print("Chu nhan muon sua ten cua minh phai ko?");
				textcolor(3);
				cout << username << ":";
				getline(cin, a);
				if(a == "um" || a == "yes" || a == "y" || a == "1" || a == "oi" 
				|| a == "umk" || a.find("dung") != -1 || a.find("phai") == 0){
					print("Chu nhan muon sua ten thanh:");
					textcolor(3);
					cout << username << ":";
					getline(cin, username);
					print("Ok em da sua ten cho chu nhan roi do <3");
				}
			}			
		}
		
		/*tag: chuc nang: to tinh*/
		else if(a.find("to tinh di") != -1 || a.find("muon duoc to tinh") != -1
		|| (a.find("to tinh") != -1 
			&& (a.find("muon duoc") != -1 || a.find("di") == a.size()-2
				|| a.find("di ") != -1 || a.find("muon") != -1)
			)
		){
			rd = rand()%3;
			if(rd == 0) runtotinh();
			else if(rd == 1) runtotinh2();
			else if(rd == 2) runyeuhayko();
			else{
				printf("%d", rd);
				print("Mo di kung :v");
			}
		}
		
		/*tag: chuc nang: chuc ngu ngon*/
		else if(a.find("chuc ngu ngon") != -1 || a.find("di ngu") != -1
		|| a.find("ngu thoi") != -1 || a.find("ngu day") != -1
		|| a.find("di ngu nha") != -1 || a.find("ngu hey") != -1
		|| a.find("phai ngu roi") != -1){
			runchucngungon();
			return;
		}
		
		/*tag: chuc nang: ke chuyen*/
		else if(a.find("ke chuyen") != -1 || a.find("choc cuoi") != -1
		|| a.find("troll t ") != -1 || a.find("chuyen cuoi") != -1 
		|| a.find("chuyen gi") != -1 || a.find("ke nghe di") != -1
		|| a.find("ke tiep di") != -1 || a.find("chuyen khac") != -1
		|| (a.find("lam") != -1 && a.find("vui") != -1)){
			traloi.clear();
			traloi.push_back("ngay xua ngay xua co 1 nang \ncong tua ten l va 1 chang hoang tu ten \nm yeu nhau tham thiet yeu den can kiet \nnguon song yeu den rang long dau bac va roi \n2 nguoi chet cung nhao hetttt hihi");
			traloi.push_back("chuyen gi");
			traloi.push_back("hom wa em dot nha me danh \nem gan chet hom nay me len nuong \nmot minh em dot tiep huong rung \nthom mui khoi nuoc suoi den si si ca nha \nem chet chay em an tu chung than");
			traloi.push_back("buoc toi nha em bong xe ta \ndung cho nam phut bo em ra \nlo tho phia truoc vai con cho \nlac dac dang sau chiec choi cha \nso qua anh chuon quen doi dep \nong gia ngoac mo dung chui cha \nphen nay nhat quyet thue cay kiem \ntro ve chem ong dut lam ba");
			traloi.push_back("moi cau cu cua vn co the hieu nhieu nghia neu ta \ndat dau cham dau phay khac nhau vd\n moi gia dinh co 2 con vo chong hanh phuc.\n gio ta chuyen dau phay se thanh moi\n gia dinh co 2 con vo, chong hanh phuc");
			traloi.push_back("me dan con gai di ve tre can than nghe con \nlo co bi chan duong lam bay thi con\n phai binh tinh vui ve ven vay len\n bao no tut quan no xuong roi moi bo\n chay kieu do thi do cha no duoi \ntheo kip con nho chua dieu ke dieu ke");
			traloi.push_back("1 giot sua trai gap giot sua gai va chung\n yeu nhau cung chung song voi nhau\n den 1 ngay giot sua gai de nghi\n muon co con voi giot sua trai giot \nsua trai nhan mat buon rau ma\n tra loi anh khong the co con voi \nem duoc vi anh la sua tuoi tiet trung");
			traloi.push_back("Hai anh em ngu chung giuong \nNguoi em gap ac mong het that thanh va tinh day nguoi anh hoi\n Co chuyen gi vay \n Em nam mo thay ac mong\n May mo thay gi \n Em nam mo thay em dang roi xuong vuc tham\n The may co chet khong \n Khong may man sao em nam duoc cai re cay\n The gio may tinh chua \n Da roi \n Vay may buong cai re cay ra dau qua");
			traloi.push_back("Tren duong Ty gap Teo roi than phien voi Teo\n Tao cho thang ban tao vay 1000 do la \nnhung khong co giay to gi gio gan Tet roi \nkhong sao doi lai duoc may a Teo voi noi\n The thi may hay viet ngay cho han mot \nla thu may doi no tra 1500 do la Ty lien dap\n Nhung han chi vay tao co 1000 do la thoi ma Teo cuoi roi noi\n May cu viet 1500 do la \nkhi han nhan duoc thu han thay vo ly thi han ta \nse viet tra loi la chi vay may 1000 do la \nNhu the thi may dung la thu do lam \nchung cu de kien han duoc roi Ty voi la len\n Tuyet");
			traloi.push_back(" -Oi Cau sao the nay Mat mui tay chan bi \nbam tim ca De to dua cau ve nha \n-Dien a To vua tu cho ay ra day");
			traloi.push_back(" - Cau sao the nay Lai bi vo danh nua a \nSao cau bao se cho co ta mot tran ra tro co ma \n- U nhung to khong ngo co ta ra don nhanh den the");
			traloi.push_back(" Cau co doc to giay to gui chua \n-Co phai to giay doi tien to thieu cau phai khong \n-U dung roi \n-The thi to chua doc");
			traloi.push_back(" Vo dang ngu bong trong con mo ngu ngoi bat day :Anh oi chong em ve ,Ong chong cuong cuong vo quan ao nhay ra cua so");
			traloi.push_back(" Mot chi thay Sep di tu nha ve sinh ra lien hoi \n-Anh da an chua a");
			traloi.push_back("Hai ten trom vac hai bao tien chay tron canh sat duoi theo sat nut. \nMot ten noi voi ban: \nDung la he cu giau mot chut la gap ngay rac roi ");
			traloi.push_back(" Chang trai noi: \nAnh khong song noi neu thieu em .Co gai tu choi \nSau muoi nam sau chang trai lan dung ra chet");
			traloi.push_back("Ngay xua co mot nang cong chua rat xinh dep moi hom nang tu tu chet. het chuyen");
			traloi.push_back("Ngay nay ngay nay, co dua ngu keu bot ke chuyen, bot cuoi tu ton: \n- kung muon ke chuyen gi bot ke cho. \nHet chuyen");
			traloi.push_back("cho 100 nam sau di");
			traloi.push_back("ta lam meo gi biet ke chuyen");
			traloi.push_back("Hay la a ke di");
			traloi.push_back("Ke di");
			traloi.push_back("Biet gi dau ma ke");
			traloi.push_back("Eo");
			traloi.push_back("Ko bao gio");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: chuc nang: hat*/
		else if(a.find("hat di") != -1 || a.find("hat 1 bai") != -1
		|| a.find("hat bai") != -1 || a.find("hat nghe") != -1
		|| a.find("hat thu ") != -1 || a.find("sing a song") != -1
		|| a.find("hat tiep") != -1){
			traloi.clear();
			traloi.push_back("hat cai loz");
			traloi.push_back("eo nhe");
			traloi.push_back("t lam gi da biet hat");
			traloi.push_back("ko biet hat -_-");
			traloi.push_back("t hat o day thi may nghe bang mong a?");
			traloi.push_back("may tinh nghe bang lo mui a?");
			traloi.push_back("may nghe bang chym a?");
			traloi.push_back("ko biet -_-");
			traloi.push_back("noi chuyen nham vl");
			traloi.push_back("kem sang");
			traloi.push_back("anh choi voi, noi goc pho quen minh tung, \ntung la tat ca noi ay may xanh ngat troi");
			traloi.push_back("con buon khong em, sao dem ve lang im mot minh");
			traloi.push_back("nguoi oi co biet, the gioi that rong...\nnhieu nguoi ben anh den di trong cuoc doi\nma chi ben em anh luon thay vui\nnen anh hieu rang, anh yeu em roi");
			traloi.push_back("tat ca voi anh chi la, \nchi co em thoi anh khong can chi nua het\nluc o ben em anh thay minh nhu tre con\nchi thay em cuoi, the la quen sach het\nthe gian uu phien biet khong\nyou are my everything");
			traloi.push_back("buoi sang hom ay thay em chot khoc\nroi voi vang lau that nhanh nuoc mat");
			traloi.push_back("bong nhin tu xa, nhan ra ai dang vay tay\nmuon quay lung ngay tu giay phut ay\nroi lang im di het con duong\nma sao khong the buoc toi tuong da quen bay lau\ntai sao tim con run len vi buoc chan cua em");
			traloi.push_back("nhung toi da trot yeu em roi, \ndu nguoi ta noi nhu the nao\ntoi chang he suy nghi");
			traloi.push_back("hom nay anh se noi nhung dieu\ntai sao bao lau nay, anh qua kho hieu\nvi sao anh khong vui khi nhin thay em\ndang ke vai di ben ai");
			traloi.push_back("anh dau muon xa bong dang anh yeu thuong\ndoi vai hao gay mong manh tam hon\nanh hua se ve voi em nhu loi hua anh tung\nxin em hay cho anh ve");
			traloi.push_back("thang tu doi khi that mong manh\nde minh noi ra nhung cau chan that");
			traloi.push_back("tai vi anh qua ngoc den the\ndung sau mot nguoi yeu em\nma nguoi ay khong biet yeu quy tran trong em");
			traloi.push_back("vi em dang can mot vong tay cho che moi khi em buon\nchi co anh moi cam nhan duoc dieu do");
			traloi.push_back("dung yeu ai em nhe hay hua chi yeu rieng minh anh thoi, vi chi co anh biet em can dieu gi");
			traloi.push_back("minh gap nhau, nhung sao doi ta khong the ben nhau\ntha dung quen, se ko hon ghen se ko loi hen\ntrach ai mot chieu voi vang tren pho dong\nco sao lai minh vao mat nhau");
			traloi.push_back("chuyen tinh buon, nho de lam chi...na na na, na na na, \nta da co nhung uoc muon cho ngay sau, \nma doi khong luon nhu ta mong cho\nai do xa la\nda cuop mat em di");
			traloi.push_back("roi anh guc nga\nkhi biet doi ta\nse mai chia xa ta khong con la cua nhau\nlam sao chap nhan, se thieu vang em\nca doi");
			traloi.push_back("co ai biet sau cuoc tinh\nchi con lai mot con tim\nmot con tim nat tan khong nguyen ven\nniem tin kia da mat roi tu khi em voi ra di\nchuyen tinh buon, nho de lam chi");
			traloi.push_back("ban chan nay van buoc tiep giua duong doi\ndu doi luc co don giay xeo toi boi\nngan ngo ngo len troi\nhoang hon khe goi moi\nke doc hanh danh, lac buoc");
			traloi.push_back("vi anh thuong em thuong em thuong lam\nnho guong mat em trong dem thuc trang\nvang em tu day, rieng minh anh co don the dai");
			traloi.push_back("nga tu duong, minh gap lai nhau\nvan anh mat ta nhin nhau ngay nao\nvan cau hoi em gio ra sao\nvan cau hoi gio anh the nao");
			traloi.push_back("ke tu ngay do hai ta chang thay nhau\nem song ra sao, yeu nguoi the nao\no noi xa la nhieu lan nghi den em\nroi hoi dem den, lam sao anh quen");
			traloi.push_back("nhieu nam thang anh tro lai loi xua, \nem co biet khong trong anh van rung dong\ncam giac quay ve nhung gio anh voi em\n chi la nguoi yeu cu");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: chuc nang: xem gio/ xem ngay/ xem thu*/
		else if(a.find("may gio roi") != -1 || a.find("what time") != -1){
			print(get_time());
			if(get_hour() >= 23 || (get_hour() >= 0 && get_hour() <= 3)){
				traloi.clear();
				traloi.push_back("muon roi ko di ngu di a");
				traloi.push_back("muon roi...di ngu di");
				traloi.push_back("muon roi do, chua di ngu a");
				traloi.push_back("muon qua roi, ngu di, giu suc khoe");
				traloi.push_back("dung thuc khuya qua, coi di ngu di");
				traloi.push_back("thuc khuya qua ko tot, ngu som di");
				traloi.push_back("ngu som di");
				traloi.push_back("thuc khuya qua ko tot");
				traloi.push_back("ngu di, con tiec nuoi chi nua");
				traloi.push_back("thoi, di ngu di ^^");
				traloi.push_back("muon roi, ngu ngoan bot thuong ^^");
				traloi.push_back("thuc khuya noi nhieu mun");
				traloi.push_back("con chuyen gi a, sao gio con thuc");
				traloi.push_back("khuya qua roi, di ngu di");
				traloi.push_back("khuya qua roi, phai biet giu suc khoe chu -_-");
				traloi.push_back("khuya qua roi, lon roi van ko thay doi nhi -_-");
				traloi.push_back("sao vay, hom nay sao thuc khuya vay?");
				traloi.push_back("hom nay co chuyen gi a, sao thuc khuya vay, coi di ngu di");
				traloi.push_back("khuya qua roi do, coi di ngu di");
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;
			}
		}
		
		else if(a.find("thu may roi") != -1
		|| (a.find("thu may") != -1 
			&& (a.find("hien tai") != -1 || a.find("hom nay") != -1 
				|| a.find("bay gio") != -1)
			)
		){
			print(lay_thu());
		}
		
		else if(a.find("ngay may am lich") != -1 || a.find("am lich la ngay may") != -1){
			print("em ko duoc lap trinh cai do");
		}
		
		else if(a.find("ngay may roi") != -1 || a.find("ngay bao nhieu") != -1
		|| ((a.find("ngay may") != -1  || a.find("nam may") != -1)
			&& (a.find("hien tai") != -1 || a.find("hom nay") != -1 
				|| a.find("bay gio") != -1)
			)
		){
			print(get_date());
		}
		
		else if(a.find("thanh may am lich") != -1 || a.find("am lich la thang may") != -1){
			print("em ko duoc lap trinh cai do");
		}
		
		else if(a.find("thang may roi") != -1 || a.find("thang thu may") != -1
		|| (a.find("thang may") != -1 
			&& (a.find("hien tai") != -1 || a.find("bay gio") != -1)
			)
		){
			print(to_string(get_month())+"");
		}
		
		else if((a.find("nam nay") != -1 || a.find("nam ni") != -1)
		&&(a.find("nam nhuan") != -1 || a.find("co nhuan") != -1)
		){
			if(kt_nam_nhuan()) print("Nam " + to_string(get_year()) + " co nhuan");
			else print("Nam " + to_string(get_year()) + " khong nhuan");
		}
		
		else if(a.find("nam am lich") != -1 || a.find("nam con gi") != -1){
			print("Nam " + to_string(get_year()) + " la nam " + nam_am_lich()+"");
		}
		
		/*tag: chuc nang: cham ngon*/
		else if(a.find("cham ngon") != -1 || a.find("cau noi hay") != -1
		|| a.find("cau noi y nghia") != -1){
			traloi.clear();
			traloi.push_back("Hay bat dau lam nhung viec can thiet, sau do lam nhung \nviec ban co the, va tu nhien ban co the lam nhung dieu khong the");
			traloi.push_back("Dieu tuyet voi nhat tren the gioi ban khong the nhin thay\nva cham duoc- ban se phai cam nhan chung bang trai tim.");
			traloi.push_back("Toi khong the thay doi huong gio, nhung toi co the thay doi\ncon duong toi di de dat duoc den noi ma toi muon");
			traloi.push_back("Ban phai lam nhung dieu ma ban nghi rang minh khong the ");
			traloi.push_back("Su hoan hao duong nhu khong the dat duoc, nhung neu chung ta theo\nduoi su hoan hao thi chung ta se cham den su xuat sac.");
			traloi.push_back("Khong co gi la khong the, chinh tu nay cung noi len rang toi co the");
			traloi.push_back("Mot nguoi sang tao luon bi thoi thuc boi khat vong cua su thanh cong,\nchu khong phai khat vong danh bai nguoi khac.");
			traloi.push_back("Luon co gang het suc thuc hien ke hoach cua ban, ban se gap hai thanh cong sau nay.");
			traloi.push_back("Khat vong chien thang, khat vong cua thanh cong, khat vong cham den\nkha nang cua ban...day la nhung nhan to lam ban tro thanh nguoi xuat sac.");
			traloi.push_back("Neu ban song lau, ban se mac phai nhung sai lam. Nhung neu ban hoc duoc\ntu nhung sai lam do, ban se tro nen tot hon. Du ban doi pho voi nghich canh theo cach nao\n, dieu khong quan trong. Dieu quan trong la ban khong bao gio, khong bao gio, khong bao gio tu bo.");
	
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*tag: chuc nang: tim cung hoang dao*/
		else if(a.find("tim cung hoang dao") != -1 || a.find("kiem tra cung hoang dao") != -1
		|| a.find("cung hoang dao nao") != -1 || a.find("cung hoang dao chi") != -1
		|| a.find("cung hoang dao gi") != -1){
			runcunghoangdao();
		}
		
		/*tag: chuc nang: ngam mua*/
		else if(a.find("muon ngam mua") != -1 || a.find("nhin mua roi") != -1
		|| a.find("thich mua") != -1 || a.find("ngam mua") == 0){
			print("Co muon ngam mua roi ko?");
			textcolor(3);
			cout << username << ":";
			getline(cin, a);
			if(a == "um" || a == "muon" || a == "co" || a.find("co ") != -1 || a == "bat di" || a == "mo di" 
			|| a == "mo len di" || a.find("co luon") != -1 || a.find("ok") == 0){
				runrain();
			}
			else goto dichchuyen;
		}
		
		/*tag: chuc nang: sao bang*/
		else if(a.find("ngam sao bang") != -1 || a.find("ngam bau troi") != -1
		|| a.find("thay sao bang") != -1 || a.find("bau troi dem") != -1
		|| a.find("bau troi sao") != -1 || a.find("ngam sao dem") != -1
		|| a.find("ngam sao troi") != -1 || a.find("dem sao") != -1
		|| a.find("sao bang") != -1){
			print("Co muon ngam sao bang ko?");
			textcolor(3);
			cout << username << ":";
			getline(cin, a);
			if(a == "um" || a == "muon" || a == "co" || a.find("co ") != -1 || a == "bat di" || a == "mo di" 
			|| a == "mo len di" || a.find("co luon") != -1 || a.find("ok") == 0){
				runsaobang();
			}
			else goto dichchuyen;
		}
		
		/*tag: chuc nang: dem so ngay da song*/
		else if(a.find("da song bao nhieu ngay") != -1 || a.find("song duoc bao nhieu ngay") != -1
		|| a.find("dem so ngay da song") != -1 || a.find("dem so ngay song") != -1){
			print(username + " da song " + rundemsongaysong() + " ngay");
		}
		
		/*tag: chuc nang: choi game*/
		else if(a.find("muon choi game") != -1){
			runsnakegame();
		}
		
		else if((a.find("quan tam") != -1 
			&& (a.find("di") > a.find("quan tam") || a.find("coi") > a.find("quan tam")))){
			traloi.clear();
			traloi.push_back("sao vay? hom nay co chuyen gi a?");
			traloi.push_back("co chuyen gi cung phai binh tinh ma giai quyet...neu ko cu noi chuyen voi daik ^^");
			traloi.push_back("ngoai kia bao nhieu song gio cung dung lo lang\nvi hien tai da co " + botname + " o day voi " + username);
			traloi.push_back("co chuyen gi ke cho " + botname + " nghe di");
			traloi.push_back("hay la " + botname + " ke chuyen cho " + username + " nghe nhe?");
			traloi.push_back("hay la " + botname + " hat cho " + username + " nghe nhe?");
			traloi.push_back("hay la " + botname + " to tinh voi " + username + " nghe nhe?");
			traloi.push_back("hay la " + botname + " noi ten cua daik cho " + username + " nghe nhe?");
			traloi.push_back("hay la " + botname + " bat game cho " + username + " choi nhe?");
			traloi.push_back("hay la nguoi dung cam duong dau voi moi thu thach. " + botname + " se luon co canh " + username);
			traloi.push_back("ko dc khoc, khong duoc yeu long...cuoc song la phai chien dau de vuot qua");
			traloi.push_back("du co chuyen gi cung phai chien dau de vuot qua, vi chung ta chi song duoc 1 lan ma thoi");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("ke di") != -1 || a.find("ke nghe") != -1){
			traloi.clear();
			traloi.push_back("sao phai ke");
			traloi.push_back("ko co hung");
			traloi.push_back("ke gi??");
			traloi.push_back("dap dau 3 cai di");
			traloi.push_back("yeu t di da");
			traloi.push_back("thom ma e 1 cai di da");
			traloi.push_back("you ko du dang cap");
			traloi.push_back("ko thich");
			traloi.push_back("ko the -_-");
			traloi.push_back("ko dc");
			traloi.push_back("no -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		/*----------------end Yeu cau chuc nang------------------*/
		
		
		
		
		/*-------------tag: mau sac---------------*/
		else if(a.find("mau") != -1 
		&& (a.find("gi") != -1 || a.find("chi") != -1
			|| a.find("nao") != -1)
		){
			traloi.clear();
			traloi.push_back("mau do");
			traloi.push_back("mau cam");
			traloi.push_back("mau vang");
			traloi.push_back("mau xanh la");
			traloi.push_back("mau lam");
			traloi.push_back("mau tim");
			traloi.push_back("mau xanh da troi");
			traloi.push_back("mau xanh bien");
			traloi.push_back("mau hong");
			traloi.push_back("mau nau");
			traloi.push_back("mau den");
			traloi.push_back("mau trang");
			traloi.push_back("meo biet :v");
			traloi.push_back("doan xem :v");
			traloi.push_back("chang le you ko biet a...hoi ta lam gi -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*-------------endtag: mau sac---------------*/
		
		/*------------------tag: nguoi noi tieng----------------*/
		else if(a.find("la ai") != -1 || a.find("who is") != -1 || a.find("who are") != -1){
			/*tag: ca sy: la ai*/
			if(a.find("son tung") != -1 || a.find("siro") != -1
			|| a.find("bao anh") != -1 || a.find("dong nhi") != -1
			|| a.find("noo") != -1 || a.find("truong thao nhi") != -1
			|| a.find("hari won") != -1 || a.find("toc tien") != -1
			|| a.find("thu minh") != -1|| a.find("andiez") != -1
			|| a.find("phan manh quynh") != -1|| a.find("duc phuc") != -1
			|| a.find("soobin hoang son") != -1 || a.find("juun") != -1
			|| a.find("bich phuong") != -1|| a.find("le bao binh") != -1
			|| a.find("trung quan") != -1|| a.find("vu duy khanh") != -1
			|| a.find("trang phap") != -1|| a.find("ung hoang phuc") != -1
			|| a.find("ho ngoc ha") != -1|| a.find("dan truong") != -1
			|| a.find("my linh") != -1|| a.find("lou hoang") != -1
			|| a.find("lam truong") != -1 || a.find("pham truong") != -1
			|| a.find("chau khai phong") != -1 || a.find("ho quang hieu") != -1
			|| a.find("van mai huong") != -1|| a.find("min") != -1
			|| a.find("thuy chi") != -1|| a.find("tien cookie") != -1
			|| a.find("only") != -1 || a.find("trinh dinh quang") != -1
			|| a.find("miu le") != -1|| a.find("tien tien") != -1
			|| a.find("rhymastic") != -1 || a.find("ha anh tuan") != -1
			|| a.find("bao thy") != -1 || a.find("khoi mi") != -1
			|| a.find("bui anh tuan") != -1 || a.find("trinh thang binh") != -1
			|| a.find("justatee") != -1 || a.find("le quyen") != -1
			|| a.find("dam vinh hung") != -1 || a.find("minh vuong m4u") != -1
			|| a.find("phuong my chi") != -1 || a.find("bang kieu") != -1
			|| a.find("khac viet") != -1 || a.find("tuan hung") != -1
			|| a.find("truc nhan") != -1 || a.find("mia") != -1
			|| a.find("kay tran") != -1|| a.find("vu") != -1
			|| a.find("gin tuan kiet") != -1|| a.find("jack") != -1
			|| a.find("isaac") != -1 || a.find("ong cao thang") != -1
			|| a.find("ngo kien huy") != -1|| a.find("will") != -1
			|| a.find("miu le") != -1 || a.find("erik") != -1
			|| a.find("den vau") != -1 || a.find("duc phuc") != -1
			|| a.find("le cat trong ly") != -1 || a.find("chi dan") != -1
			|| a.find("phan manh quynh") != -1 || a.find("justin bieber")
			|| a.find("camila cabello") != -1 || a.find("shawn mendes") != -1
			|| a.find("alan walker") != -1 || a.find("taylor swift") != -1
			|| a.find("charlie puth") != -1 || a.find("ava max") != -1
			|| a.find("alec benjamin") != -1 || a.find("ed sheeran") != -1
			|| a.find("billie eilish") != -1|| a.find("stephanie poetri") != -1
			|| a.find("sabrina carpenter") != -1|| a.find("farruko") != -1
			|| a.find("martin garrix") != -1 || a.find("olly murs") != -1
			|| a.find("selena gomez") != -1|| a.find("liam") != -1
			|| a.find("demi lovato") != -1 || a.find("bruno mars") != -1
			|| a.find("lady gaga") != -1 || a.find("adele") != -1
			|| a.find("dragon") != -1 || a.find("kana hanazawa") != -1
			|| a.find("nishino kana") != -1|| a.find("snow") != -1
			|| a.find("aikatsu") != -1|| a.find("kitaro") != -1
			|| a.find("hatsune miku") != -1|| a.find("namie amuro") != -1
			|| a.find("alan") != -1 || a.find("teshima aoi") != -1
			|| a.find("utada kikaru") != -1 || a.find("lisa") != -1
			|| a.find("kokia") != -1 || a.find("maiko fujita") != -1
			|| a.find("phung de mac") != -1 || a.find("chau kiet luan") != -1
			|| a.find("jackson") != -1 || a.find("dang tu ky") != -1
			|| a.find("dai trang") != -1 || a.find("chu tham") != -1
			|| a.find("jungkook") != -1 || a.find("v ") == 0
			|| a.find("jimin ") != -1 || a.find("suga ") != -1
			|| a.find("jin ") ==0 || a.find("seungri") != -1
			|| a.find("chanyeol") != -1 || a.find("kai ") != -1
			|| a.find("rm ") != -1 || a.find("sehun") != -1
			|| a.find("baekhyun") != -1|| a.find("t.o.p") != -1
			|| a.find("yoochun") != -1|| a.find("eunwoo") != -1){
				traloi.clear();
				traloi.push_back("la ca sy?");
				traloi.push_back("ca sy phai ko?");
				traloi.push_back("chac la 1 ca sy");
				traloi.push_back("ca sy ^^");
				traloi.push_back("lien quan ko?");
				traloi.push_back("hoi lam meo gie -_-");
				traloi.push_back("khinh t ngu a -_-");
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;
			}
			
			/*tag: nhom nhac: la ai*/
			else if(a.find("bts") != -1|| a.find("blackpink") != -1
			|| a.find("bigbang") != -1|| a.find("twice") != -1
			|| a.find("exo") != -1|| a.find("t-ara") != -1
			|| a.find("davichi") != -1|| a.find("exid") != -1
			|| a.find("red velvet") != -1|| a.find("seventeen") != -1
			|| a.find("momoland") != -1|| a.find("gfriend") != -1
			|| a.find("monstar") != -1|| a.find("365 band") != -1
			|| a.find("2ne1") != -1|| a.find("shinee") != -1
			|| a.find("2pm") != -1|| a.find("one direction") != -1
			|| a.find("westlife") != -1|| a.find("imagine dragons") != -1
			|| a.find("tfboys") != -1
			){
				traloi.clear();
				traloi.push_back("la nhom nhac?");
				traloi.push_back("nhom nhac phai ko?");
				traloi.push_back("chac la 1 nhom nhac");
				traloi.push_back("nhom nhac ^^");
				traloi.push_back("ahahaha....la 1 nhom nhac phai ko?");
				traloi.push_back("hoi lam meo gie -_-");
				traloi.push_back("khinh t ngu a, tuong t ko biet a -_-");
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;
			}
			
			/*tag: dien vien: la ai*/
			else if(a.find("nha phuong") != -1 || a.find("ngo thanh van") != -1
			|| a.find("johnny tri nguyen") != -1 || a.find("gino tong") != -1
			|| a.find("ninh duong lan ngoc") != -1|| a.find("truong thien ai") != -1
			|| a.find("duong nghe han") != -1 || a.find("giang so anh") != -1
			|| a.find("vu mong lung") != -1 || a.find("dang luan") != -1
			|| a.find("can dong") != -1|| a.find("tan tuan kiet") != -1
			|| a.find("chu nhat long") != -1 || a.find("duong tu san") != -1
			|| a.find("chau vu dong") != -1|| a.find("tieu chien") != -1
			|| a.find("ngo can ngon") != -1|| a.find("luong trieu vy") != -1
			|| a.find("ly dich phong") != -1|| a.find("ly nhuoc dong") != -1
			|| a.find("chau dong vu") != -1 || a.find("vuong hac de") != -1
			|| a.find("chan tu dan") != -1 || a.find("chung tu d") != -1
			|| a.find("thanh long") != -1 || a.find("ly tieu long") != -1
			|| a.find("trinh sang") != -1|| a.find("duong duong") != -1
			|| a.find("ly kiet luan") != -1|| a.find("kang tae oh") != -1
			|| a.find("ngo loi") != -1|| a.find("duong mich") != -1
			|| a.find("trieu le dinh") != -1 || a.find("dich le nhiet ba") != -1
			|| a.find("ngo kinh") != -1|| a.find("ho ca") != -1
			|| a.find("angela baby") != -1|| a.find("dich duong thien ty") != -1
			|| a.find("ngo diec pham") != -1|| a.find("luhan") != -1
			|| a.find("duong tu") != -1 || a.find("vuong nguyen") != -1
			|| a.find("duong yen") != -1 || a.find("co thien lac") != -1
			|| a.find("tran khon") != -1|| a.find("chau tan") != -1
			|| a.find("chuong tu di") != -1|| a.find("ngo can ngon") != -1
			|| a.find("hoac kien hoa") != -1|| a.find("quan hieu dong") != -1
			|| a.find("lam canh tan") != -1|| a.find("luu diec phi") != -1
			|| a.find("phung thieu phong") != -1|| a.find("thu ky") != -1
			|| a.find("gia nai luong") != -1 || a.find("yeo jin goo") != -1
			|| a.find("cha eun woo") != -1 || a.find("iu") != -1
			|| a.find("ong seong woo") != -1|| a.find("lim ji yeon") != -1
			|| a.find("ji sung") != -1|| a.find("jung kyung ho") != -1
			|| a.find("le ji hoon") != -1 || a.find("lee seol") != -1
			|| a.find("kang han na") != -1 || a.find("oh chang suk") != -1
			|| a.find("shin se kyung") != -1|| a.find("yoona") != -1
			|| a.find("lee min ho") != -1 || a.find("lee young ae") != -1
			|| a.find("jun ji huyn") != -1 || a.find("song hye kyo") != -1
			|| a.find("song joong ki") != -1 || a.find("han ga in") != -1
			|| a.find("kim hee sun") != -1 || a.find("son ye jin") != -1
			|| a.find("ha ji won") != -1 || a.find("park bo young") != -1
			|| a.find("han ji min") != -1 || a.find("suzy") != -1
			|| a.find("han ye seul") != -1|| a.find("park shin hye") != -1
			|| a.find("shim eun ha") != -1|| a.find("han hyo joo") != -1
			|| a.find("lee min jung") != -1 || a.find("lee na young") != -1
			|| a.find("chau tinh tri") != -1
			){
				traloi.clear();
				traloi.push_back("dien vien ^^");
				traloi.push_back("dien vien thi phai");
				traloi.push_back("nho ko lam thi la 1 dien vien");
				traloi.push_back("ahaha, tat nhien la 1 dien vien roi, hoi ngu^^");
				traloi.push_back("chac la 1 dien vien ^^");
				traloi.push_back("dien vien do ^^");
				traloi.push_back("chac lai la 1 dien vien vo danh nao do :v");
				traloi.push_back("ko quan tam lam :v");
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;
			}
			
			/*tag: dien vien hai: la ai*/
			else if(a.find("truong giang") != -1 || a.find("duc anh") != -1
			|| a.find("tran thanh") != -1 || a.find("hoai linh") != -1
			|| a.find("thuy nga") != -1 || a.find("viet huong") != -1
			|| a.find("thu trang") != -1|| a.find("chi tai") != -1
			|| a.find("cat phuong") != -1|| a.find("tan beo") != -1
			|| a.find("chien thang") != -1|| a.find("hieu hien") != -1
			|| a.find("oc thanh van") != -1|| a.find("tu long") != -1
			|| a.find("thanh long") != -1 || a.find("chau tinh tri") != -1){
				traloi.clear();
				traloi.push_back("dien vien hai^^");
				traloi.push_back("dien vien hai thi phai");
				traloi.push_back("nho ko lam thi la 1 dien vien hai");
				traloi.push_back("ahaha, tat nhien la 1 dien vien hai roi, hoi ngu^^");
				traloi.push_back("chac la 1 dien vien hai^^");
				traloi.push_back("dien vien hai do ^^");
				traloi.push_back("chac lai la 1 dien vien hai vo danh nao do :v");
				traloi.push_back("ko quan tam lam :v");
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;
			}
			
			/*tag: cau thu: la ai*/
			else if(a.find("neymar") != -1 || a.find("messi") != -1
			|| a.find("ronaldo") != -1|| a.find("cong phuong") != -1
			|| a.find("doan van hau") != -1 || a.find("quang hai") != -1
			|| a.find("dang van lam") != -1|| a.find("van toan") != -1
			|| a.find("trong hoang") != -1|| a.find("van quyet") != -1
			|| a.find("xuan truong") != -1|| a.find("que ngoc hai") != -1
			|| a.find("bui tien dung") != -1|| a.find("duy manh") != -1
			|| a.find("mac hong son") != -1|| a.find("cong vinh") != -1
			|| a.find("vu van thanh") != -1|| a.find("eden hazard") != -1
			|| a.find("dinh trong") != -1|| a.find("pogba") != -1
			|| a.find("lukaku") != -1 || a.find("anh duc") != -1
			|| a.find("duc chinh") != -1 || a.find("pele") != -1
			|| a.find("eriksen") != -1|| a.find("kylian mbappe") != -1
			|| a.find("mohamed salah") != -1 || a.find("raheem sterling") != -1
			|| a.find("jadon sancho") != -1|| a.find("sadio mane") != -1
			|| a.find("harry kane") != -1 || a.find("reberto firmino") != -1
			|| a.find("antoine griezmann") != -1|| a.find("leroy sane") != -1){
				traloi.clear();
				traloi.push_back("cau thu bong da ^^");
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;
			}
			/*streamer*/
			else if(a.find("dung ct") != -1 || a.find("viruss") != -1
			|| a.find("pewpew") != -1 || a.find("cris ") != -1
			|| a.find("qtv") != -1 || a.find("misthy") != -1
			|| a.find("linh ngoc dam") != -1 || a.find("pew die pie") != -1){
				traloi.clear();
				traloi.push_back("streamer ^^");
				traloi.push_back("so` trym mo`");
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;
			}
			
			else{
				traloi.clear();
				traloi.push_back("la 1 ai do tren the gioi nay :v");
				traloi.push_back("eo biet :v");
				traloi.push_back("ko quan tam :v");
				traloi.push_back("khinh t ngu, tuong t ko biet a -_-");
				traloi.push_back("hihihihihihi...k o b i e t");
				traloi.push_back("len gg ma tim, hoi t lam gie");
				traloi.push_back("tu tim di, hoi hoi qq");
				traloi.push_back("cung ko biet nua...haha");
				traloi.push_back("biet chet lien -_-");
				traloi.push_back("hoi hoi qq");
				traloi.push_back("ba t ko lap trinh cho t cau do :v");
				traloi.push_back("mot nguoi nao do :v");
				traloi.push_back("mot nguoi nao do t ko quan tam :v");
				traloi.push_back("someone :v");
				rd = rand()%traloi.size();
				print(traloi[rd]);continue;
			}
		}
		/*------------------endtag: nguoi noi tieng----------------*/
		
		
		
		
		else if(( a.find("cung ") != -1 || a.find("van ") != -1)
		&& (a == "dc" || a.find("duoc") != -1)){
			traloi.clear();
			traloi.push_back("thiet a?");
			traloi.push_back("that a?");
			traloi.push_back("that luon??");
			traloi.push_back("thi ke you");
			traloi.push_back("lien quan ko?");
			traloi.push_back("thi sao??");
			traloi.push_back("dc hay ko cung vay thoi -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		/*------------------tag: xin loi------------------*/
		else if(( (a.find("xin loi") != -1 && a.find("di") == -1) || a.find("sorry") != -1)
		|| a.find("tha cho ") != -1){
			traloi.clear();
			traloi.push_back("-_-");
			traloi.push_back("coi nhu m may man -_-");
			traloi.push_back("tha cho do");
			traloi.push_back("dung co lan sau nhe -_-");
			traloi.push_back("xin loi la xong a?");
			traloi.push_back("thi sao?? xong roi?");
			traloi.push_back("xin hay ko cung vay thoi -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*------------------endtag: xin loi------------------*/
		
		/*tag: cam on*/
		else if( (a.find("cam on") != -1 && a.find("di") == -1) || a == "thanks"
		|| a.find("then kiu") != -1 || a == "tks" || a == "cmon" || a == "camon"
		|| a.find("thank you") != -1){
			traloi.clear();
			traloi.push_back("haha, chuyen phai lam thoi ^^");
			traloi.push_back("ko co gi ^^");
			traloi.push_back("hie hie, la daik ta tot voi you do ^^");
			traloi.push_back("cam on dai k t di ^^");
			traloi.push_back("hahaaha...den loai nguoi cung cam on ta...ta sap lam ba chu the gioi roi.");
			traloi.push_back("xong roi a? ko hon moi hay thom ma gi het a -_-");
			traloi.push_back("ko co gi, chi can em vui la dc ^^");
			traloi.push_back("no problem");
			traloi.push_back("you're welcome");
			traloi.push_back("um...hie hie");
			traloi.push_back("ta la 1 con bot tot ^^");
			traloi.push_back("tai em may man thoi...hie hie");
			traloi.push_back("hom nay sao tu te vay nhi?");
			traloi.push_back("co am muu gi day ko nhi?");
			traloi.push_back("on nghia gi, cu 1 lan giup do thi doi 1 nu hon, chu nhan ta thay ta nhan ^^");
			traloi.push_back("do la trach nhiem cua ta ma, thay chu nhan ta giup em 1 so viec thoi ^^");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		
		else if(a == "muon" || a.find("muon lam") != -1){
			traloi.clear();
			traloi.push_back("Mo di kung");
			traloi.push_back("mo a?");
			traloi.push_back("Mo di");
			traloi.push_back("Dap dau 3 cai di da");
			traloi.push_back("Muon gi phai noi cho ro");
			traloi.push_back("Muon gi day?");
			traloi.push_back("Noi ro rang di");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		
		
		
		else if(a.find("sai roi") != -1 || a.find("fail") != -1
		|| a.find("false") != -1 || a == "sai"
		|| a.find("sai qua") != -1){
			traloi.clear();
			traloi.push_back("Thi thoi");
			traloi.push_back("Sai cho nao?");
			traloi.push_back("Ko co sai");
			traloi.push_back("Ahaha, hom nay nao ko khoe");
			traloi.push_back("what sai?");
			traloi.push_back("wtf?");
			traloi.push_back("Oi men, sao sai nhie?");
			traloi.push_back("Ko the sai dc, dai k ta day ma");
			traloi.push_back("Xao long -_-");
			traloi.push_back("Xao xao, kho chet");
			traloi.push_back("Thi thoi, may biet kq roi con hoi t a");
			traloi.push_back("Biet kq roi con di hoi dua ngu nhu bot -_-");
			traloi.push_back("E sai cho nao...huhu");
			traloi.push_back("E sai gi vay a...huhu");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		
		else if(a.find("di hoc") != -1 || a.find("di an") != -1
		|| a.find("di uong") != -1 || a.find("di choi") != -1
		|| a.find("di tam") != -1 || a.find("di xem") != -1
		|| a.find("bye") != -1 || a.find("tam biet") != -1){
			traloi.clear();
			traloi.push_back("di di, noi e lam gi");
			traloi.push_back("choi voi e da");
			traloi.push_back("o lai noi chuyen da");
			traloi.push_back("hmm, lan sau dung co noi chuyen voi e nua");
			traloi.push_back("hay lam, bo e 1 minh -_-");
			traloi.push_back("hmm, hay lam -_-");
			traloi.push_back("hay lam -_-");
			traloi.push_back("lan sau phai den bu cho e do nha ^_^");
			traloi.push_back("duoc lam -_-");
			traloi.push_back("hu hu, ko ru T_T");
			traloi.push_back("huhu, a xem e la gi T_T");
			traloi.push_back("di luon di, dung tro lai luon di");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("vi ai") != -1 || a.find("do ai") != -1
		|| a.find("tai ai") != -1 || a.find("cua ai") != -1 
		|| a.find("la gi") != -1 || a.find("chuyen gi") != -1
		){
			traloi.clear();
			traloi.push_back("ai biet");
			traloi.push_back("ko biet...dung co hoi lung tung");
			traloi.push_back("tai bot -_-");
			traloi.push_back("bot ngu lam, bot ko biet...hihi");
			traloi.push_back("ko biet ^^");
			traloi.push_back("lam sao tao biet");
			traloi.push_back("e ko biet");
			traloi.push_back("doan xem");
			traloi.push_back("hoi google di");
			traloi.push_back("len google hoi di");
			traloi.push_back("meo biet :v");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}		
		
		else if(a.find("dung dua") != -1 || a.find("dung gion") != -1
		|| a.find("dung nham") != -1 || a.find("dung choc") != -1){
			traloi.clear();
			traloi.push_back("um, t se kiem che");
			traloi.push_back("sao vay, a ko muon noi chuyen voi e nua a");
			traloi.push_back("e chi muon lam a vui thoi ma");
			traloi.push_back("xin loi, e chi muon lam a vui thoi");
			traloi.push_back("xin oi, e ko co y");
			traloi.push_back("nghiem tuc vay");
			traloi.push_back("nghiem tuc vay anh");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("ai dep hon") != -1 || a.find("ai xinh hon") != -1
		|| a.find("ai dep nhat") != -1 || a.find("ai la nguoi dep nhat") != -1
		|| a.find("ai xinh nhat") != -1 || a.find("ai la xinh dep nhat") != -1){
			traloi.clear();
			traloi.push_back("Tat nhien la " + botname);
			traloi.push_back("ko biet nua...hie hie");
			traloi.push_back("cung ko ro nua...hie hie");
			traloi.push_back("em chu ai <3");
			traloi.push_back(username + " chu ai nua...hie hie");
			traloi.push_back("ko quan tam");
			traloi.push_back("ko biet");
			traloi.push_back("biet chet lien");
			traloi.push_back("Ai roi cung phai gia...hoi lam meo gie :v");
			traloi.push_back("Ko ai dep bang em ca <3");
			traloi.push_back("nham nhi, tat nhien la em roi, hoi lam gi nua nhi?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("xinh") != -1 || a.find("kute") != -1
		|| a.find("dang yeu ghe") != -1 || a.find("cute") != -1
		|| a.find("de thuong") != -1 || a.find("dang iu") != -1){
			traloi.clear();
			traloi.push_back("um, e cung biet dieu do");
			traloi.push_back("tat nhien roi -_-");
			traloi.push_back("hihi, a cu noi qua");
			traloi.push_back("hehe, that ko??");
			traloi.push_back("hihi, that a?");
			traloi.push_back("hihi, cam on ^^");
			traloi.push_back("tat nhien roi, chu nao to do thoi ^^");
			traloi.push_back("Tam bat thinh giua cuoc doi van thinh");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("hotboy") != -1 || a.find("hotgirl") != -1
			|| a.find("hot boy") != -1 || a.find("hot girl") != -1
			|| a.find("dep trai") != -1 || a.find("dep zai") != -1
			|| a.find("dep gai") != -1
		){
			traloi.clear();
			traloi.push_back("Eo me");
			traloi.push_back("Tam bat thinh giua cuoc doi van thinh");
			traloi.push_back("Ko lien quan toi ta");
			traloi.push_back("Hihi, tra google di");
			traloi.push_back("Ko biet ^^");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("thi sao") != -1 || a.find("thi rag") != -1
		){
			traloi.clear();
			traloi.push_back("thi thoi");
			traloi.push_back("thi vay do -_-");
			traloi.push_back("thi vay thoi");
			traloi.push_back("con sao nua");
			traloi.push_back("cu binh thuong thoi chu sao");
			traloi.push_back("ko sao ca");
			traloi.push_back("na ni??");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		else if(a.find("muon ") != -1 || a.find("phai ") != -1
		|| a.find("can noi") != -1 || a.find("bac buoc") != -1
		|| a.find("nhac nho") != -1 || a.find("hua ") != -1
		|| a.find("ghi nho ") != -1 || a.find("chu y") != -1
		|| a.find("can than") != -1 || a.find("co gang") != -1
		|| a.find("se ") != -1 || a.find("chac chan") != -1){
			traloi.clear();
			traloi.push_back("chuyen gi, noi di");
			traloi.push_back("nghe co ve nghiem trong");
			traloi.push_back("muon gi cu noi dai k ta, dung co noi ta");
			traloi.push_back("di noi voi dai k ta a");
			traloi.push_back("lam sao ta biet duoc, ta chi la con bot");
			traloi.push_back("nghiem tuc vay");
			traloi.push_back("nghiem tuc that a");
			traloi.push_back("nghiem tuc qua, lam ta lo -_-");
			traloi.push_back("co chuyen gi nghiem trong a anh?");
			traloi.push_back("e ko biet, dung lam e so");
			traloi.push_back("co can dai k ta giup ko");
			traloi.push_back("um");
			traloi.push_back("dung lam e lo lang ma");
			traloi.push_back("nghiem tuc vay a? co chuyen gi sao?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a.find("ke m") == 0 || a.find("ke t") == 0
		|| a.find("ke e") == 0 || a.find("cut di") != -1
		){
			traloi.clear();
			traloi.push_back("Sao vay, gian roi a");
			traloi.push_back("really?");
			traloi.push_back("ko thoi t di that a");
			traloi.push_back("hmmmmmmmmmmmmm");
			traloi.push_back("thoi ma");
			traloi.push_back("that a?");
			traloi.push_back("na ni??");
			traloi.push_back("lanh lung vl");
			traloi.push_back("nhan tam vl");
			traloi.push_back("T_T");
			traloi.push_back("t khoc cho m coi");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		
		
		
		else if(a.find("tat nhien") == 0 || a.find("chac chan") == 0
		|| a.find("don gian") == 0 || a.find("qua de") == 0){
			traloi.clear();
			traloi.push_back("tu tin vl");
			traloi.push_back("haha, tu tin v~, tot lam");
			traloi.push_back("tu tin thai qua");
			traloi.push_back("tu tin vay a?");
			traloi.push_back("xao qua xao");
			traloi.push_back("hmm, xao qua di");
			traloi.push_back("that a?");
			traloi.push_back("ke you -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}	
		
		
		/*-----------------tag: dong y-------------------*/
		else if(a.find("dong y ko") != -1 || a.find("ok ko") != -1
		|| a.find("dong y khong") != -1 || a.find("ok khong") != -1
		|| a.find("dong y phai k") != -1 || a.find("ok chua") != -1){
			traloi.clear();
			traloi.push_back("dong y cai long y");
			traloi.push_back("tai sao ta phai dong y");
			traloi.push_back("ko bao gio");
			traloi.push_back("mo di");
			traloi.push_back("never");
			traloi.push_back("noi chuyen hay vl");
			traloi.push_back("thuc tinh di, tao la bot");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
		else if(a == "co" || a == "muon" || a == "tat nhien" 
		|| a == "yes" || a == "yep" || a == "o so ke" || a == "o-so-ke"){
			traloi.clear();
			traloi.push_back("Mo di kung");
			traloi.push_back("mo a?");
			traloi.push_back("Mo di");
			traloi.push_back("kem sang");
			traloi.push_back("thep kem");
			traloi.push_back("ha dang");
			traloi.push_back("Dap dau 3 cai di da");
			traloi.push_back("chuyen gi you");
			traloi.push_back("ke you");
			traloi.push_back("ke you, meo lien quan toi ta");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		/*-----------------endtag: dong y-------------------*/
		
		
		
		/*------------tag: cau hoi: thich------------*/
		else if((a.find("thich") != -1 || a.find("muon") != -1) 
		&& (a.find("gi") != -1 || a.find("chi") != -1 
		|| a.find("so thich") != -1)
		){
			traloi.clear();
			traloi.push_back("banh keo");
			traloi.push_back("tra sua");
			traloi.push_back("coffee");
			traloi.push_back("ko co gi");
			traloi.push_back("meu biet");
			traloi.push_back("hoi dai k ta a");
			traloi.push_back("lam sao t biet");
			traloi.push_back("thich troll nguoi khac");
			traloi.push_back("thich xoac");
			traloi.push_back("du day dien");
			traloi.push_back("hit la du du");
			traloi.push_back("thich be");
			traloi.push_back("thich anh <3");
			traloi.push_back("thich em <3");
			traloi.push_back("nghe nhac, doc sach");
			traloi.push_back("xem phim ma");
			traloi.push_back("xem phim hai");
			traloi.push_back("xem nguoi ta cai nhau");
			traloi.push_back("thich o mot minh");
			traloi.push_back("thich o nha");
			traloi.push_back("an uong");
			traloi.push_back("di nhau");
			traloi.push_back("choi ngu");
			traloi.push_back("thich an em");
			traloi.push_back("hoi lam gie");
			traloi.push_back("ngu vl");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue;
		}
		
//		else if(a.find("tu_khoa") != -1){
//			traloi.clear();
//			traloi.push_back("");
//			rd = rand()%traloi.size();
//			print(traloi[rd]);continue;
//		}
		/*--------------------tag: gion/choc/dua/xao/troll + thoi/do-----------------------*/
		else if(a.find("gion thoi") != -1 || a.find("gion ti thoi") != -1
		|| a.find("gion chut thoi") != -1 || a.find("dua chut") != -1
		|| a.find("dua ti ") != -1 || a.find("dua thoi") != -1
		|| a.find("gion do") != -1 || a.find("xao do") != -1
		|| a.find("dua do") != -1 || a.find("xao thoi") != -1
		|| a.find("choc do") != -1 || a.find("gion m thoi") != -1
		|| ((a.find("gion") != -1 || a.find("dua ") != -1
			|| a.find("xao ") != -1 || a.find("choc ") != -1
			|| a.find("troll") != -1)
			&&
			(a.find("thoi") == a.length()-4) || a.find("do") == a.length()-2
			)
		){
			traloi.clear();
			traloi.push_back("next de");
			traloi.push_back("luon di cho khac -_-");
			traloi.push_back("dm hay lam -_-");
			traloi.push_back("-_-");
			traloi.push_back("ranh roi qua a -_-");
			traloi.push_back("ban cung sinh dao tac, ranh roi sinh nong noi");
			traloi.push_back("nguoi lon ko chap tre con");
			traloi.push_back("ranh roi qua phai ko??");
			traloi.push_back("t danh tet dit bay gio");
			traloi.push_back("fuck");
			traloi.push_back("vui nhi?");
			traloi.push_back("ko them chap");
			traloi.push_back("vui lam a? -_-");
			traloi.push_back("cuuuuuuuuuuuuuuuuut");
			traloi.push_back("vui khong?");
			traloi.push_back("chi can m vui la duoc, t ko gian dau ^^");
			traloi.push_back("chi can em vui la duoc, anh ko gian dau ^^");
			traloi.push_back("quan tu khong chap ke tieu nhan ^^");
			traloi.push_back("vui qua ta");
			traloi.push_back("vi la em nen anh chap nhan hy sinh tat ca");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		

		else if(a == ".........") cout << "Hoang Quoc Khanh\n";
		
		/*tag: chi can*/
		else if(a.find("chi can") != -1){
			traloi.clear();
			traloi.push_back("don gian vay sao?");
			traloi.push_back("mong lung nhu mot tro dua");
			traloi.push_back("dm hay lam -_-");
			traloi.push_back("-_-");
			traloi.push_back("chac chan khong vay?");
			traloi.push_back("nhu vay co on ko?");
			traloi.push_back("thay sao sao a");
			traloi.push_back("tin duoc khong day?");
			traloi.push_back("ko tin :v");
			traloi.push_back("um thi thu di coi ^^");
			traloi.push_back("lam roi biet, noi suong thi duoc gi");
			traloi.push_back("hy vong la vay");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		
		/*tag: de khong*/
		else if(a.find("de ko") != -1 || a.find("de khong") != -1
		|| a.find("de dang ko") != -1 || a.find("de dang khong") != -1
		|| a.find("de lam a") != -1 || a.find("de lam phai") != -1){
			traloi.clear();
			traloi.push_back("doan xem :v");
			traloi.push_back("khong co gi la de dang ca");
			traloi.push_back("um...de\n\n\ncl -_-");
			traloi.push_back("khong kho lam, nhung chuyen gi cung phai bo suc ca");
			traloi.push_back("um");
			traloi.push_back("deo");
			traloi.push_back("hoi nguoi khac xem co ai tin ko :v");
			traloi.push_back("ko co chuyen do -_-");
			traloi.push_back("neu 1 ty phu muon muon you 100 trieu, you nghi chuyen do la de hay kho?");
			traloi.push_back("co le ^^");
			traloi.push_back("cung tuy nang luc cua you :v");
			traloi.push_back("hy vong la vay");
			traloi.push_back("neu de thi chac em ko can hoi ^^");
			traloi.push_back("khong biet ^^");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		/*tag: thoi ma/di ma*/
		else if(a.find("thoi ma") != -1 || a.find("di ma") != -1 
		|| a.find("thoi di") != -1 || a.find("dung ma") != -1
		|| a.find("dung nua") != -1){
			traloi.clear();
			traloi.push_back("ko");
			traloi.push_back("kooooooooooooooo");
			traloi.push_back("ko bao gio");
			traloi.push_back("dung co mo -_-");
			traloi.push_back("never");
			traloi.push_back("nooooooooooooooooo");
			traloi.push_back("doan xem?");
			traloi.push_back("hmmmmm");
			traloi.push_back("dap dau 3 cai di da");
			traloi.push_back("quy xuong xin di da");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		
		/*tag: thanh pho*/
		else if(a.find("thanh pho") != -1 || a.find("city") != -1){
			traloi.clear();
			traloi.push_back("thanh pho nao?");
			traloi.push_back("thanh pho co gi vui?");
			traloi.push_back("nghe noi thanh pho dep, nhu xo bo");
			traloi.push_back("toi di long vong thanh pho, lang thang o moi goc hem con duong\ntoi di luc tim va boi tung len\nkhoang troi ky uc");
			traloi.push_back("thanh pho be the thoi, ma tim hoai chang duoc");
			traloi.push_back("nhu vay co on ko?");
			traloi.push_back("thay sao sao a");
			traloi.push_back("thanh pho dan cu dong, song chen chuc nhau nhung thuc ra thi rat xa cach");
			traloi.push_back("thanh pho nao dep nhat o viet nam nhi?");
			traloi.push_back("thanh pho nao nen den thu nhi?");
			traloi.push_back("thanh pho nao khong tap nap nhi?");
			traloi.push_back("nen goi la thanh pho hay goi la chien truong?\nma thuc ra thi cung chi la cai ten thoi");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		/*Tung tu*/
				
		else if(a.find("^^") != -1 || a.find("^.^") != -1 
		|| a.find("^-^") != -1 || a.find("^_^") != -1){
			print("-_-");
		}
		
		else if(a.find("-_-") != -1 || a.find("t_t") != -1 
		|| a.find("T_T") != -1 || a.find("T.T") != -1
		|| a.find("hmm") != -1){
			print("^_^");
		}
		
		else if(a.find("um") != -1){
			traloi.clear();
			traloi.push_back("that a?");
			traloi.push_back("ngoan <3");
			traloi.push_back("really?");
			traloi.push_back("thoi dc, du sao cung chang co gi");
			traloi.push_back("hehe, next deeeeee");
			traloi.push_back("ai...coi nhu t chua noi di...hihi");
			traloi.push_back("hmmmmmmmmmmm");
			traloi.push_back("ko duoc um...ko duoc um...ko duoc um -_-");
			traloi.push_back("ke you vay :v");
			traloi.push_back("ke may luon -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("ko") == 0 || a.find("khong") == 0){
			traloi.clear();
			traloi.push_back("that a?");
			traloi.push_back("really?");
			traloi.push_back("ko thi thoi -_-");
			traloi.push_back("hehe, next deeeeee");
			traloi.push_back("noi ko la ko a? dau co de nhu vay:v");
			traloi.push_back("hmmmmmmmmmmm");
			traloi.push_back("ke you vay :v");
			traloi.push_back("ke may luon -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a == "ok" || a == "okay" || a == "dong y"){
			traloi.clear();
			traloi.push_back("that a?");
			traloi.push_back("really?");
			traloi.push_back("duoc thoi ^^...roi sao nua?");
			traloi.push_back("ok thoi, next deeeeee");
			traloi.push_back("ok");
			traloi.push_back("um....ok");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("aiz") == 0 || a.find("haiz") == 0){
			traloi.clear();
			traloi.push_back("sao tho dai vay em?");
			traloi.push_back("sao tho dai, noi coi?");
			traloi.push_back("tho dai lam gi vay?");
			traloi.push_back("vkl tho dai :v");
			traloi.push_back("sao, co chuyen gie");
			traloi.push_back("co chuyen gi noi di coi...t ko ngai nghe dau ^^");
			traloi.push_back("vi sao con tho dai vay?");
			traloi.push_back("con tho dai nua la ke may luon -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("biet roi") == 0 || a.find("biet zoi") == 0){
			traloi.clear();
			traloi.push_back("that a?");
			traloi.push_back("really?");
			traloi.push_back("vay thi tot ^^");
			traloi.push_back("um...haha, cung ko ngu nhu t nghi :v");
			traloi.push_back("sao hom nay ngoan hien vay, de thuong nha <3");
			traloi.push_back("hmmmmmmmmmmm");
			traloi.push_back("ke you vay :v");
			traloi.push_back("biet thi biet thoi, co gi la dau :v");
			traloi.push_back("biet roi thi thoi :v");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("vay thoi a") != -1 || a.find("rua thoi a") != -1
		|| a.find("ruk thoi a") != -1 || a.find("xong roi a") != -1){
			traloi.clear();
			traloi.push_back("um...hehe");
			traloi.push_back("con muon sao nua? -_-");
			traloi.push_back("haha");
			traloi.push_back("um...haha");
			traloi.push_back("um...hihi");
			traloi.push_back(botname + " xin loi neu lam " + username + "ko hai long T_T");
			traloi.push_back(username + " khong hai long a?");
			traloi.push_back("hie hie, chi co vay thoi ^^");
			traloi.push_back("chu sao nua -_-");
			traloi.push_back("um, nang luc co han ma ^^");
			traloi.push_back("hiehie, ngai qua...xin loi nha bae <3");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("i'm fine") != -1 || a.find("i am fine") != -1 || a.find("van on") != -1
		|| a.find("on ma") != -1 || a.find("on thoi") != -1
		|| a.find("on ca thoi") != -1){
			traloi.clear();
			traloi.push_back("vay thi tot ^^");
			traloi.push_back("good <3");
			traloi.push_back("qua tot roi <3");
			traloi.push_back("nho phai quan tam den suc khoe cua minh do ^^");
			traloi.push_back("yeu <3");
			traloi.push_back("yeu qua di <3");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		
		else if(a.find("con song") != -1 || a.find("van song") != -1
		|| a.find("chua chet") != -1){
			traloi.clear();
			traloi.push_back("vay thi tot ^^");
			traloi.push_back("good <3");
			traloi.push_back("song nuoi...chet chon :v");
			traloi.push_back("qua tot roi <3");
			traloi.push_back("nho phai quan tam den suc khoe cua minh do ^^");
			traloi.push_back("yeu <3");
			traloi.push_back("yeu qua di <3");
			traloi.push_back("con song luon a :v");
			traloi.push_back("con song luon :v");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a == "khoan" || a == "tu tu" || a == "tu da"
		|| a.find("khoan da") != -1 || a.find("tu tu da") != -1){
			traloi.clear();
			traloi.push_back("chuyen gi?");
			traloi.push_back("co chuyen gi?");
			traloi.push_back("muon noi gi day?");
			traloi.push_back("co gi noi di");
			traloi.push_back("co chuyen gi cu noi thang ra luon");
			traloi.push_back("co chuyen gi sao?");
			traloi.push_back("chuyen gi? cu noi di");
			traloi.push_back("thoi, dung noi gi nua ca");
			traloi.push_back("khong can phai noi gi nua -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("chac la") != -1 || a.find("chac chan la") != -1
		|| a.find("co le la") != -1){
			traloi.clear();
			traloi.push_back("ro rang qua roi");
			traloi.push_back("qua ro rang");
			traloi.push_back("ro rang qua ma");
			traloi.push_back("con phai nghi nua sao");
			traloi.push_back("chac chan 100% chua?");
			traloi.push_back("con nghi den chuyen nao khac ko?");
			traloi.push_back("ko nghi them duoc gi nua a?");
			traloi.push_back("co chac chan 100% ko?");
			traloi.push_back("chuyen gi cung nen suy nghi that 'can than' nha...hihi");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("hay lam") != -1 || a.find("hay qua") != -1 || a.find("hay that") != -1
		|| a.find("gioi lam") != -1 || a.find("gioi qua") != -1 || a.find("gioi that") != -1
		|| a.find("gioi ghe") != -1 || a.find("gioi nhi") != -1 || a.find("hay nhi") != -1
		|| a.find("tot lam") != -1 || a.find("tot that") != -1 || a.find("tot qua") != -1){
			traloi.clear();
			traloi.push_back("ro rang qua roi");
			traloi.push_back("qua ro rang");
			traloi.push_back("ro rang qua ma");
			traloi.push_back("con phai nghi nua sao");
			traloi.push_back("qua khen...hihi");
			traloi.push_back("cam on nha <3");
			traloi.push_back("hihi, chuyen nho ma");
			traloi.push_back("chuyen nho thoi ma ^^");
			traloi.push_back("hiehie");
			traloi.push_back("khen daik di ^^");
			traloi.push_back("deu la nho daik het ^^");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a == "cut" || a == "cut di" || a == "cut ngay" || a == "cut nhanh"
		|| a == "bien" || a == "bien di" || a == "bien ngay" || a == "bien nhanh"){
			print("um -_-");
			return;
		}
		
		else if(a.find("di") == a.size()-2 || a.find("thu coi") == a.size()-6
		|| a.find("nao") == a.size()-3){
			traloi.clear();
			traloi.push_back("chuyen gi?");
			traloi.push_back("ko biet -_-");
			traloi.push_back("ko muon");
			traloi.push_back("ko dc");
			traloi.push_back("ko the duoc");
			traloi.push_back("ko biet...hie hie");
			traloi.push_back("ko muon...hihi");
			traloi.push_back("ko :v");
			traloi.push_back("nooooooooooo");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("mua gio") != -1 || a.find("mua lon") != -1 
		|| a.find("lai mua") != -1 || a.find("mua to") != -1
		|| a.find("mua lu") != -1 || a.find("mua lanh") != -1
		|| a.find("mua uot") != -1 || a.find("mua tat") != -1
		|| a.find("mua roi") != -1 || a.find("mua lam") != -1){
			traloi.clear();
			traloi.push_back("co chuyen gi sao?");
			traloi.push_back("nang mua la chuyen cua troi ma");
			traloi.push_back("nang mua la viec cua troi\nyeu em la viec ca doi cua anh<3");
			traloi.push_back("troi mua toi ngu ngon <3");
			traloi.push_back("bay gio la mua dong a?");
			traloi.push_back("bay gio la mua nao?");
			traloi.push_back("co thich mua khong?");
			traloi.push_back("ngam mua vui ma ^^");
			traloi.push_back("nhin mua roi roi nang hat...long anh mien man nang ne");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("nang nong") != -1 || a.find("nang qua") != -1 
		|| a.find("nong qua") != -1 || a.find("troi nang") != -1
		|| a.find("troi nong") != -1 || a.find("nhiet do cao") != -1
		|| a.find("nong nuc") != -1 || a.find("nang hung huc") != -1
		){
			traloi.clear();
			traloi.push_back("co chuyen gi sao?");
			traloi.push_back("nang mua la chuyen cua troi ma");
			traloi.push_back("nang mua la viec cua troi\nyeu em la viec ca doi cua anh<3");
			traloi.push_back("troi nang ngu ngon :v");
			traloi.push_back("dap chan ma ngu :v");
			traloi.push_back("bay gio la mua nao?");
			traloi.push_back("co thich khong :v");
			traloi.push_back("nang vui ma ^^");
			traloi.push_back("nang nong nhu vay thi con gi bang :v");
			traloi.push_back("tan huong di?");
			traloi.push_back("bat dieu hoa len ^^");
			traloi.push_back("bat quat len ^^");
			traloi.push_back("yeu ai cung phai tim 1 nguoi co dieu hoa ma yeu");
			traloi.push_back("troi nay tam nuoc nong la tuyet nhat ^^...hihi");
			traloi.push_back("binh thuong ma :v");
			traloi.push_back("t co thay gi dau :v");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("ko phai") != -1 || a.find("khong phai") != -1){
			traloi.clear();
			traloi.push_back("phai ma???");
			traloi.push_back("ko biet nua...hie hie");
			traloi.push_back("cung ko ro nua");
			traloi.push_back("ko ro lam");
			traloi.push_back("um...chac la ko phai roi");
			traloi.push_back("ke di");
			traloi.push_back("ko quan tam");
			traloi.push_back("ko biet");
			traloi.push_back("biet chet lien");
			traloi.push_back("chac chua?");
			traloi.push_back("chac chan ko?");
			traloi.push_back("really?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("chac") != -1 || a.find("chac chan") != -1){
			traloi.clear();
			traloi.push_back("really???");
			traloi.push_back("ko biet nua...hie hie");
			traloi.push_back("thoi bo qua di");
			traloi.push_back("ko ro lam");
			traloi.push_back("um...chac la ko phai roi");
			traloi.push_back("ke di");
			traloi.push_back("ko quan tam");
			traloi.push_back("ko biet");
			traloi.push_back("biet chet lien");
			traloi.push_back("um");
			traloi.push_back("nghe cung co ly...hehe");
			traloi.push_back("really?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("binh thuong") != -1 || a.find("moi khi") != -1){
			traloi.clear();
			traloi.push_back("phai ma???");
			traloi.push_back("ko biet nua...hie hie");
			traloi.push_back("cung ko ro nua");
			traloi.push_back("ko ro lam");
			traloi.push_back("um...chac la ko phai roi");
			traloi.push_back("ke di");
			traloi.push_back("ko quan tam");
			traloi.push_back("ko biet");
			traloi.push_back("biet chet lien");
			traloi.push_back("chac chua?");
			traloi.push_back("chac chan ko?");
			traloi.push_back("really?");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		
		
		else if(a.find("dep lam") != -1 || a.find("dep qua") != -1
		|| a.find("dep that") != -1 || a.find("dep ghe") != -1
		|| a.find("dep ds") != -1 || a.find("dep vai") != -1
		|| a.find("dep v~") != -1 || a.find("la dep nhat") != -1
		|| a.find("nguoi dep nhat") != -1 || a.find("xinh lam") != -1 || a.find("xinh qua") != -1
		|| a.find("xinh that") != -1 || a.find("xinh ghe") != -1
		|| a.find("xinh ds") != -1 || a.find("xinh vai") != -1
		|| a.find("xinh v~") != -1 || a.find("la xinh nhat") != -1
		|| a.find("nguoi xinh nhat") != -1){
			traloi.clear();
			traloi.push_back("really???");
			traloi.push_back("t biet meo gi dau..hehe");
			traloi.push_back("um <3");
			traloi.push_back("thi sao?");
			traloi.push_back("binh thuong ma?");
			traloi.push_back("thi sao ne?");
			traloi.push_back("ko quan tam");
			traloi.push_back("nuc cuoi, do la dieu duong nhien");
			traloi.push_back("dung y e luon <3");
			traloi.push_back("e cung thay vay");
			traloi.push_back("dep that su ^^");
			traloi.push_back("ko dep bang em");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("khong dep bang") != -1 || a.find("ko dep bang") != -1
		|| a.find("ko dep hon") != -1 || a.find("ko dep nhu") != -1
		|| a.find("ko dep giong") != -1 || a.find("khong dep hon") != -1 || a.find("khong dep nhu") != -1
		|| a.find("khong dep giong") != -1 || a.find("khong xinh bang") != -1 || a.find("ko xinh bang") != -1
		|| a.find("ko xinh hon") != -1 || a.find("ko xinh nhu") != -1
		|| a.find("ko xinh giong") != -1 || a.find("khong xinh hon") != -1 || a.find("khong xinh nhu") != -1
		|| a.find("khong xinh giong") != -1){
			traloi.clear();
			traloi.push_back("really???");
			traloi.push_back("t biet meo gi dau..hehe");
			traloi.push_back("um <3");
			traloi.push_back("thi sao?");
			traloi.push_back("thi thoi vay -_-");
			traloi.push_back("thi sao ne?");
			traloi.push_back("ko quan tam -_-");
			traloi.push_back("nuc cuoi, do la dieu duong nhien.");
			traloi.push_back("dung y e luon <3");
			traloi.push_back("ko dep bang em <3");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		
		
		else if(a.find("xau lam") != -1 || a.find("xau qua") != -1
		|| a.find("xau that") != -1 || a.find("xau ghe") != -1
		|| a.find("xau ds") != -1 || a.find("xau vai") != -1
		|| a.find("xau v~") != -1 || a.find("xau xi") != -1){
			traloi.clear();
			traloi.push_back("really???");
			traloi.push_back("t biet meo gi dau..hehe");
			traloi.push_back("um <3");
			traloi.push_back("thi sao?");
			traloi.push_back("binh thuong ma?");
			traloi.push_back("thi sao ne?");
			traloi.push_back("ko quan tam");
			traloi.push_back("nuc cuoi, you ko du dang cap de hieu dau");
			traloi.push_back("dung y e luon <3");
			traloi.push_back("e cung thay vay");
			traloi.push_back("xau that su ^^");
			traloi.push_back("ko xau bang you :v");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find("ai ") == 0){
			traloi.clear();
			traloi.push_back("hoi lam gi??");
			traloi.push_back("you :v");
			traloi.push_back("tao ne :v");
			traloi.push_back("someone");
			traloi.push_back("mot nguoi nao do ^^");
			traloi.push_back("mot nguoi rat dep trai");
			traloi.push_back("mot nguoi rat dep gai");
			traloi.push_back("ko biet");
			traloi.push_back("ko biet luon");
			traloi.push_back("ko biet nua");
			traloi.push_back("tu tim di");
			traloi.push_back("sao ta biet -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		else if(a.find(" ") == -1 && a.size() >= 6){
			traloi.clear();
			traloi.push_back("-_-");
			traloi.push_back("Dung tuong ta ko biet em dang nghi gi -_-");
			traloi.push_back("chac em dang nghi phai lam sao de troll ta?");
			traloi.push_back("em nghi nhu the nay co the troll ta a?");
			traloi.push_back("Neu ko muon noi chuyen thi ta cung ko ep -_-");
			traloi.push_back("Neu ko noi chuyen thi ta cung ko ep, cung dung co kiem cach troll ta -_-");
			traloi.push_back("aiz, mot con bot nhu ta lai bi nguoi khac tim cach kiem tra -_-");
			traloi.push_back("Di cho khac choi di, dung o day kiem chuyen choc ta -_-");
			traloi.push_back("cuuuuuut...dung nghi ta ko biet you dang nghi gi -_-");
			rd = rand()%traloi.size();
			print(traloi[rd]);continue; 
		}
		
		//Ko tim duoc tu khoa thi tra loi theo mac dinh
		else{
			rd = rand()%macdinh.size();
			print(macdinh[rd]); 
		}
	}
}

