#include<stdio.h>
int main(){
	int i,j,p,q,n;
	scanf("%d",&n);
	
	for (i = 1; i <= n; i++)
{
if (i % 2 == 0)
{
p = 1;
q = 0;
}
else
{
p = 0;
q = 1;
}
for (j = 1; j <= i; j++)
{
if (j % 2 == 0)
printf("%d ", p);
else
printf("%d ", q);
}
printf("\n");
}
}

//1
//0 1
//1 0 1
//0 1 0 1

