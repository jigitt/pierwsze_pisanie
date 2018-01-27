// ćwiczenie nr 1.4  na kurs ansi - program przeliczający stopnie celsjusza na fahrenheity

#include <stdio.h>

int main()

{

float celsiusz;
float fahrenheit;
int wart_min;
int wart_max;
int skok_wartosci;

	wart_min = 0;
	wart_max = 100;
	skok_wartosci = 1;

	celsiusz = 0;

printf("\n\nTabela temperatur dla skali stopniowej celsiusz - fahrenheit\n\n");

while(celsiusz <= wart_max)
	{
	fahrenheit = 32.0 + (9.0/5.0 ) * celsiusz;
	printf("%3.0f\t %6.1f\n", celsiusz, fahrenheit);
	celsiusz = celsiusz + skok_wartosci;
	}
}
