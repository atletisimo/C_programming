#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
int i,consonants=0,vowels=0;
char str[]="This is a really simple sentence";
for(i=0;i<strlen(str);i++){
	str[i]=tolower(str[i]);
	if(str[i]=='a'|| str[i]=='e'||str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
		vowels++;
	}
	else if(str[i]>='a'&&str[i]<='z'){
		consonants++;
	}
}
printf("Number of vowels:%d\n",vowels);
printf("Number of consonants:%d\n",consonants);


}
