#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
int num, cardid, pin, stk, so_tien, c;
char luachon;
printf("Login\n");
printf("Nhap vao cardid:\n");
scanf("%d",&cardid);
printf("Nhap vao so pin:\n");
scanf("%d",&pin);
if (cardid==123&&pin==456){
	do {
	printf("1.Rut tien\n2.Chuyen khoan\n3.Xem so du\n4.Ket thuc\n");
	printf("Moi ban lua chon:\n");
	fflush(stdin);
	scanf("%d",&luachon);
switch (luachon){
	case 1:
		{
		printf("1.Rut tien\n");
		printf("Nhap vao so tien can rut:\n");
		scanf("%d",&so_tien);
		break;
		}
	case 2:
		{
		printf("2.Chuyen khoan\n");
		printf("Nhap so tai khoan can chuyen khoan:\n");
		scanf("%d",&stk);
		break;
		}
	case 3:
		{
		printf("3.Xem so du\n");
		printf("So du tai khoan la:\n");
		break;
		}
	case 4:
		{
		printf("4.Ket thuc\n");
		break;
		}
default:
{
	printf("Chon sai, moi ban chon lai \n");
	break;
}
}
printf("Ban co tiep tuc khong? Y/N");
fflush(stdin);
scanf("%c",&c);
}

while (c!='n');
printf("End");
}

else
printf("Invalid\n");
return 0;
}

