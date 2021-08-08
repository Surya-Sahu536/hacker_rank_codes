/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,max1=0,max2=0,max3=0;
  for(i=1;i<=n;i++)
      for(j=i+1;j<=n;j++)
      {
          if(((i&j)>max1)&&((i&j)<k))
            max1=i&j;
        if(((i|j)>max2)&&((i|j)<k))
            max2=i|j;
        if(((i^j)>max3)&&((i^j)<k))
            max3=i^j;
        }
  printf("%d\n%d\n%d",max1,max2,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}