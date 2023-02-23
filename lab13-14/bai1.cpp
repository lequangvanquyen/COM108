/*  BÀI 1:
    Nhập vào chuổi sau str1: Viet Nam Dat Nuoc Toi
    In ra:
        - Độ dài của chuỗi bao gồm khoảng trắng.
        - Độ dài của chuỗi không bao gồm khoảng trắng.
        - Tìm xem trong chuỗi đã nhập có bao nhiêu chữ "t", vị trí các chữ t.
        - Tạo str2 có nội dung copy chuỗi str1.
        - Thay thế các chữ cái đầu của mỗi chữ thành chữ A (tự chọn) (chuỗi str2)
        - In ra chuỗi chữ in hoa của str1
        - In ra chuỗi chữ thường của str2
        - So sánh str1 vs str2
*/
#include <string.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // khai bao
    char str1[100];

    // input
    printf("Nhap mot chuoi: ");
    gets(str1);

    // output
    printf("\nDo dai chuoi la bao gom khoang trang: %d", strlen(str1));

    // Độ dài của chuỗi không bao gồm khoảng trắng
    int len = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != ' ')
        {
            len++;
        }
    }
    printf("\nDo dai cua chuoi khong bao gom khoang trang la: %d", len);

    // Tìm xem trong chuỗi đã nhập có bao nhiêu chữ "t", vị trí các chữ t.
    int count_t = 0;
    int pos_t[100];
    int index = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == 't' || str1[i] == 'T')
        {
            count_t++;
            pos_t[index] = i;
            index++;
        }
    }
    printf("\nSo lan xuat hien cua chu 't': %d\n", count_t);
    if (count_t > 0)
    {
        printf("Vi tri cua cac chu 't': ");
        for (int i = 0; i < count_t; i++)
        {
            printf("%d ", pos_t[i]);
        }
        // printf("\n");
    }

    // Tạo str2 có nội dung copy chuỗi str1.
    char str2[strlen(str1) + 1];
    strcpy(str2, str1);
    printf("\nChuoi str2: %s\n", str2);

    // Thay thế các chữ cái đầu của mỗi chữ thành chữ A (tự chọn) (chuỗi str2)
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (i == 0 || str2[i - 1] == ' ')
        {
            str2[i] = 'A';
        }
    }
    printf("Chuoi str2 sau khi thay the: %s\n", str2);

    // In ra chuỗi chữ in hoa của str1
    printf("Chuoi chu HOA la: %s", strupr(str1));

    // In ra chuỗi chữ thường của str2
    printf("\nChuoi chu thuong la: %s", strlwr(str1));

    // So sánh str1 vs str2
    if (strcmp(str1, str2) == 0)
    {
        printf("Hai chuoi giong nhau.\n");
    }
    else
    {
        printf("\nHai chuoi khac nhau.\n");
    }

    return 0;
}
