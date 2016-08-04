#include <cstdio>
#include <vector>
using namespace std;

typedef vector<int> vi;

int count_length(int num){
    int cnt = 0;
    while(num > 0){
        num /= 10;
        cnt ++;
    }
    return cnt;
}

vi int_to_vector(int num){
    int len = count_length(num);
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

bool is_prime(int num){
    if(num < 2) return false;
    for(int i=2;i*i<=num;i++){
        if(num % i == 0) return false;
    }
    return true;
}

bool check_if_family_number_is(int num, int tgt){
    if(!is_prime(num)) return false;
    vi vec= int_to_vector(num);
    int len = vec.size();
    for(int stars = 1; stars < (1 << len); stars++){
        int cnt = 0; 
        int prev = -1; bool all_stars_same = true;
        for(int i=0;i<len;i++){
            bool is_star = (stars >> i) & 1;
            if(is_star){
                if(prev == -1) prev = vec[i];
                else{
                    if(prev != vec[i]){
                        all_stars_same = false;
                        break;
                    }
                }
            }
        }
        if(!all_stars_same) continue;
        for(int i=0;i<=9;i++){
            vi temp = vec;
            bool det = true;
            for(int j=0;j<len;j++){
                bool is_star = (stars >> j) & 1;
                if(i == 0 && j == 0 && is_star){ det = false; break; }
                if(is_star){
                    temp[j] = i;
                }
            }
            if(det && is_prime(vector_to_int(temp))) cnt++;
        }
        if(cnt == tgt) return true;
    }
    return false;
}

int main(){
    int num = 1;
    while(!check_if_family_number_is(num, 8)) num++;
    printf("%d\n", num);
}
