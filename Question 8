#include <stdio.h>
int main ()
{
int matrix[10][10];
int i, j, m, n;
int sparse_counter = 0;
scanf("%d %d", &m, &n);
for (i = 0; i < m; ++i)
{
for (j = 0; j < n; ++j)
{
scanf("%d", &matrix[i][j]);
if (matrix[i][j] == 0)
{
++sparse_counter;
}
}
}
if (sparse_counter > ((m * n) / 2))
{
printf("YES\n");
}
else
printf("NO\n");
}
