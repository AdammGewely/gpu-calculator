#include <stdio.h>
#include <time.h>

#ifndef timeelapsed

    unsigned long timeelapsed;

#endif

#ifndef start

    long start;

#endif

#ifndef end

    long end;

#endif

#ifndef starttimer

void starttimer(){
    start = clock();
}

#endif

#ifndef endtimer

void endtimer(){
    end = clock();
    timeelapsed = start - end;
}

#endif

#ifndef gettime

long gettime(){
    return timeelapsed;
}

#endif
