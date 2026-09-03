#include <stdio.h>

int main() {
    float salario_min;
    float salario;
    float n_salarios;

    scanf("%f", &salario_min);
    scanf("%f", &salario);

    n_salarios = salario / salario_min;

    printf("%.2f\n", n_salarios);

    return 0;
}
