/*
* @Author: fxb1rd
* @Date:   2017-07-25 17:22:43
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-25 17:37:15
*/

#include <stdio.h>

int main() {
    int a,b,c;
    int max;

    printf("输入三个整数");
    scanf("%d %d %d",&a,&b,&c);

    if(a > b) {
        if(a > c) {
            max = a;
        }
        else {
            max = c;
        };
    }
    else {
        if(b > c) {
            max = b;
        }
        else {
            max = c;
        };
    };
    //单一出口
    printf("%d",max);

    return 0;
}