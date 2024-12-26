#include<stdio.h>
int main(){
	int i,j,n;
		printf("enter n :");
		scanf("%d",&n);
	
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			
			if(i==2||i==6||j==2||j==6){
			printf(" %d ",3);	
			}
			if(i==1||i==7||j==1||j==7){
			printf(" %d ",4);	
			}
			
			
		}
		printf("\n");
	}
}
