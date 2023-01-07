#include<stdio.h>
void swap(int*a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Before nhap a va b: ");scanf("%d%d",&a,&b);
    // function call
    swap(&a,&b);
    printf("After hoan vi: a=%d b=%d",a,b);
    return 0;
}
