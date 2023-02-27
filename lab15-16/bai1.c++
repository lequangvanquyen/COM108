// LAB 1516
/*  BAI 1:
    Tạo struct để chứa dữ liệu sinh viên bao gồm thông tin sau:
        - Mã SV, Họ, Tên, Ngày tháng năm sinh, Quê Quán (tỉnh/tp), Giới tính, Mã lớp
            - Dob: ngày, tháng, năm
        - Lưu thông tin 2 sinh viên (họ tên tự nghĩ)
        - Tạo sinh viên 3 bằng cách copy dữ liệu từ sinh viên 1
        - Sửa lại thông tin sinh viên 3 (họ tên, quê quán ...)
*/
#include <stdio.h>
#include <string.h>

struct dob
{
    int ngay;
    int thang;
    int nam;
};

struct sinhVien
{
    char maSV[50];      // mã sinh viên
    char ho[50];        // họ
    char ten[50];       // tên
    struct dob namsinh; // năm sinh
    char queQuan[50];   // quê quán
    char gioiTinh[50];  // giới tính
    char maLop[50];     // mã lớp
};

int main(int argc, char const *argv[])
{
    sinhVien sv1, sv2, sv3;

    // Tạo thông tinh sinh viên 1
    strcpy(sv1.maSV, "PD07814");
    strcpy(sv1.ho, "Le Quang");
    strcpy(sv1.ten, "Van Quyen");
    sv1.namsinh.ngay = 27;
    sv1.namsinh.thang = 01;
    sv1.namsinh.nam = 2004;
    strcpy(sv1.queQuan, "Quang Binh");
    strcpy(sv1.gioiTinh, "Nam");
    strcpy(sv1.maLop, "WEB18311");
    printf("Sinh Vien 1: \nmaSV: %s \nHo:%s \nTen:%s \nNgaySinh:%d/%d/%d \nQueQuan:%s \nGioiTinh:%s \nLop:%s\n", sv1.maSV, sv1.ho, sv1.ten, sv1.namsinh.ngay, sv1.namsinh.thang, sv1.namsinh.nam, sv1.queQuan, sv1.gioiTinh, sv1.maLop);

    // Tạo thông tinh sinh viên 2
    strcpy(sv2.maSV, "PD09999");
    strcpy(sv2.ho, "Le Quang");
    strcpy(sv2.ten, "Vinh");
    sv2.namsinh.ngay = 25;
    sv2.namsinh.thang = 10;
    sv2.namsinh.nam = 2005;
    strcpy(sv2.queQuan, "Quang Tri");
    strcpy(sv2.gioiTinh, "Nam");
    strcpy(sv2.maLop, "WEB18311");
    printf("\nSinh Vien 2: \nmaSV: %s \nHo:%s \nTen:%s \nNgaySinh:%d/%d/%d \nQueQuan:%s \nGioiTinh:%s \nLop:%s\n", sv2.maSV, sv2.ho, sv2.ten, sv2.namsinh.ngay, sv2.namsinh.thang, sv2.namsinh.nam, sv2.queQuan, sv2.gioiTinh, sv2.maLop);

    // Tạo sinh viên 3 bằng cách copy dữ liệu từ sinh viên 1
    sv3 = sv1;

    // Sửa thông tin của sinh viên 3
    strcpy(sv3.maSV, "PD05614");
    strcpy(sv3.ho, "Tran Van");
    strcpy(sv3.ten, "Duc");
    sv3.namsinh.ngay = 30;
    sv3.namsinh.thang = 01;
    sv3.namsinh.nam = 2006;
    strcpy(sv3.queQuan, "Quang Nam");
    strcpy(sv3.gioiTinh, "Nam");
    strcpy(sv3.maLop, "WEB18311");
    printf("\nSinh Vien 3: \nmaSV: %s \nHo:%s \nTen:%s \nNgaySinh:%d/%d/%d \nQueQuan:%s \nGioiTinh:%s \nLop:%s\n", sv3.maSV, sv3.ho, sv3.ten, sv3.namsinh.ngay, sv3.namsinh.thang, sv3.namsinh.nam, sv3.queQuan, sv3.gioiTinh, sv3.maLop);

    return 0;
}
