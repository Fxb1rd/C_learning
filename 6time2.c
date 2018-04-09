/*
* @Author: fxb1rd
* @Date:   2017-07-25 16:34:57
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-25 16:47:03
*/

#include <stdio.h>

int main() {
    int hour1,minute1;
    int hour2,minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int ih = hour2 - hour1;
    int im = minute2 - minute1;

    if (im < 0) {
        im += 60;
        ih--;
    };

    printf("时间差是%d小时%d分",ih,im);

    return 0;
}