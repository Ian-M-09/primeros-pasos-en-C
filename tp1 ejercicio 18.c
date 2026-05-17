#include <stdio.h>
#include <stdlib.h>
int main() {
int cantidad,i,contadordeconzonantes,contadordebocales;
char caracteres;
printf ("\n ingrse cantidad de caracteres: ");
scanf ("%d", &cantidad);
contadordeconzonantes=0;
	contadordebocales=0;
	for (i=1;i<=cantidad;i++){
	printf("\n ingrese los caracteres del parrafo: ");
    scanf(" %c", &caracteres);/* un espacio antes del% para que no se cunfunda con el anterior scanf*/
switch (caracteres){
case 'a':
	contadordebocales=contadordebocales+1;
	break;
case 'b': 
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'c': 
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'd': 
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'e':
	contadordebocales=contadordebocales+1;
	break;
case 'f':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'g':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'h':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'i':
	contadordebocales=contadordebocales+1;
	break;
case 'j':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'k':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'l': 
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'm':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'n':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'ñ':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'o':
	contadordebocales=contadordebocales+1;
	break;
case 'p':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'q':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'r':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 's':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 't':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'u':
	contadordebocales=contadordebocales+1;
	break;
case 'v':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'w':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'x':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'y':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
case 'z':
	contadordeconzonantes=contadordeconzonantes+1;
	break;
}
printf("\n la cantidad de bolcales en el texto es: %d",contadordebocales);
printf("\n la cantida de consonantes en el texto es: %d", contadordeconzonantes);}
return 0;
}
