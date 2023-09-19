#include <stdio.h>
int main (){
     char  chard[20] ="Quel sinistre mot !";
    int i = 0;
    int a = 0; 
    char so = 'a';  
    // poition de m   
    while(chard[i]!= 'm'){
        i++;
    }
    printf("poition de m est : %d\n", i);
    // poition de s
    while(chard[a]!= 's'){
        a++;
    }
    printf("poition de s est : %d\n", a);

    //Mettre la lettre 'm' à la place de 's' et vice versa
    so = chard[i];
    chard[i] = chard[a];
    chard[a] = so;

    //Afficher le texte ainsi modifié
    printf("%s\n",chard);

    // l’utilisateur de saisir une lettre quelconque
    char use ;
    printf("saisir une letter ");
    scanf("%c",&use);

    //dans le texte et afficher sa position 
    // int us = 0;
     int c = 0;
      while(chard[c]!= '\n'){
         c++;
        if(chard[c] == use ){
            printf("la position de letter %c et %d", use, c);
            return 0;
        }
    }
    printf("erreur not faond");


    

    
}