#include<stdio.h>
#include<stdlib.h>
int **trans(int m,int n);
void main()
{int **a, m, n, i, j;
printf("enter");
scanf("%d%d",&m,&n);
a=trans(m,n);
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("\n");


for(j=0;j<n;j++)
{for(i=0;i<m;i++)
{printf("%d",a[i][j]);
printf(" ");}
printf("\n\n");}
}
int **trans(int m,int n)
{int l;
int **tmp;
tmp=(int**)malloc(m*sizeof(int*));
for(l=0;l<m;l++)
tmp[l]=(int*)malloc(n*sizeof(int));
return tmp;
}