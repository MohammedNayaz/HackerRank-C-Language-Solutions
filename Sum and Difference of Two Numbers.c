//Sum and Difference of Two Numbers


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum1,dif1;
    float x,y,sum2,dif2;
    
    scanf("%d%d",&a,&b);
    scanf("%f%f",&x,&y);
    sum1=a+b;
    sum2=x+y;
    dif1=a-b;
    dif2=x-y;
    printf("%d %d",sum1,dif1);
    printf("\n%.1f %.1f",sum2,dif2);
        return 0;
}
