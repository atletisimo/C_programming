#include<stdio.h>
#include<string.h>
int main(){
FILE *vlezna,*izlezna;
char s[81];
int l;
	if((vlezna=fopen("vlezna.txt","r"))==NULL)
	{
		printf("Canot open file");
		return -1;
	}
	if((izlezna=fopen("izlezna.txt","w"))==NULL)
	{
		printf("Canot open file");
		return -1;
	}
	//sekoj red od vlezna ke go kopira vo izlezna
//proverka dali sme stignale do krajot
while(!feof(vlezna)){
fgets(s,80,vlezna);	//citanje red po red
l=strlen(s);//dolzina na stringot
fprintf(izlezna,"%d\n%s",l,s);//pecatime dolzina nov red pecatime znacite t.e stringot
}
fclose(vlezna);
fclose(izlezna);




}
