#include<stdio.h>
void findabsolute(int N){
    if (N < 0){
    N=(-1)*N; 
}
printf("%d", N);
}


int main(){
    int N;
    printf("Enter a number(integer):");
    scanf("%d", &N);


    findabsolute(N);
    return 0;
}