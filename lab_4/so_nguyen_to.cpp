#include <stdio.h>
int main(){
	int x;
	printf("Nhap vao mot so nguyen duong: ");scanf("%d",&x);
	if(x<=1){
		printf("nhap sai! ... Vui long nhap lai");
	}else{
		int count=0;
		for(int i=2;i<x;i++){
		if(x%i==0){
			count++;
			}
		}
		if(count==0){
			printf("La so nguyen to");
		}else{
			printf("Khong phai la so nguyen to");
		}
	}	
	return 0;
}
