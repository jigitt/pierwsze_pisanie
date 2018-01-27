// program wypisujący odpowiednik temperatury w stopniach celsjusza
// dla temperatury w stopniach fahrenheita w skokach co 20 stopni
// zastosowanie liczb całkowitych dzięki zmiennej "int"
 
#include <stdio.h>

int main()
{
int fahr, celsius;
int lower, upper, step;

lower = 0;
upper = 300;
step = 15;

fahr = lower;

while (fahr <= upper)
	{
		celsius = 5*(fahr-32)/9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr=fahr+step;
	}	
}
