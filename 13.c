/*
* @Author: fxb1rd
* @Date:   2017-08-12 18:27:42
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-08-12 19:26:49
*/

#include <stdio.h>

int main() {
    printf("�������·ݣ�");
    int month;
    char *ENG[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};//��˫���ţ�

    scanf("%d",&month);
    printf("%s",ENG[month-1]);
    return 0;
}