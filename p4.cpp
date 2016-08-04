#include "euler_lib.h"

bool is_palindrome(vi& vec){
    int len = vec.size();
    for(int i=0;i<len/2;i++){
        if(vec[i] != vec[len-1-i]) return false;
    }
    return true;
}

int main(){
    int max_val = -1;
    for(int a=100;a<=999;a++){
        for(int b=100;b<=999;b++){
            vi vec = int_to_vector(a*b);
            if(is_palindrome(vec)){
                max_val = max(max_val, a*b);
            }
        }
    }
    printf("%d\n", max_val);
}
