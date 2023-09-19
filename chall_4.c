#include <stdio.h>

int main() {
    //notes 
    int note[60];
    int len =0;
    for(int i = 0; i < 40; i++){
     printf(" note (entre 0 et 20), valeur hors de cet intervalle arrêtera la saisie.");
     printf("enter note  %d:\n", i + 1);
     scanf("%d",&note[i]);
     len++;                                        //calulet the leng of note 
     if (note[i] < 0 || note[i] > 20){
        printf("hors intervalle arrera la saisie\n");
         note[i] ='\0'; // of delet the intervalle note
        break;
     }     
    }
     len = len -1;    // the leng
    //afficher
    for(int j =0; j < len; j++){
        printf("note %d : %d \n", j +1, note[j]);
    }
    printf("%d\n", len);
    // afficher la moyane
     float mone = 0;
     for(int j =0; j < len; j++){
        mone +=  note[j];
       
    }
     mone = mone / (float)len;
    printf("la moyane : %.2f \n", mone);
     // comparer a la moyanene et suprller moyane
    int sup_moyane = 0;
   for(int j =0; j < len; j++){
    if (note[j] < mone){
        printf( "%d inferieur  a la moyenne\n",note[j]);
    }else if ( note[j] > mone){
        printf( "%d  superieur a la moyenne\n",note[j]);
        sup_moyane++; // caluter supller
    }else{
        printf( "%d  egal a la moyenne\n",note[j]);
    }
       
    }    
    printf("notes superieures a la moyenne %d\n", sup_moyane); // suprller

    // la note la plus petite
    int  max = 0;
    int pla_max = 0;
    int min = 0;
    int pla_min = 0;
     for (int j = 1; j < len; j++) {
        if (note[j -1] <= note[j])
        {
            max = note[j];
            pla_max = j +1;
        }
        }
    // le note la plus grand 
    for (int j =1; j < len; j++){
        if(  note[j -1] >= note[j] ){
            min = note[j]; 
            pla_min = j +1;
        }
    }
        
    printf(" la note la plus grande :%d\n", max);
    printf(" la note la plus petite :%d\n", pla_max);
    printf(" la note la plus grande :%d\n", min);
    printf(" la note la plus petite :%d\n", pla_min);




}
