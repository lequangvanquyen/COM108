#include <stdio.h>
#include <math.h>
int main(){
	printf("\t++--------------MENU---------------++\n");
	printf("\t| 1. Xep hoc luc                    |\n");
	printf("\t| 2. Giai PT bac nhat               |\n");
	printf("\t| 3. Giai PT bac hai                |\n");
	printf("\t| 4. Tinh tien dien                 |\n");
	printf("\t| 5. thoat                          |\n");
	printf("\t++---------------------------------++\n");
	int chon;
	printf("\nChon mot chuc nang: "); scanf("%d",&chon);
	switch(chon){
		case 1:
			//BEGIN xet hoc luc
			printf("Ban da chon chuc nang xet hoc luc\n");
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
			}//END xet hoc luc
			break;
		case 2:
			//BEGIN PT bac nhat
			printf("Ban da chon chuc nang giai PT bac nhat\n");
			float a,b;
			printf("Nhap a: "); scanf("%f",&a);
			printf("Nhap b: "); scanf("%f",&b);
			if(a==0){
				if(b==0){
					printf("phuong trinh vo so nghiem");
				}else{
					printf("phuong trinh vo nghiem");
				}
			}else{
				printf("phuong trinh co nghiem: %f",-b/a);
			}//END PT bac nhat
			break;
		case 3:
			//BEGIN PT bac hai
			printf("Ban da chon chuc nang giai PT bac hai\n");
			float c,delta,x1,x2;
			//printf("Nhap a: "); scanf("%f",&a);
			//printf("Nhap b: "); scanf("%f",&b);
			//printf("Nhap c: "); scanf("%f",&c);
			printf("Nhap a,b,c: "); scanf("%f%f%f",&a,&b,&c);
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
			}//END PT bac hai
			break;
		case 4:
			//BEGIN tinh tien dien
			printf("Ban da chon chuc nang tinh tien dien\n");
			int kWh;
			int TienDien;
			printf("Nhap vao so dien tieu thu hang thang: "); scanf("%d", &kWh);
			if(kWh<=50){
				TienDien=kWh*1678;
			}else if(kWh<=100){
				TienDien=50*1678 + (kWh-50)*1734;
			}else if(kWh<=200){
				TienDien=50*1678 + 50*1734 + (kWh-100)*2014;
			}else if(kWh<=300){
				TienDien=50*1678 + 50*1734 + 100*2014 + (kWh-200)*2536;
			}else if(kWh<=400){
				TienDien=50*1678 + 50*17342 + 100*2014 + 100*2536 + (kWh-300)*2834;
			}else{
				TienDien=50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kWh-400)*2927;
			}
			printf("So tien can phai dong: %d",TienDien);
			//END tinh tien dien
			break;
		case 5:
			printf("Good bye, see you again");
			break;
		default:
			printf("Nhap sai !...Yeu cau nhap lai");
			break;
	}
return 0;
}
