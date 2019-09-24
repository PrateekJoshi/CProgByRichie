#include <stdio.h>


/*
 * int (* function(int arg,...)) (int ,int)
 * 
 * 1) function(int args,...) : A function having args 
 * 2) * function(int args,...) : Returns a pointer 
 * 3) ( * function(int args,...) ) : to a function 
 * 4) ( * function(int args,...) ) (int, int) : having two int args
 * 5) int ( * function(int args,...) ) (int, int ) : and retuning int  
 *
 */
int sum(int a , int b)
{
	printf("sum : %d \n", (a+b));
	return 0;
}

int sub(int a , int b)
{
	printf("sub : %d \n", (a-b));
	return 0;
}


int(*wrapper(int opt))(int,int)
{
	switch(opt)
	{
	case 1:
		return sum;
	case 2:
		return sub;
	}											}
	return NULL;
}

int main(int argc, char **argv)
{
	int (*func) (int,int) = wrapper(0);
	func(8,7);
}
