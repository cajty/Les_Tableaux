#include <stdio.h>
int main (){
    int chard[50][50];
    int num = 1;
   //Remplir le tableau par des valeurs entrées
   for(int n = 0 ; n < 50; n++){
    for(int i = 0; i < 50; i++){
        chard[n][i] = num++;
    }
   }
   //afficher 
   for(int n =0 ; n < 50; n++){
    for(int i =0; i < 50; i++){
        printf("%d ,", chard[n][i]);
    }
   }
   printf("\n");

   //la somme de tous ses éléments 
   long some = 0;
     for(int n =0 ; n < 50; n++){
    for(int i =0; i < 50; i++){
        some += chard[n][i];
    }
   }
   printf("la somme est: %d",some);
    
}