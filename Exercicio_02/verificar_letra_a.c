#include <stdio.h>
#include <string.h>

int contarA(const char *str) {
    int count = 0;
    while (*str) { // Enquanto não chegarmos ao final da string
        if (*str == 'a' || *str == 'A') {
            count++; // Incrementa o contador se encontrar 'a' ou 'A'
        }
        str++; // Avança para o próximo caractere
    }
    return count;
}

int main() {
    // Definindo a string a ser verificada
    char str[100]; // Buffer para a string (100 caracteres)

    // Entrada do usuário
    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string com espaço

    // Remove o caractere de nova linha se presente
    str[strcspn(str, "\n")] = '\0';

    // Contando as ocorrências da letra 'a'
    int quantidade = contarA(str);

    // Verificando se a letra 'a' foi encontrada
    if (quantidade > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) ocorre %d vezes na string.\n", quantidade);
    } else {
        printf("A letra 'a' não foi encontrada na string.\n");
    }

    return 0;
}
