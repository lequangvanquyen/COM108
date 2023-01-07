// giai phuong trinh bac 2
#include <stdio.h> 
#include <math.h>
 int main(){
	float a,b,c,delta,x1,x2;
	printf("Nhap a: "); scanf("%f",&a);
	printf("Nhap b: "); scanf("%f",&b);
	printf("Nhap c: "); scanf("%f",&c);
	//printf("Nhap a,b,c: "); scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			printf("Phuong trinh co nghiem x = %f",-c/b);
		}
	}else{
		delta = pow(b,2)-4*a*c;
		if(delta<0){
			printf("Phuong trinh vo nghiem");
		}else if(delta==0){
			printf("Phuong trinh co nghiem kep x1=x2 = %f",-b/(2*a));
		}else{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co hai nghiem rieng biet:\nx1 = %f \nx2 = %f",x1,x2);
		}
	}
return 0;

 }
