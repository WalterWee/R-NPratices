#include <stdio.h>

//验证表达式getchar() != EOF 的是值是0还是1

main()
{
	printf("%d",getchar() != EOF);
	
	//^Z 是0 ,其余是1 
 } 
