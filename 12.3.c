/*
* @Author: fxb1rd
* @Date:   2017-08-08 17:29:15
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-08-08 17:38:16
*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int i,j;
    i = 1;
    while ( i<=n) {
        j = 1;
        while ( j<=i) {
            printf("%d*%d=%d",j,i,i*j);
            if (i*j<10) {
                printf("   ");
            }
            else {
                printf("  ");
            };
            j++;
        };
        printf("\n");
        i ++;
    }
    return 0;
}