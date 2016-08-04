#include "euler_lib.h"

int main(){
    ll num = 600851475143LL;
    for(ll prime = 2; num > 1; prime++){
        if(!is_prime(prime)) continue;
        if(num % prime == 0){
            printf("%lld\n", prime);
            num /= prime;
        }
    }
    return 0;
}
