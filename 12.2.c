/*
* @Author: fxb1rd
* @Date:   2017-08-06 11:56:08
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-08-06 12:07:16
*/

//水仙花数
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int first = 1;
    int i = 1;
    while ( i<n ) {
        first *= 10;
        i ++;
    };
    //遍历
    i = first;
    while (i <first*10) {
        int t = i;
        int sum = 0;
        do {
            int d = t%10;
            t /=10;
            int p = d;
            int j = 1;
            while ( j<n ) {
                p *=d;
                j++;
            };
            sum += p;
        } while ( t > 0);
        if (sum == i) {
            printf("%d\n",i);
        }
        i ++;
    };
    return 0;
}
