// S = pi * R * R
// C = 2 * pi * R
#include <stdio.h>
int main(){
	float R;
	
	printf("Nhap ban kinh: "); scanf("%f",&R);
	
	printf("Dien tich hinh tron la: %f", 3.14*R*R);
	printf("\nChu vi hinh tron la: %f", 2*3.14*R);
	
return 0;	
}
