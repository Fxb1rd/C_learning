/*
* @Author: fxb1rd
* @Date:   2017-07-24 22:27:47
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-24 22:33:28
*/

#include <stdio.h>

int main() {
    int cm = 0;
    printf("����������");
    scanf("%d",&cm);

    int foot = cm / 30.48;
    int inch = ((cm / 30.48) - foot)*12;

    printf("ת����%dӢ��%dӢ��\n",foot,inch);
    return 0;
}
