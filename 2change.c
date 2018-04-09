#include <stdio.h>

int main()
{
	//const int AMOUNT = 100;
	int amount = 0;
	int price = 0;
	printf("½ğ¶î:");
	scanf("%d",&price);
	printf("ÊÕÈ¡:");
	scanf("%d",&amount);
	int change = amount - price;
	printf("ÕÒÄú%d.\n",change);
	return 0;
} 
