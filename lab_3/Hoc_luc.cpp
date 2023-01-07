#include <stdio.h>
// xay dung chuong trinh tinh hoc luc cua sinh vien theo diem trung binh 
int main(){
	float diem;
	printf("Xin moi nhap diem: "); scanf("%f",&diem);
	if(diem < 0 || diem > 10){
		printf("Ban nhap sai dinh dang, xin moi nhap lai..");
	}else if(diem >= 9){
		printf("Sinh vien dat hoc luc xuat sac..");
	}else if(diem >= 8){
		printf("Sinh vien dat hoc luc gioi..");
	}else if(diem >= 6){
		printf("Sinh vien dat hoc luc kha..");
	}else if(diem >= 5){
		printf("Sinh vien dat hoc luc trung binh..");
	}else if(diem >= 3){
		printf("Sinh vien dat hoc luc yeu..");
	}else{
		printf("Sinh vien dat hoc luc kem..");
	}
return 0;
}
