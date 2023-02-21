/* BÀI 2:
    Cho một mảng 2 chiều 3 x 3
    [3, 9, 11]
    [2, 6, 15]
    [4, 7, 24]
    In ra mảng trên, sau đó cho phép người dùng nhập vào 1 số bất kì từ 1-100.
    Nếu số đó có trong mảng thì in ra vị trí của số đó.
    Nếu số đó ko có trong mảng thì in ra thông báo cho người dùng.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    // khai bao mang 2 chieu
    int array[3][3] = {{3, 9, 11}, {2, 6, 15}, {4, 7, 24}};

    // in mang
    printf("Mang 2 chieu la:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // nhap vao 1 so
    int number;
    printf("Nhap so tu 1 den 100: ");
    scanf("%d", &number);

    // Tim vi tri
    int found = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == number)
            {
                printf("So %d nam o vi tri (%d, %d) trong mang 2 chieu.\n", number, i, j);
                found = 1;
            }
        }
    }
    if (!found)
    {
        printf("So %d khong co trong mang 2 chieu.\n", number);
    }

    return 0;
}
