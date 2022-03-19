#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>


//1. Nadji prijestupnu godinu

int main(void)
{
    //srand(time(0));
    int godina = 1500;//(rand()%9000);

    
    if (godina % 400 == 0 && godina % 100 == 0)
    {
        printf("godina %d je prijestupna!", godina);
    }
   
    else if (godina % 4 == 0) {
        printf("godina %d je prijestupna!", godina);
    }
    else {
        printf("godina %d nije prijestupna", godina);
    }
    return 0;
}

// 2.