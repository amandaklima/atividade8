
// Amanda Kawanne de Oliveira Lima

// Questão 1
#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma(n - 1);
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("A soma dos numeros de 1 a %d e: %d\n", numero, soma(numero));

    return 0;
}

// Questão 2
#include <stdio.h>

int fatorial(int n) {
    return (n == 0) ? 1 : n * fatorial(n - 1);
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: O fatorial nao esta definido para numeros negativos.\n");
    } else {
        printf("O fatorial de %d e: %d\n", numero, fatorial(numero));
    }

    return 0;
}


// Questão 3
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Digite o valor de N para calcular o termo da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: N deve ser um inteiro nao negativo.\n");
    } else {
        printf("O termo de Fibonacci de ordem %d e: %d\n", n, fibonacci(n));
    }

    return 0;
}

// Questão 4
#include <stdio.h>

void imprimirNaturais(int n) {
    if (n >= 0) {
        printf("%d ", n);
        imprimirNaturais(n - 1);
    }
}

int main() {
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    printf("Os numeros naturais de 0 ate %d em ordem decrescente sao:\n", N);
    imprimirNaturais(N);
    printf("\n");

    return 0;
}

// Questão 5
#include <stdio.h>

void imprimirNaturais(int n) {
    if (n >= 0) {
        imprimirNaturais(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    printf("Os numeros naturais de 0 ate %d em ordem decrescente sao:\n", N);
    imprimirNaturais(N);
    printf("\n");

    return 0;
}
