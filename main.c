#include <stdio.h>

int main (){
    int n;
    int first  = 0;
    int second = 1;
    int next;
    int c;

    printf("Bitte gebe eine Zahl ein:");
    scanf("%d", &n);

    printf("Die ersten %d Fibonacci-Stellen sind:\n", n);

    for (int c = 0; c < n; c++) {
        if (c <= 1)
            next = c;
        else {
            next   = first + second;
            first  = second;
            second = next;
        }
        printf("%d\n", next);
    }

    }