#include<stdio.h>
int main(){
int n,m,i,j;
int a[50][50];
int s=0;
//sekoj element ke go zameni so zbirot na negovite sosedni 
//elementi po horizontala i vertikala koi
//se pogolemi od samiot toj element
//sosedni elementi=elementi koi se naogjaat gore,dole,levo,desno(ako elementot e del od
//prva ili posledna redica ili kolona mu nedostasuva nekoj sosed)
scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		scanf("%d",&a[i][j]);
	}
}

for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	if((i-1)>=0){
	
		if(a[i-1][j]>a[i][j])//ako prethodniot element od redicata
		//t.e negoviot lev element e pogolem od samiot toj element so koj sporeduvame
		//se dodava na sumata
		s+=a[i-1][j];
	}
	if((i+1)<n){
		if(a[i+1][j]>a[i][j])
		s+=a[i+1][j];
	}
		if((j-1)>=0){
			if(a[i][j-1]>a[i][j])
			s+=a[i][j-1];
		}
		
		if((j+1)<m){
			if(a[i][j+1]>a[i][j])
			s+=a[i][j+1];
		}
		
		printf("%d ",s);
	}
	
printf("\n");
	}

}
