#include "euler_lib.h"

int main(){
    vi prime_list = make_prime_list(2000000 - 1);
    ll sum = 0;
    for(int d : prime_list){
        sum += d;
    }
    printf("%lld\n", sum);
    return 0;
}
