#include <stdio.h>

int main()
{
	//const int AMOUNT = 100;
	int amount = 0;
	int price = 0;
	printf("���:");
	scanf("%d",&price);
	printf("��ȡ:");
	scanf("%d",&amount);
	int change = amount - price;
	printf("����%d.\n",change);
	return 0;
} 
