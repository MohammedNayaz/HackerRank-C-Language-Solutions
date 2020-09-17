//Digit Frequency
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    int i,j,count=0;
    char c='0';
    gets(s);
    int temp = strlen(s);
    
    for(i=0;i<=9;i++)
    {
        count=0;
        for(j=0;j<temp;j++)
        {
            if(s[j]==c)
            count++;
        }
        printf("%d ",count);
        c++;
    }

    return 0;
}
