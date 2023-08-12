#include <stdio.h>

int main(int argc, char* argv[]){
    int n;
    printf("digite um numero:\n");
    scanf("%d",&n);

    if(n%2==0||n%3==0||n%5==0||n%7==0){

        printf("numero nao primo");

    }
    else{printf("numero primo");}

    return 0;
}