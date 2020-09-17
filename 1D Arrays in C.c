//1D Arrays in C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, a[1000];
    int sum = 0;
    scanf("%d",&n);
    for(int i =0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0 ; i < n ; i++)
    {
        
        sum += a[i];
        
    }
    printf("%d",sum);
    return 0;
}