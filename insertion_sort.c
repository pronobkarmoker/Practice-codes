#include<stdio.h>
int main ()
{

int i,j,key,n;
int arr[100];

printf("enter n\n");
scanf("%d", &n);

printf("enter element \n");
for(i=0; i<n;i++){
    scanf("%d" , &arr[i]);
}

for (i=1;i<n;i++){
    key= arr[i];
    j=i-1;

    while(j>-1 && arr[j]>key){
        arr[j+1]= arr[j];
        j--;
    }
    arr[j+1]= key;
}

printf("sorted list  : \n");

for(i=0; i<n; i++){
    printf("%d\n", arr[i]);
}

return 0;
}
