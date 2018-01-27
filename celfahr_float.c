// program ver.2 - kurs ansi.
// program wypisujący odpowiednik temperatury w stopniach celsjusza
// dla temperatury w stopniach fahrenheita w skokach co 20 stopni
// zastosowanie liczb zmiennopozycyjnych dzięki zmiennej "float"
 
#include <stdio.h>

int main()
{
float fahr, celsius;
int lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = 0;

printf("\nZestawienie temperatur w stopniach fahrenheita i odpowiadających im temperatur w stopniach celsjusza\n\n");

while (fahr <= upper)
	{
		celsius = (5.0/9.0)*(fahr-32.0);
		printf("%3.0f fahr\t %6.1f cels\n", fahr, celsius);
		fahr=fahr+step;
	}	
}
