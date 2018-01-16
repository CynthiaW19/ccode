//squarefunction.c

#include<stdio.h>
int square ( int v );

int main( )
{
	x, n ;
	printf ("\Enter some number for the finding square \n");
	scanf ("%d", &n);
	x = square ( n );
	printf ("nSquare of the given number %d is %d",n,x);
	printf("\n\n");
	return 0;
}

int square ( int v ) //function definition
{	
	int p;
	p = v * v ;
	return ( p ) ;
}
