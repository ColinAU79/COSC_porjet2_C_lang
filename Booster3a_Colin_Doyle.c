#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int series();
int sum_func1();
int sum_func2();
int tax_cal1();
int tax_cal2();
void rand_alpha_gen();
void prime_num_gen();

int main(void){
    series();
    printf("\n%d",sum_func1());
    printf("\n%d",sum_func2());
    tax_cal1();
    tax_cal2();
    rand_alpha_gen();
    prime_num_gen();
    return 0;
}

int series(){
    for(int i = 1; i <= 32; i++){
        if(i % 7 == 0){
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}

int sum_func1(){
    return 10 * (10 + 1) / 2;
}

int sum_func2(){
    int sum = 0;
    for(int i = 1; i <=10; i++){
        sum += i;
    }
    return sum;
}

int tax_cal1(){
    for(int i = 1; i <= 10; i++){
        double value = rand() % (2000 - 1000 + 1) + 1000;
        value = value * 0.1;
        printf("%lf ", value);
    }
    return 0;
}

int tax_cal2(){
    for(int i = 1; i <= 10; i++){
        double value = rand() % (500 - 100 + 1) + 100;
        value = value * 0.15;
        printf("%lf ", value);
    }
    return 0;
}

void rand_alpha_gen(){
    char * alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 1; i <= 50; i++){
        int value = rand() % (26 - 1 + 1);
        printf("\n %d = %c", i, alpha[value]);
    }
}

void prime_num_gen(){
    int count = 0;
    for(int i = 1000; i <= 2000; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 2){
            printf("\n %d is Prime", i);
        }
        count = 0;
    }
}