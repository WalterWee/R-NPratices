#include <stdio.h> 

//��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ���

main()
{
	int c,ns;
	
	while((c = getchar()) != EOF){
		if( c == ' ' || c == '\t' || c == '\n')
			ns++;
	}
	printf("%d",ns);
 } 
