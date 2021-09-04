#include<stdio.h>
#define MAX 50
int main(){
	int a[MAX][MAX];
	int i,j,r,k;
	scanf("%d%d",&r,&k);//broj na rediici i koloni
	for(i=0;i<r;i++){
		for(j=0;j<k;j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	int sum_neparni_koloni=0;
	int sum_parni_redici=0;
	for(i=0;i<r;i++){
		for(j=0;j<k;j++){
			if(j%2){
				sum_neparni_koloni+=a[i][j];
			}
			 if(!(i%2)){
				sum_parni_redici+=a[i][j];
			}
}

}
printf("%d\n",sum_neparni_koloni-sum_parni_redici);
for(i=0;i<r;i++){
		for(j=0;j<k;j++){
printf("%d",a[i][j]);}


putchar('\n');
}






}
