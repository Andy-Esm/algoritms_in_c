#include <stdio.h>

const int N = 3;

float average(int array[]);

int main(){
    int scores[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &scores[i]);
    }

    printf("Avegege %f\n", average(scores));
    return 0; 
}

float average(int array[]){
    int result = 0;
    for(int i = 0; i < N; i++){
        result += array[i];
    }
    return result / (float)N;
}