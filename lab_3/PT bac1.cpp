#include<stdio.h>
int main(){
	float a,b;
	printf("nhap a: "); scanf("%f",&a);
	printf("nhap b: "); scanf("%f",&b);
	if(a==0){
		if(b==0){
			printf("phuong trinh vo so nghiem");
		}else{
			printf("phuong trinh vo nghiem");
		}
	}else{
		printf("phuong trinh co nghiem: %f",-b/a);
	}
return 0;	
}






