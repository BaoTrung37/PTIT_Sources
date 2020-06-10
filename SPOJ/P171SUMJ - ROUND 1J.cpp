#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
 
int main ()
{
	long long A, B, C;
	cin>>A>>B>>C;
	if (A==0)
	{
		if (B==0 && C!=0) printf ("0");
		else if (B==0 && C==0) printf ("-1");
		else
		{
			printf ("1\n");
			printf ("%.5lf", -1.0*(double)C/(double)B);
		}
	}
	else
	{
		long long denta = B*B - 4*A*C;
		if (denta<0) printf ("0");
		else if (denta==0)
		{
			printf ("1\n");
			printf ("%.5lf", -1.0*(double)B/(2.0*(double)A));
		}
		else
		{
			printf ("2\n");
			double x = (-1.0*(double)B-sqrt(denta))/(2.0*(double)A);
			double y = (-1.0*(double)B+sqrt(denta))/(2.0*(double)A);
			if (x>y) printf ("%.5lf\n%.5lf",y,x);
			else printf ("%.5lf\n%.5lf",x,y);
		}
	}
	return 0;
}