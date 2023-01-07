#include<stdio.h>
int max(int num1,int num2,int num3);    //function declaration
int main(int argc, char const *argv[]){
    int so1,so2,so3;
    printf("Nhap so thu nhat: ");scanf("%d",&so1);
    printf("Nhap so thu hai: ");scanf("%d",&so2);
    printf("Nhap so thu ba: ");scanf("%d",&so3);
    int m; 
    m = max(so1,so2,so3); //function call
    printf("So lon nhat trong 3 so la: %d",m);
    return 0;
}//end main
//function definition
int max(int num1,int num2,int num3){
    int max;
    max=num1;
    if(m<num2){
        m=num2;
    }if (m<num3){
        m=num3;
    }
    return m;
}
