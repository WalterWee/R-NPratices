#include <stdio.h>

//����ʵ�飬��printf �����Ĳ��� �ַ����а���\c������c
//�ǳ���ת���ַ�����ַ� ��ʱ���۲�һ�»����ʲô���  

main() 
{
	printf("hello, ");
	printf("world");
	printf("\n");

	printf("hello\dworld"); // unknown escape sequence:\d

}
