/*
 * function_ptr_cal.c
 *
 *  Created on: 23-Apr-2018
 *      Author: prateek
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int(*FUNC_PTR)(int);

int identity(int a)
{
	return a;
}

int square(int a)
{
	return (a*a);
}

int cube(int a)
{
	return (a*a*a);
}


int main(int argc, char **argv)
{
	FUNC_PTR fun_names[]={identity,square,cube};
	int n,r;

	printf("Enter choice:\n 1. identity\n2.Square\n3.Cube\n");
	scanf("%d",&n);

	r = fun_names[n-1](4);

	printf("result: %d \n",r);
}
