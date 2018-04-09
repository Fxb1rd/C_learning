/*
* @Author: fxb1rd
* @Date:   2017-07-24 22:27:47
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-07-24 22:33:28
*/

#include <stdio.h>

int main() {
    int cm = 0;
    printf("输入厘米数");
    scanf("%d",&cm);

    int foot = cm / 30.48;
    int inch = ((cm / 30.48) - foot)*12;

    printf("转换后；%d英尺%d英寸\n",foot,inch);
    return 0;
}
