//sqaurefunction.c

#include<stdio.h>
int sqaure ( int v );

int main( )
{
	x, n ;
	printf ("\Enter some number for the finding sqaure \n");
	scanf ("%d", &n);
	x = sqaure ( n );
	printf ("nSqaure of the given number %d is %d",n,x);
	printf("\n\n");
	return 0;
}

int sqaure ( int v ) //function definition
{	
	int p;
	p = v * v ;
	return ( p ) ;
}
