#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check(char zbor[]){
int i;
	int n[26]={0};//vkupno 26 bukvi
	for(i=0;i<strlen(zbor);i++){//ja izminuvame nizata t.e zborot
	
	if(isalpha(zbor[i])){//ako e bukva
	int	c=tolower(zbor[i]);
		n[c-'a']++;//a-a=0;b-a=1,dali nizata ima barem edna trojka
	}
}
for(i=0;i<26;i++){
	if(n[i]>2)
	return 1;
}
return 0;
}
int main(){
	int br=0;
	FILE *fp;
	char s[21];
	if((fp=fopen("zborovi.txt","r"))==NULL)
	{
		printf("Cant open the file");
		return -1;
	}
	while(!feof(fp))
	{
		fgets(s,20,fp);
		if(check(s)){//ako go zadovoluva uslovot
			puts(s);//ispecati go zborot
			br++;//brojot na takvi zborovi zgolemi go
		}
	}
	printf("Ima vkupno %d zborovi ",br);
	fclose(fp);
}
