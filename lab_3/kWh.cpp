#include <stdio.h>
#include <math.h>
int main(){
	const int bac1 = 1678;
	const int bac2 = 1734;
	const int bac3 = 2014;
	const int bac4 = 2536;
	const int bac5 = 2834;
	const int bac6 = 2927;
	
	int kWh;
	int TienDien=0;
	printf("Nhap vao so dien tieu thu hang thang: "); scanf("%d", &kWh);
	if(kWh<=50){
		TienDien=kWh*bac1;
	}else if(kWh<=100){
		TienDien=50*bac1 + (kWh-50)*bac2;
	}else if(kWh<=200){
		TienDien=50*bac1 + 50*bac2 + (kWh-100)*bac3;
	}else if(kWh<=300){
		TienDien=50*bac1 + 50*bac2 + 100*bac3 + (kWh-200)*bac4;
	}else if(kWh<=400){
		TienDien=50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + (kWh-300)*bac5;
	}else{
		TienDien=50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + 100*bac5 + (kWh-400)*bac6;
	}
	printf("So tien can phai dong: %d",TienDien);
	return 0;
}
