#include <stdio.h>
int main (){
    int nums [10];

    for(int i = 0; i < 10; i++){
    printf("enter %d:\n", i + 1);
    scanf("%d",&nums[i]);           
    }
    int  max = 0;
    int min = 0;
     for (int j = 1; j < 10; j++) {
        if (nums[0] <= nums[j])
        {
            max = nums[j];
        }
        }
    for (int j =1; j < 10; j++){
        if(  nums[0] >= nums[j] ){
            min = nums[j]; 
        }
    }
        
    printf(" max :%d\n", max);
    printf("min :%d\n", min);

    
}