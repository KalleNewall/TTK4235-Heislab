#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "timer.h"



time_t start_tiden(){
    return time(NULL);
}

int delay (time_t startTid){
    time_t aktivTimer = time(NULL);

    // time.h er cursed og dette var den beste løsningen jeg klekka ut. Innebærer at vi kaller på funksjonen flere ganger.
    if(aktivTimer - startTid >= 3){
        return 1;
    } else{
        return 0;
    }
    
    //Her kan vi implementere en returverdi som en flaggverdi. Denne kan brukes videre som "timerFerdig"
}
// delay funksjonen fungerer nå basert på millisekunder. dvs ms=1000 gir en timer på 1 sekund.
