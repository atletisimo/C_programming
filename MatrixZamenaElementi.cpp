#include<stdio.h>
int main(){
	int n;
	int i,j;
	int a[50][50];
	int b[50][50];
	scanf("%d",&n);//broj na elementi,kvadratna matrica
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);//vnesuvame matrica
			
		}
	}
	//sekoj element od glavna dijagonala da se zameni so suma na site eleemnti od ist red desno od elementot
	//i elementite koi se vo ista kolona nad elementot
	for (i=0;i<n;i++){
        for (j=0;j<n;j++){
        	int s=0;
	if(i==j){
		int z=j+1;//kolonite
		while(z<n){ s+=a[i][z];z++;}
		
		z=i-1;
		while(z>=0){
			s+=a[z][j];
			z--;
			
		}
		b[i][j]+=s;
	}
	//sekoj element od sporedna dijagonala da se zameni so suma na elementi od ist red pred elementot 
	//i elementi koi se vo ista kolona pod elementot
	if(i+j==n-1){
		s=0;
		int z=j-1;
		while(z>=0){
			s+=a[i][z];
			z--;
		}
		z=i+1;
		while(z<n){
			s+=a[z][j];z++;
		}
		
	
		b[i][j]+=s;
	}
	
	//dodokolku nekoj element se naogja na glavna i na sporedna 2te sumi da se sumiraat
	if(i!=j&&((i+j)!=(n-1))){
		b[i][j]=a[i][j];
		
	}
}
}
  for (i=0;i<n;i++){
        for (j=0;j<n;j++) printf("%d ",b[i][j]);
        printf("\n");
    }
}

