#include <stdio.h>

int main() {
    int note[40];
    for(int i = 0; i < 40; i++){
    printf(" note (entre 0 et 20), valeur hors de cet intervalle arrêtera la saisie.");
    printf("enter note  %d:\n", i + 1);
    scanf("%d",&note[i]); 
    if (note[i] > 0 || note[i] < 0){
        printf("hors intervalle arrera la saisie");
    }          
    }
    int num, some, max;

    printf("  enter une série d'entiers positifs inferieurs à 100 terminee par 0 :\n");

    while (1) {
        scanf("%d", &num);

        
        if (num == 0) {
            break;
        }

        
        if (num > 100) {
            printf("%d négliger.\n", num);
            continue;
        }

        some += num;

        
        if (1) {
            max++;
        }
    }

    printf(" la somme est : %d \n le max des elements %d\n", some, max);

    return 0;
}
