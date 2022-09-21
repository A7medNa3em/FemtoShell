/*
 * Author : Ahmed Naeem 
 * Date :
 *
 *   Helper functions implementaton
 *
 *
 * */

#include <stdlib.h>
#include <stdio.h>


int fact(int num)
{
	int f=1;
	int index =1;
	for(index=1; index<num;index++)
	{
		f=f*index;

	}

	return f;
}


int* fib(int num)
{
     	int* farr = (int*) calloc(num,sizeof(int));
	int i =0;
        for(i=0; i<num;i++)
	{
		if(i== 0)
		{
			farr[i]=0;
		}
		else if (i == 1)
		{
			farr[i]=1;
		}

		else
		{
			farr[i]=farr[i-1]+farr[i-2];
		
		}

	
	}

	return farr;
}
