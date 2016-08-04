#include <cstdio>
const int threshold = 4000000;
int main(){
    int a = 0, b = 1, c = 1;
    long long sum = 0;
    while(c <= threshold){
        if(c % 2 == 0) sum += c;
        a = b; b = c; c = a + b;
    }
    printf("%lld\n", sum);
    return 0;
}
