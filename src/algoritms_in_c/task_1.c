#include <stdio.h>
#include <stdlib.h>
void read_input(int *pa, int *pb);

int main() {
  int a, b, p, q;
  read_input(&a, &b);
  p = a/b;
  q = a%b;
  printf("p: %d, q: %d", p, q);
  
}

void read_input(int *pa, int *pb){
    int items;
    printf("Input a and b ");
    items = scanf("%d%d", pa, pb);
    if((items != 2) || (*pb == 0)){
        printf("n/a\n");
        abort();
    }
}