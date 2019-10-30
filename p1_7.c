#include <stdio.h>

//编写一个打印EOF值的程序 

main()
{
	int c;
	
	while((c = getchar()) != EOF)
		;
	printf("%d",c); // -1
	
	
} 
