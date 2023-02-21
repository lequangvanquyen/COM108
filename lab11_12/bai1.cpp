/*  BÀI 1:
    Khai báo mảng one có 5 phần tử {2, 5, 3, 6, 3}
    Tạo một mảng two có 5 phần tử,
        với giá trị của các phần tử thỏa: two[i] = one [i] + 3;
        In ra mảng two;
    Tìm vị trí của các phần tử có giá trị bằng nhau
        trong mảng two;
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{

    int one[5] = {2, 5, 3, 6, 3};
    int two[5];
    for (int i = 0; i < 5; i++)
    {
        two[i] = one[i] + 3;
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t ", one[j]);
    }
    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t ", two[j]);
    }

    // tim vi tri
    int haha[10][2];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (two[i] == two[j])
            {
                haha[count][0] = i;
                haha[count][1] = j;
                count++;
            }
        }
    }
    if (count > 0)
    {
        printf("\nVi tri cac phan tu co gia tri bang nhau trong mang two: ");
        for (int i = 0; i < count; i++)
        {
            printf("(%d, %d) ", haha[i][0], haha[i][1]);
        }
        printf("\n");
    }
    else
    {
        printf("Khong co phan tu nao trong mang two co gia tri bang nhau.\n");
    }
    return 0;
}
