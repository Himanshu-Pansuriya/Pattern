#include<stdio.h>
int main(){
	int i,j,n,m=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		m=i;
		for(j=1;j<=i;j++){
			m++;
			printf(" %d ",m);
		}
		printf("\n");
		
	}
}
//1
//2 3
//3 4 5 
//4 5 6 7  
