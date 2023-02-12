
/*  BÀI 1: Viết sử dụng switch case.
    Nhập tên học sinh;
    Nhập điểm trung bình Toán, Lý, Hóa của học sinh đó.
    Tính điểm trung bình 3 môn Toán, Lý, Hóa và
    Kiểm tra xem học sinh đó xếp hạng loại gì.
    Biết:   9-10 điểm => xếp loại A
            7-8 điểm => xếp loại B
            5-6 điểm => xếp loại C
            Dưới 5 điểm => xếp loại D
*/
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
    printf("Nhap li: ");
    scanf("%f", &li);
    printf("Nhap hoa: ");
    scanf("%f", &hoa);

    tb = (int)(toan + li + hoa) / 3;
    printf("diem trung binh cua ban la: %d\n", tb);
    switch (tb)
    {
    case 10:
        printf("Ban xep loai A");
        break;
    case 9:
        printf("Ban xep loai A");
        break;
    case 8:
        printf("Ban xep loai B");
        break;
    case 7:
        printf("Ban xep loai B");
        break;
    case 6:
        printf("Ban xep loai C");
        break;
    case 5:
        printf("Ban xep loai C");
        break;
    default:
        printf("Ban xep loai D");
    }
    return 0;
}
