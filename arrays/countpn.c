/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Counting Positive and Negative Numbers using Arrays in C
 * 
 * July 19, 2023
 * 
*/

// gcc -o countpn countpn.c
// Enter the size of arrays: n
// Enter the elements (inputs): Could be 1, -2, 3... n

#include <stdio.h>

void count_pos_neg(int *a, int n, int *count_neg, int *count_pos){
    int i;
    for(i=0;i<n;i++){
        if(a[i] < 0){
            (*count_neg)++;
        }else{
            (*count_pos)++;
        }
    }
}

int main(){
    int a[5], n, count_neg=0, count_pos=0, i;

    printf("Enter the size of the array\n");
    scanf("%d", &n);

    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    count_pos_neg(a, n, &count_neg, &count_pos);

    printf("There are %d negative numbers in the array\n", count_neg);
    printf("There are %d positive numbers in the array\n", count_pos);

    return 0;
}
