#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,s; // khai bao

    const float PI=3.14; //khai bao hang
    printf("Nhap a: "); scanf("%d", &a); //nhap a tu ban phim

    
    printf("\nDien tich hinh tron la: %.2f",(float)a*PI); //tinh toan va xuat ket qua

    
    s=a*a;  // gán 

    //tinh toan va xuat ket qua
    printf("\nDien tich hinh vuong la: %d",s);
    printf("\nDien tich tam guac can 1/4 hinh vuong la: %.1f",  /*ép kiểu */(float)s/4);

    return 0;
}
