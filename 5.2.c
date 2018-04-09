/*
* @Author: fxb1rd
* @Date:   2017-07-24 22:43:45
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-24 22:57:12
*/

#include <stdio.h>

int main() {

    int Stime;
    int Atime;

    printf("开始时间\n");
    scanf("%d",&Stime);

    printf("增加的分钟数\n");
    scanf("%d",&Atime);

    int hour = Stime / 100;
    int minute = Stime % 100;

    int Etime = (hour*60 + minute + Atime);

    printf("结束时间%d\n", (Etime / 60*100 + Etime % 60));
    return 0;
}