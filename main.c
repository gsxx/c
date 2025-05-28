#include <stdio.h>
#include <gb/gb.h>
unsigned char* fib(int *count) {
    static unsigned char fibonacci[20];
    unsigned char a = 0;
    unsigned char b = 1;
    unsigned char maxByte = 255;
    *count = 0;

    fibonacci[(*count)++] = a;
    fibonacci[(*count)++] = b;

    while (1) {
        unsigned char next = a + b;
        if (next < b) break; 
        if (next > maxByte) break;
        fibonacci[(*count)++] = next;
        a = b;
        b = next;
    }

    return fibonacci;
}

void print_byte(unsigned char *fibonacci, int count) {
    for (int i = 0; i < count; i++) {
        printf("%u ", fibonacci[i]);
    }
    printf("\n");
}

int main() {
    int count;
    unsigned char *fibonacci = fib(&count);
    char mensaje[] = "Secuencia de Fibonacci (byte):";

    printf("%s\n", mensaje);
    print_byte(fibonacci, count);

    printf("\n");
    
    return 0;
}

