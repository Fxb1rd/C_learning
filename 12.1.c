/*
* @Author: fxb1rd
* @Date:   2017-08-06 11:41:23
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-08-06 11:53:57
*/

#include <stdio.h>

int main() {

    int a;
    scanf("%d",&a);
    int i,j,k;
    int cnt = 0;
    i = a;
    while ( i<=a+3) {
        j = a;
        while ( j<=a+3) {
            k = a;
            while ( k<=a+3) {
                if (i!=j && i!=k && j!=k) {
                    cnt++;
                    printf("%d%d%d",i,j,k);
                    if (cnt == 6) {
                        printf("\n");
                        cnt = 0;
                    }
                    else {
                        printf(" ");
                    };
                };
                k++;
            };
            j++;
        };
        i++;
    };
    return 0;
}