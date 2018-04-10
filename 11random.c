/*
* @Author: fxb1rd
* @Date:   2017-07-27 22:08:54
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-27 22:19:39
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int a = rand()%100 + 1;

    int A;
    int count = 0;

    printf("请输入一个数字（0-100）\n" );
    do {
        scanf("%d",&A);
        count ++;
        if(A > a) {
            printf("大了，请重新输入！\n");
        }
        else if(A < a) {
            printf("小了，请重新输入！\n");
        };
    }
    while(A != a);

    printf("猜对了！随机数是%d。你猜了%d次。",a,count);

    return 0;
}