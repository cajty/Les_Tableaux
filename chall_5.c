#include <stdio.h>
int main (){
     char  chard[100];
    int i = 0;
    printf("enter name:\n");
    scanf("%[^\n]",chard);           
    while(chard[i]!= '\0'){
        i++;
    }
    printf("leng est : %d", i);
    
}