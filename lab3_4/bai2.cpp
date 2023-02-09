#include <stdio.h>
int main(int argc, char const *argv[])
{
    //khai bao
    float toan, li, hoa, tb;
    char name[100];

    //nhap tu ban phim
    printf("Nhap ten cua ban: ");
    scanf("%s", &name);
    printf("Nhap toan: ");
    scanf("%f", &toan);
    printf("Nhap li: ");
    scanf("%f", &li);
    printf("Nhap hoa: ");
    scanf("%f", &hoa);

    //tinh toan va xuat ket qua
    tb = (toan + li + hoa) / 3;
    if (tb >= 9)
    {
        printf("%s Co diem trung binh la %.2f va xep loai A", name, tb);
    }
    else if (tb >= 7)
    {
        printf("%s Co diem trung binh la %.2f va Xep loai B", name, tb);
    }
    else if (tb >= 5)
    {
        printf("%s Co diem trung binh la %.2f va Xep loai C", name, tb);
    }
    else
    {
        printf("%s Co diem trung binh la %.2f va Xep loai D", name, tb);
    }

    return 0;
}
