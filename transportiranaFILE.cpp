#include<stdio.h>
int main(){
	FILE *fr,*fw;
	int row,col,i,j;
	float m[100][100],b[100][100];

	//treba da se cita red po red se dodeka ne se stigne 
	//do kraj na datotekata
	if((fr=fopen("matrica1.txt","r"))==NULL){
		return -1;
	}
	
	if((fw=fopen("matrica2.txt","w"))==NULL){
		return -1;
	}
	
	fscanf(fr,"%d%d",&row,&col);	
	
	for(i=0;i<row&& !feof(fr);i++){
		for(j=0;j<col && !feof(fr);j++){
			fscanf(fr,"%f",m[i][j]);
		}
	}
	for(i=0;i<row;i++){
	for(j=0;j<col;j++){
	b[j][i]=m[i][j];	
		
	}}
	
	fprintf(fw,"%d%d\n",col,row);
	
	
for(i=0;i<row;i++){
	for(j=0;j<col;j++){
	fprintf(fw,"%.1f",m[i][j]);
	}
	putchar('\n');
}
fclose(fr);	
fclose(fw);
}
