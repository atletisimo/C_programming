#include<stdio.h>
#define MAX 50
int main(){
int a[MAX][MAX];
int i,j,n;
scanf("%d",&n);

for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
}

int max,min;
max=min=a[0][0];//se pretpostavuva deka postoi barem eden element 
//od matricata,nekoja incijalna vrednost

for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(a[i][j]>max){
			max=a[i][j];
		}
		if(a[i][j]<min){
			min=a[i][j];
		}
		
		
}}
//otkoga ke gi najdeme max i min treba da gi pomineme elementite od glavnata dijagonala
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(i==j){
			a[i][j]=max-min;
		}}}}
