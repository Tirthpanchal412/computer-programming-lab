#include<stdio.h>
int main(){

int i,j;

for (int i=1; i<=5; i++){
for (j=1;j<=5;j++){
if(i==j)
continue;
}
printf("(%d,%d)\t",i,j);
}
printf("\n");

    return 0;
}
