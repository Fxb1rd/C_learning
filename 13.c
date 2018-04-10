/*
* @Author: fxb1rd
* @Date:   2017-08-12 18:27:42
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-08-12 19:26:49
*/

#include <stdio.h>

int main() {
    printf("请输入月份：");
    int month;
    char *ENG[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};//用双引号！

    scanf("%d",&month);
    printf("%s",ENG[month-1]);
    return 0;
}