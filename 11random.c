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

    printf("������һ�����֣�0-100��\n" );
    do {
        scanf("%d",&A);
        count ++;
        if(A > a) {
            printf("���ˣ����������룡\n");
        }
        else if(A < a) {
            printf("С�ˣ����������룡\n");
        };
    }
    while(A != a);

    printf("�¶��ˣ��������%d�������%d�Ρ�",a,count);

    return 0;
}