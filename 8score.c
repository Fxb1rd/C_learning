/*
* @Author: fxb1rd
* @Date:   2017-07-25 17:15:21
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-25 17:18:48
*/

#include <stdio.h>

int main() {
    const int pass = 60;
    int score;

    printf("请输入成绩");
    scanf("%d",&score);

    if (score >= pass)
        printf("成绩合格！");
    else
        printf("成绩不合格！");

    return 0;
}