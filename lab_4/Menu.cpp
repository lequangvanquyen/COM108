#include <stdio.h>
#include<stdlib.h> 
void chucnang1();	//function declaration
void chucnang2();	//function declaration
void chucnang3();	//function declaration
void chucnang4();	//function declaration	
int main(){
	int chon;
	do{
		system("cls");
		printf("\t++--------------MENU---------------++\n");
		printf("\t|Chuc nang 1: Tinh trung binh tong  |\n");
		printf("\t|Chuc nang 2: Tim so nguyen to      |\n");
		printf("\t|Chuc nang 3: Tim so chinh phuong   |\n");
		printf("\t|Chuc nang 4: Thoat                 |\n");
		printf("\t++---------------------------------++\n");
		printf("\tXin moi chon chuc nang (1,2,3,4): ");scanf("%d",&chon);
		switch(chon){
			case 1:chucnang1();	break;	//function call
			case 2:chucnang2();	break;	//function call	
			case 3:chucnang3();	break;	//function call
			case 4:chucnang4(); break;	//function call
			default:
				printf("Chon sai! ... Yeu cau chon lai\n");
				break;
		}if(chon!=4){
			system("pause");
		}
	}while(chon!=4);
return 0;
}//end main
//function definition
void chucnang1(){
	printf("\nBan da chon chuc nang tinh trung binh tong\n");
	int min,max;
	int sum,avg,count;
	printf("Nhap min: ");scanf("%d",&min);
	printf("Nhap max: ");scanf("%d",&max);
	int i=min;
	sum=count=0; 
	while(i<=max){
		if(i%2==0){
			// printf("%d ",i);
			sum+=i; //sum=sum+i; 
			count++;
		}
		i++;
	}
	printf("Trung Binh cong cac so chia het cho hai la: %d\n",avg=sum/count); 
}
void chucnang2(){
	printf("\nBan da chon chuc nang tim so nguyen to\n");
	int x;
	printf("Nhap vao mot so nguyen duong: ");scanf("%d",&x);
	if(x<=1){
		printf("nhap sai! ... Vui long nhap lai\n");
	}else{
		int count=0;
		for(int i=2;i<x;i++){
		if(x%i==0){
			count++;
			}
		}
		if(count==0){
			printf("La so nguyen to\n");
		}else{
			printf("Khong phai la so nguyen to\n");
		}
	}	
}
void chucnang3(){
	printf("\nBan da chon chuc nang tim so chinh phuong\n");
	int x;
	printf("Nhap vao mot so: ");scanf("%d",&x);
	int count=0;
	for(int i=1;i<x;i++){
		if(i*i==x){
		count++;
		printf("%d La so chinh phuong\n");
		break;
		}
	}
	if(count==0){
		printf("Khong phai la so chinh phuong\n");
	}
}
void chucnang4(){
	printf("Good bye, see you again\a");
}