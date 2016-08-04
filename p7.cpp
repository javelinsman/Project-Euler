#include "euler_lib.h"

int main(){
    int cnt = 0, prime;
    for(int num=2;cnt<=10000;num++){
        if(!is_prime(num)) continue;
        prime = num;
        cnt ++;
    }
    printf("%d\n", prime);
    return 0;
}
