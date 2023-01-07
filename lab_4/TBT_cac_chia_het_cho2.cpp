#include <stdio.h>
int main(){
	int min,max;
	int sum,avg,count;
	printf("Nhap min: ");scanf("%d",&min);
	printf("Nhap max: ");scanf("%d",&max);
	int i=min;
	sum=count=0; 
	while(i<=max){
		if(i%2==0){
			// printf("%d ",i);
			sum+=i; //sum=sum+i; 
			count++;
		}
		i++;
	}
	printf("Trung Binh cong cac so chia het cho hai la: %d",avg=sum/count); 
	
return 0;
}
