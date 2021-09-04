#include <stdio.h>
#include<string.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
	// vasiot kod pocnuva od ovde
FILE *f;
char s[10],max_s[10];
float koef,max_k=1.0f;
int t,uplata,max_t;
float dobivka;

if((f=fopen("livce.txt","r"))==NULL){
    printf("Can not open file");
    return -1;
}
    fscanf(f,"%d\n",&uplata);
    
    dobivka=uplata;
    
    while(1){
        fscanf(f,"%s %d %f",s,&t,&koef);
        if(feof(f))
        break;
        
        if(koef>max_k){
            max_k=koef;
            strcpy(max_s,s);
            max_t=t;
        }
        dobivka*=koef;
    }
    printf("%s %d %.2f\n%.2f ",max_s,max_t,max_k,dobivka);
    fclose(f);
    
    


	return 0;    

}
