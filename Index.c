#include <stdio.h>
#include <math.h>
int main() {
float a, b;
char c;
printf("Digite algum númelro: ");
scanf("%f", &a);
printf("Digite outro número: ");
scanf("%f", &b);
printf(" + é soma\n - é subtração\n * é multiplicação\n / é divisão\n ^ é potenciação\n R é radiciação\n L é logaritmo\n Informe a operação desejada: ");
scanf(" %c", &c);
switch(c) {
case '+':
printf("%.2f + %.2f = %.2f\n", a, b, a+b);
break;
case '-':
printf("%.2f - %.2f = %.2f\n", a, b, a-b);
break;
case '*':
printf("%.2f * %.2f = %.2f\n", a, b, a*b);
break;
case '/':
if(b != 0) {
printf("%.2f / %.2f = %.2f\n", a, b, a/b);
} else {
printf("Erro: divisão por zero!\n");
}
break;
case '^':
printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
break;
case 'R':
if(b != 0) {
printf("%.2f radiciado por %.2f = %.2f\n", a, b, pow(a, 1/b));
} else {
printf("Erro: radiciação por zero!\n");
}
break;
case 'L':
if(a > 0 && b > 0) {
printf("%.2f log %.2f = %.2f\n", b, a, log(a)/log(b));
} else {
printf("Erro: logaritmo não definido para números negativos ou zero!\n");
}
break;
default:
printf("Erro: operação inválida!\n");
break;
}
return 0;
}
