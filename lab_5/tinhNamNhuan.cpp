#include<stdio.h>
int checkYear(int year){
    int flag;
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
        flag = 1;
    }
    return flag;
}
int main(int argc, char const *argv[]){
    int year;
    printf("Nhap vao nam: ");scanf("%d",&year);
    if (checkYear(year)==1)
    {
        printf("%d la nam nhuan",year);
    }else{
        printf("%d khong phai la nam nhuan",year);
    }
    return 0;
}
