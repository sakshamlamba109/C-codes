#include<stdio.h>
#include<stdlib.h>
int *rev(int);
void main()
{int *a,i,j,k;
a=rev(5);
for(i=0;i<5;i++)
{printf("enter");
scanf("%d",&a[i]);
}
for(j=0;j<=1;j++)
{int t;
t=a[j];
a[j]=a[4-j];
a[4-j]=t;}
for(k=0;k<5;k++)
{printf("%d",a[k]);
}
free(a);
}
int *rev(int n)
{int *tm;
tm=(int*)malloc(n*sizeof(int));
if(tm==NULL)
	printf("wrong");
else
	return tm;
}

