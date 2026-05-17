#include "menu.h"
int main()
{
	RI a,b;
	printf("Parte real de A:");fflush(stdin);scanf("%f",&a.r);
	printf("Parte imaginaria de A:");fflush(stdin);scanf("%f",&a.i);
	printf("Parte real de B:");fflush(stdin);scanf("%f",&b.r);
	printf("Parte imaginaria de B:");fflush(stdin);scanf("%f",&b.i);
	menu(a,b);
return 0;
}
