/*
 *       FemtoShell Assigment
 *
 *       Author: Ahmed Naeem
 *       Date: 
 *
 *       main file
 *
 *
 * */




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helper.h"


#define MAX 15


int main (void)
{
	char str[MAX];
	int n;
	int * fr;

	while(1)
	{
		printf("Here You Are >> ");
		fflush(stdin);
		gets(str);
	

		/* Check exit statius*/

		if (strcmp(str,"exit")==0)
		{
			printf("\tGood Bye :)\n");
			break;
		}



	         /* rand input --> printed print random number */
		else if (strcmp(str,"rand")==0)
		{
			printf("%d\n",rand());
		
		}
		  /* fact input --> print factorial of number */
                else if (strcmp(str,"fact")==0)
                {
			printf("\tEnter number: ");
			scanf("%d",&n);
			fflush(stdin);
			/*call fact function*/
	
			printf("\tReslut: %d \n",fact(n));
                }


		  /* fib input --> print fibonacci sequence */
                else if (strcmp(str,"fib")==0)
                {
                       printf("\tEnter number: ");
                       scanf("%d",&n);
		       fflush(stdin);
                        /*call fib function*/
		      fr=  fib(n);

                        printf("\tReslut: ");
			for(int i=0; i<n;i++)
			{
			
				printf("%d, ",fr[i]);
			}

			printf("\n");
			free(fr);
                
                }


		/* Normal input --> printed as it is */
		else
		{
			printf("You said: %s \n",str);
		}

		}


	return 0;
}
