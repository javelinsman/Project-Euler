#include "euler_lib.h"

int main(){
    map<int, int> m;
    for(int num=2;num<=20;num++){
        int temp = num;
        for(int i=2;temp>1;i++){
            if(!is_prime(i)) continue;
            if(temp % i == 0){
                int cnt = 0;
                while(temp % i == 0){
                    temp /= i;
                    cnt ++;
                }
                if(m.count(i) > 0){
                    m[i] = max(cnt, m[i]);
                }
                else m[i] = cnt;
            }
        }
    }
    ll ans = 1;
    for(auto& kv : m){
        int prime = kv.first, cnt = kv.second;
        for(int i=0;i<cnt;i++) ans *= prime;
    }
    printf("%lld\n", ans);
    return 0;
}
