#include <stdio.h>

int main(){
	
	float toan,ly,hoa;
	
	printf("Nhap diem Toan: "); scanf("%f",&toan);
	printf("Nhap diem Hoa: "); scanf("%f",&hoa);
	printf("Nhap diem Ly: "); scanf("%f",&ly);
	
	printf("Diem trung binh mon la: %f",(toan*3 + ly*2 + hoa)/6);
	
return 0;
}
