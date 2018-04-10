/*
* @Author: fxb1rd
* @Date:   2017-07-27 21:37:04
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-27 21:56:01
*/

#include <stdio.h>

int main() {

    int x;
    int n = 0;

    scanf("%d",&x);

    do {
        n++;
        x /= 10;
        printf("x=%d,n=%d\n",x,n );
    }
    while(x > 0);

   /* n++;
    x /= 10;
    while(x > 0) {
        n++;
        x /= 10;
    };*/

    printf("Î»ÊýÊÇ%d",n);

    return 0;
}
