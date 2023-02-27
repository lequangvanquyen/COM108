/*  BAI 2:
    Tạo danh sách 5 sinh viên với thông tin dữ liệu như ở BAI 1.
    Thông tin sinh viên phải được nhập vào từ bàn phím.
    Sau đó in ra danh sách 5 sinh viên.
*/
#include <stdio.h>
#include <stdlib.h>

struct SinhVien
{
    char maSo[50];
    char hoTen[50];
    char queQuan[50];
    char ngaySinh[50];
    char gioiTinh[50];
    char maLop[50];
};

int main()
{
    struct SinhVien sv[5];

    // Nhập thông tin cho các sinh viên
    for (int i = 0; i < 5; i++)
    {
        printf("Nhap thong tin cho sinh vien %d:\n", i + 1);
        printf("Ma so sinh vien: ");
        scanf("%d", &sv[i].maSo);

        printf("Ho ten: ");
        scanf("%s\n", sv[i].hoTen);

        printf("Que quan: ");
        scanf("\n%s\n", sv[i].queQuan);

        printf("Ngay sinh (dd/mm/yyyy): ");
        scanf("%s\n", sv[i].ngaySinh);

        printf("Gioi tinh: ");
        scanf("\n%s\n", sv[i].gioiTinh);

        printf("Ma lop: ");
        scanf("%s\n", sv[i].maLop);
    }

    // In thông tin của các sinh viên
    printf("\nDanh sach sinh vien:\n");
    printf("%-10s%-20s%-20s%-20s%-10s%-10s\n", "Ma SV", "Ho ten", "Que quan", "Ngay sinh", "Gioi tinh", "Ma lop");
    for (int i = 0; i < 5; i++)
    {
        printf("%-10d%-20s%-20s%-20s%-10s%-10s\n", sv[i].maSo, sv[i].hoTen, sv[i].queQuan, sv[i].ngaySinh, sv[i].gioiTinh, sv[i].maLop);
    }

    return 0;
}
