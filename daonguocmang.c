#include <stdio.h> 
#define LENGTH 9
void nhap( int arr[]){
	int i;
	for(i= 0; i< LENGTH; i++) {
		scanf("%d", &arr[i]);
	}
}


void hienthi( int arr[]){
	int i;
	for(i= 0; i< LENGTH; i++) {
		printf("%d\t",arr[i]);
	}
	
}


void daonguocMang(int arr[]){
	int i;
	for (i=0;i<LENGTH/2;i++){
       int temp=arr[i];
       arr[i]=arr[LENGTH-i-1];
       arr[LENGTH-i-1]=temp;
  	}
}

int main () {
 	int arr[LENGTH];
	printf("Nhap vao cac phan tu cua mang\n");
	nhap(arr);
	printf("Mang nhap vao la:\n");
	hienthi(arr);
	
	printf("\nMang dao nguoc la:\n");
	daonguocMang(arr);
	hienthi(arr);
	
 return 0;
  
}
