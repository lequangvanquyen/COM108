#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void kiemTraSoNguyen();
void uocChungBoiChung();
int karaoke();
void tinhTienDien();
void doiTien();

int main()
{
    int chon;
    do
    {
        system("cls");
        printf("\t++--------------MENU---------------------++\n");
        printf("\t| 1. kiem tra so nguyen                   |\n");
        printf("\t| 2. tim uoc chung va boi chung cua 2 so  |\n");
        printf("\t| 3. tinh tien dien cho quan karoke       |\n");
        printf("\t| 4. Tinh tien dien                       |\n");
        printf("\t| 5. chuc nang doi tien                   |\n");
        printf("\t| 0. thoat                               |\n");
        printf("\t++---------------------------------------++\n");
        printf("\nChon mot chuc nang: ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("Ban da chon chuc nang kiem tra so nguyen\n");
            kiemTraSoNguyen();
            break;
        case 2:
            printf("Ban da chon chuc nang tim uoc chung va boi chung\n");
            uocChungBoiChung();
            break;
        case 3:
            printf("Ban da chon chuc nang tinh tien cho karaoke\n");
            karaoke();
            break;
        case 4:
            printf("Ban da chon chuc nang tinh tien dien\n");
            tinhTienDien();
            break;
        case 5:
            printf("Ban da chon chuc nang doi tien\n");
            doiTien();
            break;
        case 0:
            printf("Good bye, see you again");
            break;
        default:
            printf("Nhap sai !...Yeu cau nhap lai");
            break;
        }
        if (chon != 5)
        {
            system("pause");
        }
    } while (chon != 5);
    return 0;
}

void kiemTraSoNguyen()
{
    int x;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("So %d la mot so nguyen.\n", x);
    }
    else
    {
        printf("So %d khong phai la mot so nguyen.\n", x);
    }
}

void uocChungBoiChung()
{
    int x, y, a, b, r, u, bscnn;

    // Nh???p 2 s??? nguy??n x v?? y t??? b??n ph??m
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap so nguyen y: ");
    scanf("%d", &y);

    // T??m ?????c s??? chung l???n nh???t c???a x v?? y
    a = (x > y) ? x : y;
    b = (x < y) ? x : y;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    u = a;

    // T??m b???i s??? chung nh??? nh???t c???a x v?? y
    bscnn = (x * y) / u;

    // Hi???n th??? k???t qu???
    printf("Uoc so chung lon nhat cua %d va %d la %d\n", x, y, u);
    printf("Boi so chung nho nhat cua %d va %d la %d\n", x, y, bscnn);
}

int karaoke()
{
    int start_hour, end_hour;
    float price = 0.0;

    // Nh???p gi??? b???t ?????u v?? gi??? k???t th??c
    printf("Nhap gio bat dau: ");
    scanf("%d", &start_hour);

    printf("Nhap gio ket thuc: ");
    scanf("%d", &end_hour);

    // T??nh gi?? ti???n
    if (start_hour < 12 || end_hour > 23 || start_hour >= end_hour)
    {
        printf("Thoi gian khong hop le.\n");
        return 0;
    }

    int hours = end_hour - start_hour;
    if (hours <= 3)
    {
        price = hours * 50000.0;
    }
    else
    {
        price = 3 * 50000.0 + (hours - 3) * 35000.0;
    }

    if (start_hour >= 16 && start_hour < 19)
    {
        price = price * 0.9;
    }
    else if (hours > 3)
    {
        price = price * 0.7;
    }

    // In ra gi?? ti???n c???n thanh to??n
    printf("Gia tien can thanh toan: %.0f\n", price);
}

void tinhTienDien()
{
    const int bac1 = 1678;
    const int bac2 = 1734;
    const int bac3 = 2014;
    const int bac4 = 2536;
    const int bac5 = 2834;
    const int bac6 = 2927;

    int kWh;
    int TienDien = 0;
    printf("Nhap vao so dien tieu thu hang thang: ");
    scanf("%d", &kWh);
    if (kWh <= 50)
    {
        TienDien = kWh * bac1;
    }
    else if (kWh <= 100)
    {
        TienDien = 50 * bac1 + (kWh - 50) * bac2;
    }
    else if (kWh <= 200)
    {
        TienDien = 50 * bac1 + 50 * bac2 + (kWh - 100) * bac3;
    }
    else if (kWh <= 300)
    {
        TienDien = 50 * bac1 + 50 * bac2 + 100 * bac3 + (kWh - 200) * bac4;
    }
    else if (kWh <= 400)
    {
        TienDien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + (kWh - 300) * bac5;
    }
    else
    {
        TienDien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + 100 * bac5 + (kWh - 400) * bac6;
    }
    printf("So tien can phai dong: %d\n", TienDien);
}

void doiTien()
{
    int money, num;

    // Nh???p s??? ti???n c???n ?????i
    printf("Nhap so tien can doi: ");
    scanf("%d", &money);

    // ?????i m???nh gi?? ti???n
    num = money / 500;
    if (num > 0)
    {
        printf("%d to 500\n", num);
        money = money % 500;
    }

    num = money / 200;
    if (num > 0)
    {
        printf("%d to 200\n", num);
        money = money % 200;
    }

    num = money / 100;
    if (num > 0)
    {
        printf("%d to 100\n", num);
        money = money % 100;
    }

    num = money / 50;
    if (num > 0)
    {
        printf("%d to 50\n", num);
        money = money % 50;
    }

    num = money / 20;
    if (num > 0)
    {
        printf("%d to 20\n", num);
        money = money % 20;
    }

    num = money / 10;
    if (num > 0)
    {
        printf("%d to 10\n", num);
        money = money % 10;
    }

    num = money / 5;
    if (num > 0)
    {
        printf("%d to 5\n", num);
        money = money % 5;
    }

    num = money / 2;
    if (num > 0)
    {
        printf("%d to 2\n", num);
        money = money % 2;
    }

    num = money / 1;
    if (num > 0)
    {
        printf("%d to 1\n", num);
        money = money % 1;
    }
}
