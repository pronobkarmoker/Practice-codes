#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *fp=NULL;
    char s[10];
fp=fopen("abc.txt","w");
//fputc(ch,fp);
if(fp==NULL){
    printf("no");
    exit(1);}
    gets(s);
for(int i=0;i<strlen(s);i++){
    fputc(s[i],fp);
}

fclose(fp);

}
