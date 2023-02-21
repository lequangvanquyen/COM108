#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[5] = {2, 5, 3, 6, 3};
    int b[5];
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t ", a[j]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i] + 3;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t ", b[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                printf("vi tri cac phan tu co gia tri bang nhau la: (%d %d)", i, j);
            }
        }
    }

    return 0;
}
