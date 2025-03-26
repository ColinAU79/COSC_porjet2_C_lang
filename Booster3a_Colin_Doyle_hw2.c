#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gen_array_rand();
int lrgst_element();
void rand_alpha_gen();


int main(void){
    gen_array_rand();
    lrgst_element();

    rand_alpha_gen();
    return 0;
}

int gen_array_rand(){
    int arr[10];
    int sum = 0;
    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 100;
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < 10; i++){
        sum += arr[i];
    }
    sum = sum / 10;
    printf("\n%d", sum);
    return 0;
}
// The function gen_array_rand() generates an array of 10 random numbers between 0 and 99 using the rand() function.
// The generated array is then printed using a for loop. The function returns 0 at the end. The main function is empty in this code snippet.

int lrgst_element(){
    int arr[10];
    int max = 0;
    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 100; // generate random numbers between 0 and 99
    }
    for(int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n%d", max);
    return max;
}





void rand_alpha_gen(){
    char * alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char stng[10];
    for(int i = 1; i <= 50; i++){
        int value = rand() % 26; 
        printf(" %d = %c", i, alpha[value]);
    }
    for(int i = 0; i < 10; i++){
        stng[i] = alpha[rand() % 26];
    }
    printf("\n %s", stng);
    return;
}
