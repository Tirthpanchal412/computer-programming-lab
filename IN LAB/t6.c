#include<stdio.h>
int main(){

int rows;
int cols;
printf("enter the number of rows\n");
scanf("%d",&rows);

printf("enter the number of cols\n  ");
scanf("%d",&cols);

  for (int i=1; i<= rows;i++){
     for (int j=1; j<=i&& j<= cols ; j++){
     printf("(%d,%d)",i,j);

     }
     printf("\n");
  }
     return 0;
}
