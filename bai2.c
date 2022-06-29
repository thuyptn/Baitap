#include <stdio.h> 
#define LENGTH 10
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
	printf("Input 10 numbers:\n");
	nhap(arr);
	printf("10 numbers inputed are:\n");
	hienthi(arr);
	
	printf("\n10 numbers in Reverse order are:\n");
	daonguocMang(arr);
	hienthi(arr);
	
 return 0;
  
}
