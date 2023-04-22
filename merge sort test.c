#include<stdio.h>
int main() {

int z, n, l[100], r[100] ,a[100],k,i,j;
printf("enter n \n");
scanf("%d", &n);

printf("enter values\n");

for(i=0; i<n;i++) {
    scanf("%d", &l[i]);
}
printf("enter z \n");
scanf("%d", &z);

printf("enter values\n");

for(i=0; i<z;i++) {
    scanf("%d", &l[i]);
}

for(k=0; k<z+n; k++){
    if(l[i]<r[j]){
        a[k]=l[j];
        i++;
    }
    else{
            a[k]=r[j];
    j++;
    }
}
for(k=0; i<n+z;k++) {
    printf("%d", a[k]);
}

return 0;

}
