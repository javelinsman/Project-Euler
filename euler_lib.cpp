#include "euler_lib.h"

bool is_prime(int num){
    if(num < 2) return false;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

bool is_prime(ll num){
    if(num < 2) return false;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

vi make_prime_list(int max_num){
    vb sieve = make_prime_sieve(max_num);
    vi prime_list;
    for(int i=2;i<=max_num;i++){
        if(sieve[i]) prime_list.push_back(i);
    }
    return prime_list;
}

vb make_prime_sieve(int max_num){
    vb sieve(max_num + 1, true);
    sieve[0] = sieve[1] = false;
    for(int i=2;i*i<=max_num;i++){
        if(!sieve[i]) continue;
        for(int j=i*i;j<=max_num;j+=i){
            sieve[j] = false;
        }
    }
    return sieve;
}

int count_digit_length(int num){
    int cnt = 0;
    while(num > 0){
        num /= 10;
        cnt ++;
    }
    return cnt;
}

vi int_to_vector(int num){
    int len = count_digit_length(num);
    vi ret(len);
    int i = len;
    while(num > 0){
        ret[--i] = num % 10;
        num /= 10;
    }
    return ret;
}

int vector_to_int(vi& vec){
    int ret = 0;
    for(int i=0;i<vec.size();i++){
        ret *= 10;
        ret += vec[i];
    }
    return ret;
}
