
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // khai bao
    float toan, li, hoa;
    int tb;
    char name[100];

    // nhap tu ban phim
    printf("Nhap ten cua ban: ");
    scanf("%s", &name);
    printf("Nhap toan: ");
    scanf("%f", &toan);
    if (toan < 0 || toan > 10)
    {
        printf("Nhap sai !... Nhap lai");
        return 0;
    }
    else
    {
        printf("Nhap li: ");
        scanf("%f", &li);
        if (li < 0 || li > 10)
        {
            printf("Nhap sai !... Nhap lai");
            return 0;
        }
        else
        {
            printf("Nhap hoa: ");
            scanf("%f", &hoa);
            if (hoa < 0 || hoa > 10)
            {
                printf("Nhap sai !... Nhap lai");
                return 0;
            }
        }
    }

    tb = (int)(toan + li + hoa) / 3;
    printf("diem trung binh cua ban la: %d\n", tb);
    switch (tb)
    {
    case 10:
    case 9:
        printf("Ban xep loai A");
        break;
    case 8:
    case 7:
        printf("Ban xep loai B");
        break;
    case 6:
    case 5:
        printf("Ban xep loai C");
        break;
    default:
        printf("Ban xep loai D");
    }
    return 0;
}
