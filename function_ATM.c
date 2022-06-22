#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int login(int a,int b)
{
	if(a==123&&b==456)
	printf("\n\BAN DA DANG NHAP THANH CONG!\n");
	return 0;
}

int sodu(){
	int sd;
	sd=100000000;
	return sd;
}

int ruttien(){
	int cr,sd,cl;
	printf("Nhap vao so tien can rut : ");
	scanf("%d", &cr);
	sd=sodu();	
	if(cr<sd&&cr%50==0&&cr<5000000){
	printf("Ban da rut thanh cong so tien %d\n",cr);
	cl=sd-cr;
	printf("So du con lai cua ban la %d\n",cl);
}
	else if (cr<sd&&cr%50!=0)
	printf("So tien ban can rut khong phai la boi cua 50, moi ban nhap lai! \n");
	else if(cr<sd&&cr>=5000000)
	printf("So tien ban rut lon hon han muc mot lan rut cho phep, moi ban nhap lai \n");	
	else
	printf("So tien ban can rut vuot qua so du tai khoan! \n");	
}

char menu()
{
	printf("\n\t\1. Rut tien\n\t2. Chuyen khoan\n\t3. Hien thi so du\n\t4. Thoat\n");
}

int chuyentien(){
	int sd,stcc,stkcc;
	sd=sodu();
	printf("Nhap vao so tien can chuyen:");
	scanf("%d",&stcc);
	printf("nhap vao STK can chuyen:");
	scanf("%d",&stkcc);
	if(stcc<sd)
	{
	printf("\nBan da chuyen thanh cong so tien %d cho tai khoan %d",stcc,stkcc);
	printf(" \nSo su hien tai cua ban la %d\n",sd-stcc);
}
	else 
	printf("So tien can chuyen lon hon so du hien tai \n");
}

int main(int argc, char *argv[]) {
	int log,a,b,mn,ch,rt,ct,sd;
	char check, check1;
	do{
	printf("\nMoi ban nhap vao so tai khoan: ");
	scanf("%d",&a);
	printf("\nMoi ban nhap vao ma PIN: ");
	scanf("%d",&b);
	log=login(a,b);
	if(a==123&&b==456){
	do
	{
	
	mn=menu();
	printf("Nhap vao lua chon cua ban : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
		rt=ruttien();
		break;
		case 2:
			ct=chuyentien();
			break;
		case 3:
			sd=sodu();
			printf("So du cua ban la %d\n",sd);
			break;
		case 4:
			return 0;
	}
	printf("Ban co muon tiep tuc khong (Y/N) : ");
	fflush (stdin);
	scanf("%c",&check);
}
while (check=='y'||check=='Y');
}
else
{

	printf("\nBan da dang nhap sai tai khoan hoac ma PIN, moi ban dang nhap lai!");
}
}
	while (a!=123&&b!=456);
	return 0;
}
