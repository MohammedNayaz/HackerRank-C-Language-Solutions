//Sum of Digits of a Five Digit Number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,m,x,y;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
   while(n>0)
    {
    m=n%10;
    x=x+m;
    n=n/10;
    }
    printf("%d",x);

    return 0;
}
