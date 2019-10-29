#include <stdio.h>

//做个实验，当printf 函数的参数 字符串中包含\c（其中c
//是除了转义字符外的字符 ）时，观察一下会出现什么情况  

main() 
{
	printf("hello, ");
	printf("world");
	printf("\n");

	printf("hello\dworld"); // unknown escape sequence:\d

}
