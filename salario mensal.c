#include <stdio.h>
#include <stdlib.h>

int main() {
	float sal, perc, aumento, novo_sal;
	
	printf("Um Estagiario do Banco do Brasil teve um aumento em seu salario, desse modo, considere seu ganho no mes anterior e aplique o percentual de reajuste.\n");
	
	printf("Insira o salario:\n:");
	scanf("%f", &sal);
	
	printf("Insira o percentual:\n:");
	scanf("%f", &perc);
	
	aumento = sal * perc/100;
	novo_sal = sal + aumento;
	
	printf("Valor do aumento: %.2f\n", aumento);
	printf("Valor do novo salario: %.2f\n", novo_sal);
	return 0;
}
