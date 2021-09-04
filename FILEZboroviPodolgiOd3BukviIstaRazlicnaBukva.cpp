#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char prva=0,posledna=0,c;
	FILE *f;
	int b=0;//brojac na zborovi;
	int flag=0;//oznaka deka se naogame vo zbor
	int len=0;//dolzina na zbor
	if((f=fopen("zborovi.txt","r"))==NULL)
	{
		return -1;
	}
	while((c=fgetc(f))!=EOF){
		if(isalpha(c))
		{
			if(!flag)
			flag=1;
			prva=c;
		}
		len++;
		posledna=c;
	}
	else{
		if(flag){
			flag=0;
			if(len>3&&toupper(prva)==toupper(posledna))
			b++;
			len=0;
		}
	}
}

if(flag&&len>3&&toupper(prva)==toupper(posledna))
b++;

printf("%d zborovi \n",b);
}
