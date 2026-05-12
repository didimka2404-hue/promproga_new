#include <stdio.h>
#include <locale.h>

int factorial(int n) {
    if (n < 0) {
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int power(int base, int exp) {
    if (exp == 0) return 1;
    if (exp < 0) return 0;
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {

    printf("ALPHA: Добрый день, молодежь!\n");

    printf("последний commit ура\n");
    int num;
    setlocale(LC_ALL, "RUSSIAN");

    printf("Введите целое неотрицательное число(pls): ");
    if (scanf("%d", &num) != 1) {
        printf("Ошибка ввода. вы ввели недопустимое начение\n");
        return 1;
    }

    int fact = factorial(num);
    printf("Факториал числа %d равен %d\n", num, fact);
    
    printf("2^3 = %d\n", power(2, 3));

    return 0;
}
