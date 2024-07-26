#include <stdio.h>
#include <math.h>
int main(void) {
  int n,r,i,fac1=1,fac2=1,permutation;
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  printf("Enter the value of r:\n");
  scanf("%d",&r);
  for (i=1; i<=n; i++)
    {
      fac1 = fac1*i;
    }
  for (i=1; i<=(n-r); i++)
    {
      fac2 = fac2*i;
    }
  permutation = fac1/fac2;
  printf("The number of permutations is %d",permutation);
  return 0;
}