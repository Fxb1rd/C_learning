/*
* @Author: fxb1rd
* @Date:   2017-08-06 11:14:22
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-08-06 11:37:13
*/

#include <stdio.h>

int main() {

    int x;
    printf("请输入一个整数");
    scanf("%d",&x);

    int t = x;
    int mask = 1;
    while (t>9) {
        t /= 10;
        mask *= 10;
    };
    printf("mask=%d\n",mask);
    do {
        int d = x / mask;
        printf("%d", d);
        if (mask > 9) {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    } while ( mask > 0 );
    return 0;
}