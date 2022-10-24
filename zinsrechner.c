#include <stdio.h>
#include <math.h>
#include <ctype.h>

float	calculate_amount(float investment, float rate, float years);

int main()
{
	float	investment;
	float	rate;
	float	years;
	float	amount;
	char	c;

	// investment = 100;
	// rate = 7;
	// years = 7;
	while (1)
	{
		printf("Bitte, Betrag angeben: \n");
		// fflush(stdout);
		scanf("%f", &investment);
		printf("Bitte, Zinsatz angeben: \n");
		fflush(stdout);
		scanf("%f", &rate);
		printf("Bitte, Zeitspanne angeben: \n");
		fflush(stdout);
		scanf("%f", &years);
		amount = calculate_amount(investment, rate, years);
		printf("Gesamtbetrag = %.2f EURO\n", amount);
		fflush(stdout);
		printf("Soll eine weitere Berechnung durchgeführt werden ? (y/n)\n");
		fflush(stdout);
		scanf(" %c", &c);
		if (c == 'n')
			break;
	}
	return(0);
}

float	calculate_amount(float investment, float rate, float years)
{
	for (size_t i = 0; i < years; i++)
	{
		investment = investment * (1 + (rate / 100));
	}
	return(investment);
}
