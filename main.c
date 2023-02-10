#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int secP, lastTick;
    time_t bef, aft;
    bef = time(NULL);
    lastTick = abs(bef-aft);
    while(1){
        aft = time(NULL);
        secP = abs(bef-aft);
        if(abs((secP-lastTick)) >= 1){
            printf("seconds: %i\n", secP);
            lastTick = secP;
        }
    }
    return 0;
}