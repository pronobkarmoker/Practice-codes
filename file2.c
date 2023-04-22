#include<stdio.h>

int main() {
    FILE *fp=NULL;

    char s[10];
  fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
while(!feof(fp)){
fgets(s,5,fp);
printf("%s",s);
}
fclose(fp);



}
