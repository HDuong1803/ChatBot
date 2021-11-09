#include<bits/stdc++.h>

void cungHoangDao(int dd, int mm){
		switch(mm){
			case 1:
				if(dd<=19){
					printf("Cung Ma ket\n");
				}
				else if(dd>=20){
					printf("Cung Bao Binh\n");
				}
				break;
			case 2:
				if(dd<=19){
					printf("Cung Bao Binh\n");
				}
				else if(dd>=20&&dd<=29){
					printf("Cung Song Ngu\n");
				}
				else {
					printf("Du lieu sai\n");
				}
				break;
			case 3:
				if(dd<=21){
					printf("Cung Song Ngu\n");
				}
				else if(dd>=22){
					printf("Cung Bach Duong\n");
				}
				break;
			case 4:
				if(dd<=20){
					printf("Cung Bach Duong\n");
				}
				else if(dd>=21){
					printf("Cung Kim Nguu\n");
				}
				break;
			case 5:
				if(dd<=21){
					printf("Cung Kim Nguu\n");
				}
				else if(dd>=22){
					printf("Cung Song Tu\n");
				}
				break;
			case 6:
				if(dd<=22){
					printf("Cung Song Tu\n");
				}
				else if(dd>=23){
					printf("Cung Cu Giai\n");
				}
				break;
			case 7:
				if(dd<=23){
					printf("Cung Cu Giai\n");
				}
				else if(dd>=24){
					printf("Cung Su Tu\n");
				}
				break;
			case 8:
				if(dd<=23){
					printf("Cung Su Tu\n");
				}
				else if(dd>=24){
					printf("Cung Xu Nu\n");
				}
				break;
			case 9:
				if(dd<=23){
					printf("Cung Xu Nu\n");
				}
				else if(dd>=24){
					printf("Cung Thien Xung\n");
				}
				break;
			case 10:
				if(dd<=23){
					printf("Cung Thien Xung\n");
				}
				else if(dd>=24){
					printf("Cung Thien Yet\n");
				}
				break;
			case 11:
				if(dd<=22){
					printf("Cung Thien Yet\n");
				}
				else if(dd>=23){
					printf("Cung Nhan Ma\n");
				}
				break;
			case 12:
				if(dd<=22){
					printf("Cung Nhan Ma\n");
				}
				else if(dd>=23){
					printf("Cung Bao Binh\n");
				}
				break;
			default:
				printf("Du lieu sai\n");
				break;
		}
}


void runcunghoangdao(){
	int dd, mm;
	do{
		printf("Nhap ngay:");
		scanf("%d", &dd);
		printf("Nhap thang:");
		scanf("%d", &mm);
		if(dd>31 || dd<1 || mm<1 || mm>12){
			printf("Du lieu sai!\n");
		}
	}while(dd>31 || dd<1 || mm<1 || mm>12);
	cungHoangDao(dd, mm);
}
