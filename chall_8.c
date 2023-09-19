#include <stdio.h>
int main (){
    char chard_2d[3][7] ={"a b c d","e f g h","i j k l"};
    char chard_d [21];
    int a = 0;
   //Remplir le tableau par des valeurs entrées
   for(int n = 0 ; n < 3; n++){
    for(int i = 0; i < 7; i++){
        chard_d[a] = chard_2d[n][i];
        a++;
    }
   }
   // affichze 2D
     for(int n = 0 ; n < 3; n++){
    for(int i = 0; i < 7; i++){
       printf("%c",chard_2d[n][i]);
    }
    printf("\n");
   }
   
   printf("%d\n", a);
   printf("%c\n", chard_d[9]);

   //affichez D
    for(int i =0; i < a; i++){
        printf("%c,", chard_d[i]);
        
    }
    return 0;
}