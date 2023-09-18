#include <stdio.h>
int main (){
    int nums [10];

    for(int i = 0; i < 10; i++){
    printf("enter %d:\n", i + 1);
    scanf("%d",&nums[i]);           
    }
    int so;

    for(int i = 0; i < 10; i++){    
     for (int j = 0; j < 10; j++) {
        if (nums[i] < nums[j])
        {
            so = nums[i];
            nums[i] = nums[j];
            nums[j] = so;
        }
        }
    }
        for(int i = 0; i < 10; i++){
        printf("enter : %d \n", nums[i]);
        }

    
}