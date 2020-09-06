#include<stdio.h>
int main()
{
int fst_mat[100][100],snd_mat[100][100],mul_mat[100][100],r,c,m1,n1,m2,n2,k,sum=0;
label:
scanf("%d",&n1);
scanf("%d",&m1);
scanf("%d",&n2);
scanf("%d",&m2);
while(m1!=n2)
{
printf("MATRIX MULTIPLICATION IS NOT POSSIBLE . . . . . . . . . . TRY AGAIN ");
goto label;
}
for(r=1;r<=n1;r++)
{
for(c=1;c<=m1;c++)
{
scanf("%d", &fst_mat[r][c]);
}
}
for(r=1;r<=n2;r++)
{
for(c=1;c<=m2;c++)
{
scanf("%d",&snd_mat[r][c]);
}
}
for(r=1;r<=n1;r++)
{
for(c=1;c<=m2;c++)
{
for(k=1;k<=n2;k++)
{
sum=sum+(fst_mat[r][k]*snd_mat[k][c]);
}
mul_mat[r][c]=sum;
sum=0;
}
}
for(r=1;r<=n1;r++)
{
for(c=1;c<=m2;c++)
{
printf("%d ",mul_mat[r][c]);
}
printf("\n");
}
}
