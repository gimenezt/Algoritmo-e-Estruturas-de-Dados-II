#include <stdio.h>
int imprime (char var, int x) {
    int quant = 1;
    int total = 0;
    for (int l=1 ; l<= x; l++){
        for (int c=1; c <= quant; c++)
        {
            printf ("%c", var);
            total++;
        } 
        printf ("\n"); 
        if(quant <= x)quant++;
    }
    return total;
}

int main() { printf("quant de Caracteres = %d",imprime('*',6)); }
