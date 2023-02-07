#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b; // khai bao
	printf("Nhap a: "); scanf("%d",&a);  // nhap a va b
	printf("Nhap b: "); scanf("%d",&b); 


	//in ra man hinh va tinh toan
	printf("\ntong hai so la: %d",a+b);  
	printf("\nhieu hai so la: %d",a-b);
	printf("\ntich hai so la: %d",a*b);
	printf("\nthuong hai so la: %.2f",(float)a/b);

 	return 0;
}

