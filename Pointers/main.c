#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pc,*pd ,c,d;
    c = 9;
    d = 18;
    pc = &c;
    printf("%d\n",*pc);
    pd = &d;
    printf("%d",*pd);
    return 0;
}
