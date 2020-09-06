#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
int i,j,k,n,A[100][100],C[100][100];
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
C[i][j]=0;
for(k=0;k<n;k++)
C[i][j]+=A[i][k]*A[k][j];
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(i==j)
{
C[i][j]+=A[i][j]+1;
}
else
{
C[i][j]+=A[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",C[i][j]);
printf("\n");
}
return 0;
}
