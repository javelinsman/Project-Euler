#include "euler_lib.h"

int main(){
    int ra, rb, rc;
    for(int a=1;a+(a+1)+(a+2)<=1000;a++){
        for(int b=a+1;a+b+(b+1)<=1000;b++){
            int c = 1000 - a - b;
            if(a*a+b*b==c*c){
                ra = a; rb = b; rc = c;
            }
        }
    }
    printf("%d\n", ra * rb * rc);
    return 0;
}
