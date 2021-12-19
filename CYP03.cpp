
#include <stdio.h>
int main()
{
	int dia, mes, ano;

	scanf_s("%i %i %i", &dia, &mes, &ano);
	
	if (dia > 0 && dia < 32) {
		if (mes >= 1 && mes <= 12) {
			if (ano >= 0 && ano <= 3000) {

				dia++;

				printf_s("%2i %2i %4i", dia, mes, ano);

			}
		}
	}

	

	return 0;
}

