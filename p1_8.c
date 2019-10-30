#include <stdio.h> 

//编写一个统计空格、制表符与换行符个数的程序

main()
{
	int c,ns;
	
	while((c = getchar()) != EOF){
		if( c == ' ' || c == '\t' || c == '\n')
			ns++;
	}
	printf("%d",ns);
 } 
