#include <stdio.h>

int main(){

int A[5] = {1,2,3000,4,5};

A[2]=3;

//printf("array  \n %d %d %d %d %d ", A[0],A[1],A[2],A[3],A[4]);

printf("array \n %d \n %d  \n %d  \n %d\n %d \n ", A[0],A[2],A[1],A[3],A[4]);
return 0;

}