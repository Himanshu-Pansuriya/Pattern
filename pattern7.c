#include<stdio.h>
int main(){
	int i,j,sp,n;
	scanf("%d",&n);
	
for (i = 1; i <= n; i++){
	
     for (sp = 1; sp <= n - i; sp++){	
            printf(" ");
}
      for (j = 1; j <= i; j++){
            printf("%d ",i);
}
            printf("\n");
}
}

//    1
//   2 2
//  3 3 3
// 4 4 4 4
