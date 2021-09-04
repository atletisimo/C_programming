#include<stdio.h>
#include<math.h>
int main(){
	int m,n,i,j;
	int x[100],a[100][100];
	float as,md;
	
	scanf("%d%d",&m,&n);//broj na redici i koloni
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
		for(i=0;i<m;i++){//redici
		as=0.F;
		for(j=0;j<n;j++){//koloni
		as+=a[i][j];
	
}
as/=n;//ja delime so broj na koloni t.e n
md=0.0f;
x[i]=a[i][0];//x[i] maximalniot element
for(j=0;j<n;j++){
	if(a[i][j]-as>md){//ako elementot koga ke mu se odzeme aritmeticka sredina 
	//e pogolema od maxdistance md imame novo md
		md=fabs(a[i][j]-as);
		x[i]=a[i][j];
	}
	
}

}
for(i=0;i<m;i++){
	printf("%d",&x[i]);
}
}
