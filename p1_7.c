#include <stdio.h>

//��дһ����ӡEOFֵ�ĳ��� 

main()
{
	int c;
	
	while((c = getchar()) != EOF)
		;
	printf("%d",c); // -1
	
	
} 
