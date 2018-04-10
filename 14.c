/*
* @Author: fxb1rd
* @Date:   2017-08-10 21:44:31
* @Last Modified by:   fxb1rd
* @Last Modified time: 2017-08-10 22:20:51
*/

#include <stdio.h>

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);

int main() {
    const int number = 10;
    int prime[number];
    prime[0] = 2;
    int count = 1;
    int i = 3;
    while ( count < number) {
        if (isPrime( i,prime,count)) {
            prime[count++] = i;//先赋值，在计算count++
        };
        i++;
    };
    for (i=0;i<number;i++) {
        printf("%d",prime[i]);
        if ((i+1)%5) {
            printf("\t");
        }
        else {
            printf("\n");
        };
    };

    return 0;
};

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes) {
    int ret = 1;
    int i;
    for ( i=0;i<numberOfKnownPrimes;i++ ) {
        if (x % knownPrimes[i] == 0) {
            ret = 0;
            break;
        };
    } ;
    return ret;
};
