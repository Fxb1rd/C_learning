/*
* @Author: fxb1rd
* @Date:   2017-07-25 17:05:03
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-25 17:08:23
*/

#include <stdio.h>

int main() {

    int bill = 0;
    int price = 0;

    printf("金额:");
    scanf("%d",&price);
    printf("收取:");
    scanf("%d",&bill);

    int change = bill - price;
    if (change >= 0) {
        printf("找您%d.\n",change);
    }
    else {
        printf("还差%d.\n",-change);
    }

    return 0;
}