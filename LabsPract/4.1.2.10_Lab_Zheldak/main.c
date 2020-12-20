#include <stdio.h>

int main()
{
    int fiboarr[10];
    for(int i=0;i<10;i++)   //filling fibbonachi
    {
        if(i<2)
            fiboarr[i] = 1;
        else
        {
            fiboarr[i] = fiboarr[i-1] + fiboarr[i-2];
        }
        printf("%d\n", fiboarr[i]); //and printing now since I am lazy
    }

    for(int i=0;i<10;i++)
    {
        if(i%2!=1)      //odd
        printf("%d\n", fiboarr[i]);
    }
        for(int i=0;i<10;i++)
    {
        if(i%2==1)      //even
        printf("%d\n", fiboarr[i]);
    }

    return 0;
}
