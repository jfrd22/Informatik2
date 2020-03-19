
/* Solution1 */

#include <stdio.h>
#include <stdlib.h>

void printfResult(double erg, char konstante, char einheit )
{
	printf("%c = %lf[%c]",konstante,erg,einheit);
}


void widerstand(double _x, double _y)
{
	double widerstandTemp = 0.0;

	if (_y != 0.0)
	{
		 widerstandTemp = _x / _y;
	}

	printfResult(widerstandTemp, 'R', 'O');

}

void strom(double _x, double _y)
{
	if (_y != 0);
	double stromTemp = _x/_y;
	printfResult(stromTemp, 'I', 'A');

}

void spannung(double _x, double _y)
{
	double spannungTemp = _x*_y;
	printfResult(spannungTemp, 'U', 'V');

}


int main() {

/* FIXME! Here is space for your solution! */

return 0

}
