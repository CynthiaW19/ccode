//*******helloworld.c********
//compile $gcc helloworld.o -o helloworld.o
//run ./helloworld.o

#include <stdio.h>

int main(){
	printf ("hello world \n\n");
}

//*******hellotime.c*******
#include <stdio.h>
#include <time.h>
int main(){
	time t t= time(NULL);
	struct tm tm = *localtime(&t);
	
	printf("now: %d-%d-%d %d:d%:%d\n",
	tm.tm year + 1900, tm.tm mon = 1,
	tm.tm mday, tm.tm hour, tm.tm min, tm.tm sec);
}

//*******inputint.c*******
#include <stdio.h>

	int main()
	{
		int number, x, y;
		
		printf("Type in a number \n");
		scanf("%d, &number);
		printf("The number you typed was %d\n, number);
		x = number * number ;
		printf("number * number is %d\n",x);
		return 0;
	} 
