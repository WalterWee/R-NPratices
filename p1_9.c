#include <stdio.h>

//��дһ�������븴�Ƶ�����ĳ��򣬲������������Ķ���ո���һ���ո����

main()
{
	int c;
	int lastc;
	while((c = getchar()) != EOF){
		if(c != ' ')
			putchar(c);
		else if(lastc != ' '){
			putchar(c);
		}
		lastc = c;
	}
 } 
