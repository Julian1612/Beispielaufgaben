// Die Klassen die benutzt wurden
#include <stdio.h>

float	calculate_amount(float investment, float rate, float years);

// Das Hauptprogramm
int main(void)
{
	// Die Varibalen die für das Programm benutzt werden.
	// 'float' ist der Datentyp der Variable. 'investment', 'rate' usw.
	// sind die Variablennamen.
	float	investment;
	float	rate;
	float	years;
	float	amount;
	char	c;

	// While schleife wiederholt sich solange bis die Bedingung
	// in den Klammern nicht mehr true ist (was hier nie eintrift weil die Bedinung 1 ist also immer 'true')
	// oder 'break' gecalled wird
	// In der Schleife wird der Code immer in einer Schleife ausgeführt.
	while (1)
	{
		// printf ist um text und variablen im standart output aus zu geben
		printf("Bitte, Betrag angeben: \n");
		fflush(stdout);
		// scanf wird genutzt um varibalen im laufenden Programm Werte zu zuweisen
		scanf("%f", &investment);
		printf("Bitte, Zinsatz angeben: \n");
		fflush(stdout);
		scanf("%f", &rate);
		printf("Bitte, Zeitspanne angeben: \n");
		fflush(stdout);
		scanf("%f", &years);
		// Hier wird die Funktion 'calculate_amount' gecalled
		amount = calculate_amount(investment, rate, years);
		printf("Gesamtbetrag = %.2f EURO\n", amount);
		fflush(stdout);
		printf("Soll eine weitere Berechnung durchgeführt werden ? (y/n)\n");
		fflush(stdout);
		scanf(" %c", &c);
		// Wenn der eingegebene Wert von der char varibale 'c'
		// 'n' ist (weil 'n' eingegeben wurde) wird die if Bedinung 'true'
		// und die While-Schleife wird abgebrochen.
		if (c == 'n')
		{
			break ;
		}
	}
	return (0);
}

// Wenn die Funktion im Main programm gecalled wird, wird der Code der in dieser,
// Funktion steht ausgeführt.
float	calculate_amount(float investment, float rate, float years)
{
	// Ein 'for-loop' ist auch eine art von Schleifen
	for (size_t i = 0; i < years; i++)
	{
		investment = investment * (1 + (rate / 100));
	}
	return (investment);
}
