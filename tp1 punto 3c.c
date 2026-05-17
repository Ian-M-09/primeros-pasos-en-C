#include <stdio.h>

int main() {
int horas_trabajadas;
float monto_a_pagar,valor_de_la_hora,r;
printf ("\n indicar el valor_de_la_hora: ");
scanf("%f", &valor_de_la_hora);
printf("\n indicar horas_trabajadas: ");
scanf("%d", &horas_trabajadas);
r=30*horas_trabajadas;
monto_a_pagar=r*valor_de_la_hora;
printf("el sueldo a pagar es: % 10.2f", monto_a_pagar);
	
	return 0;
}
