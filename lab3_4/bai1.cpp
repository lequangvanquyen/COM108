#include<stdio.h>
int main(int argc, char const *argv[]){
    
    int a;
    printf("Nhap a: "); scanf("%d",&a);
    if (a%2 == 0){
        printf("%d la so chan",a);
        return 0;
    }
        printf("%d la so le",a);
        
    return 0;
}
