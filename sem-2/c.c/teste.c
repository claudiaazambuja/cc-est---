#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Endereco de a: %p\n", &a);
    printf("Endereco armazenado em p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}
