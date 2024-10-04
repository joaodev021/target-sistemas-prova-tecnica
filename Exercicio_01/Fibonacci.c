#include <stdio.h>

int isFibonacci(int num) {
    int a = 0, b = 1, temp;

    if (num == a || num == b) {
        return 1;
    }

    while (b < num) {
        temp = b;
        b = a + b;
        a = temp;
    }

    if (b == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
