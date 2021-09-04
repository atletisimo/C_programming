#include<stdio.h>
int main(){
	int n,max;
if(scanf("%d",&max)){//ako vneseme max broj
	while(scanf("%d",&n)){//se dodeka vnesuvame broj
		if(n>100){//ako brojot e pogolem od 100 togas ignoriraj gi i prodolzi 
			continue;
		}
	}
	if(max<n){//proverka dali brojot e max,ako se max t.e n e pogolem od max togas...
		max=n;//n stanuva maximumot
	}
	printf("%d",max);
}
	
}
