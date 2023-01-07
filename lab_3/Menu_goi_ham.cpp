#include <stdio.h>
#include <math.h>
void xephocluc();   //function declaration
void ptbac1();      //function declaration
void ptbac2();      //function declaration 
void tinhtiendien();//function declaration
void thoat();       //function declaration
int main(){
	printf("\t++--------------MENU---------------++\n");
	printf("\t| 1. Xep hoc luc                    |\n");
	printf("\t| 2. Giai PT bac nhat               |\n");
	printf("\t| 3. Giai PT bac hai                |\n");
	printf("\t| 4. Tinh tien dien                 |\n");
	printf("\t| 5. thoat                          |\n");
	printf("\t++---------------------------------++\n");
	int chon;
	printf("\tXin moi chon chuc nang (1,2,3,4,5): ");scanf("%d",&chon);
	switch(chon){
		case 1: xephocluc();   //function call
			break;
		case 2: ptbac1();      //function call
			break;
		case 3: ptbac2();      //function call
			break;
		case 4: tinhtiendien();//function call
			break;
		case 5: thoat();       //function call
			break;
		default: 
			printf("Chon sai! ... Yeu cau chon lai");
			break;
	}//end main 
return 0;
}
//function definition
void xephocluc(){
	float diem;
	printf("\nBan da chon chuc nang xep hoc luc\n");
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
}
void ptbac1(){
	printf("\nBan da chon chuc nang giai pt bac nhat\n");
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
		printf("phuong trinh co nghiem: %.2f",-b/a);
	}
}
void ptbac2(){
	printf("\nBan da chon chuc nang giai pt bac hai\n");
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
			printf("Phuong trinh co nghiem x = %.2f",-c/b);
		}
	}else{
		delta = pow(b,2)-4*a*c;
		if(delta<0){
			printf("Phuong trinh vo nghiem");
		}else if(delta==0){
			printf("Phuong trinh co nghiem kep x1=x2 = %.2f",-b/(2*a));
		}else{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co hai nghiem rieng biet:\nx1 = %.2f \nx2 = %.2f",x1,x2);
		}
	}
}
void tinhtiendien(){
	printf("\nBan da chon chuc nang tinh tien dien\n");
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
	printf("So tien can phai dong: %d VND",TienDien);
}
void thoat(){
	printf("Good bye, see you again\a");
}

