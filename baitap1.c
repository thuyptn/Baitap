#include <stdio.h>
#include <stdlib.h>
 
int a,b; 

int input(){
	printf("Nhap vao 2 so nguyen:\n");
	printf("So nguyen thu nhat : ");
	scanf("%d", &a);
	printf("So nguyen thu hai: ");
	scanf("%d", &b);
}
int tong(){
	int tong; 
	tong=a+b;
	printf("Tong hai so nguyen la: %d\n", tong);
}
int hieu(){
	int hieu; 
	hieu=a-b;
	printf("Hieu hai so nguyen la: %d\n", hieu);
}
int tich(){
	int tich; 
	tich=a*b;
	printf("Tich hai so nguyen la: %d\n", tich);
}
int thuong(){
	float thuong; 
	thuong=(float)a/b;
	printf("Thuong hai so nguyen la: %f\n ", thuong);
}

int main() {
	int a,b,luachon; 
	char luachon1;
	input(a,b);
	do{
		printf("\nMenu lua chon: \n");
		printf("1.Tong \n");
		printf("2.Hieu \n");
		printf("3.Tich \n");
		printf("4.Thuong \n");
		printf("5.Exit\n\n");
		printf("Hay nhap lua chon : ");
		fflush(stdin);
		scanf("%d", &luachon);
		switch(luachon){
			case 1:
			tong(a,b);
			   break; 
			case 2:
			hieu(a,b);
			   break;
			case 3:
			tich(a,b);
			   break;
			case 4:
			thuong(a,b);
			   break;
			case 5:
			return 0;
				break;
		}
		printf("Ban co muon tiep tuc voi lua chon khac khong?: (Y/N) : ");
		fflush(stdin);
		scanf("%c", &luachon1); 
	} while(luachon1=='y'||luachon1=='Y');
	return 0;
}
