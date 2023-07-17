#include<stdio.h>
#include<Windows.h> 

main()
{
	system("color 0C");
	int i,j,k=2;
	while(k--){
	for(i=0;i<10;i++)
		{
		printf(" ");
		}
		printf("**");
		printf("\n");
	}
	
	for(j=0;j<4;j++)
	{
		printf(" ");
	}
	k=5;
	while(k--)
	printf("*");  printf(" ** *****\n");
	
    j=22;
    i=2;
	while(i--)
	{
		for(k=0;k<i+1;k++)
			printf(" ");
			for(k=0;k<j-2*i-2;k++)
				printf("*");
				printf("\n");
	}
	i=3;
	while(i--)
		{
		j=22;
		while(j--)
			printf("*");
			printf("\n");
		}
		
	j=22;
    i=2;
	while(i--)
	{
		for(k=0;k<2-i;k++)
			printf(" ");
			for(k=0;k<j-4+2*i;k++)
				printf("*");
				printf("\n");
	}
	
	for(j=0;j<4;j++)
	{
		printf(" ");
	}
	k=5;
	while(k--)
	printf("*");  printf(" ** *****\n");
	i=10000;
	while(i--)
		printf(" ");					   
}
/*
	                                     **
	                                     ** 
                                   ***** ** *****
                                 ******************
                                ********************
                               **********************
                               **********************
                               **********************
                                ********************
                                 ******************
                                  ****************
		                           *****    *****
		                           */
