#include <stdio.h>

void chanLe()	{
	int n,m;
	do{
		printf("Moi ban nhap so nguyen duong n: ");
		scanf("%d",&n);
		printf("Moi ban nhap so nguyen duong m: ");
		scanf("%d",&m);
	}while(n<0 || m<0);
	
	if	(n % 2 == 0)	{
		printf("%d la so chan\n",n);
	}else{
		printf("%d la so le\n",n);
	}
	
	if (m % 2 == 0)	{
		printf("%d la so chan\n",m);
	}else{
		printf("%d la so le\n",m);
	}
}

int soDuong()	{
	int n;
	printf("Moi nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	int count = 0;
	
	for (int i = 0; i < n; i++)	{
		printf("\nMoi nhap a[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for (int i = 0; i < n; i++)	{
		if(a[i] > 0){
			printf("\nGia tri duong dau tien cua mang la: %d",a[i]);
			count = 1;
			break;
		}
	}
	
	if(count == 0)	{
		printf("Mang ko co gia tri duong nao");
	}
}


int MAX()	{
	int n;
	printf("\nMoi nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	
	for (int i = 0; i < n; i++)	{
		printf("\nMoi nhap a[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	int max = a[0];
	for (int i = 0; i < n; i++)	{
		if (a[i] > max)	{
			max = a[i];
		}
	}
	
	printf("\nPhan tu lon nhat trong mang la: %d", max);
}

int main()	{
	int x;
	printf("Chao mung ban den voi chuong trinh\n");

	do{
		printf("\n\t-===============Menu====================-");
		printf("\n\t|1.Kiem tra so chan le                  |");
		printf("\n\t|2.Tim phan tu duong dau tien cua mang  |");
		printf("\n\t|3.Tim phan tu lon nhat cua mang        |");
		printf("\n\t-=======================================-");
		printf("\nMoi ban chon chuc nang: ");
		scanf("%d",&x);
	}while(x > 3);
	
	switch (x)	{
	case 1:
		chanLe();
		break;
	case 2:
		soDuong();
		break;
	case 3:
		MAX();
		break;
	}
}
