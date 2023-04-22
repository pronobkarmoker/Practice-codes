#include<stdio.h>

char my_C2L(char );
char my_L2C(char );

int main(void){

    char x= 'D' ,y='c';
    printf("x=%c , y=%c\n",x,y);
    x= my_C2L(x);
    y= my_L2C(y);
    printf("x=%c, y=%c\n",x,y);
}
        char my_C2L(char k){
        if (k>='A' && k<='Z')
            k = k-'A'+'a';
            return(k);
        }
    char my_L2C(char k){
    if(k>='a' && k<='Z')
        k=  k-'a'+'A';
        return(k);
    }



