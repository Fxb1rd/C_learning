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

    printf("������ɼ�");
    scanf("%d",&score);

    if (score >= pass)
        printf("�ɼ��ϸ�");
    else
        printf("�ɼ����ϸ�");

    return 0;
}