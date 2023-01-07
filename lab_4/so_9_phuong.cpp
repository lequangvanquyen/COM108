#include <stdio.h>
int main(){
	int x;
	printf("Nhap vao mot so: ");scanf("%d",&x);
	int count=0;
	for(int i=1;i<x;i++){
		if(i*i==x){
		count++;
		printf("%d La so chinh phuong");
		break;
		}
	}
	if(count==0){
		printf("Khong phai la so chinh phuong");
	}
	return 0;
}
