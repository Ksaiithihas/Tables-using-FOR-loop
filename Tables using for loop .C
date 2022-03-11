
#include <stdio.h>

void main()
{
    int a,Result;
    printf("Please enter number : ");
    scanf("%d",&a);
    for(int i=1;i<11;++i)
    {
    Result = a*i;
    printf("%d * %d = %d\n",a,i,Result);
    }
}
