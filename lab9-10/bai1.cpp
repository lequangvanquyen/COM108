#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void conghaiso(); // function declaration
void ptbac2();    // function declaration
void thoat();     // function declaration
int main(int argc, char const *argv[])
{
    int chon;
    do
    {
        system("cls");
        printf("\t++-------------MENU------------++\n");
        printf("\t| 1. Cong hai so nguyen         |\n");
        printf("\t| 2. Giai phuong trinh bac hai  |\n");
        printf("\t| 0. Thoat                      |\n");
        printf("\t++-----------------------------++\n");
        printf("\tXin moi chon chuc nang (1,2): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("ban da chon chuc nang cong hai so nguyen\n");
            conghaiso(); // function call
            break;
        case 2:
            printf("ban da chon chuc nang giai phuong trinh bac hai\n");
            ptbac2(); // function call
            break;
        case 0:
            thoat(); // function call
            break;
        default:
            printf("Chon sai! ... Yeu cau chon lai\n");
            break;
        }
        if (chon != 2)
        {
            system("pause");
        }
    } while (chon != 2);
    // end main
    return 0;
}

// function definition

void conghaiso()
{
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Tong hai so nguyen la: %d\n", a + b);
}

// pt bac 2
void ptbac2()
{
    float a, b, c, delta, x1, x2;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh vo so nghiem\n");
            }
            else
            {
                printf("Phuong trinh vo nghiem\n");
            }
        }
        else
        {
            printf("Phuong trinh co nghiem x = %f\n", -c / b);
        }
    }
    else
    {
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem\n");
        }
        else if (delta == 0)
        {
            printf("Phuong trinh co nghiem kep x1=x2 = %f\n", -b / (2 * a));
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem rieng biet:\nx1 = %f \nx2 = %f\n", x1, x2);
        }
    }
}

void thoat()
{
    printf("\nGood bye, see you again\n");
}