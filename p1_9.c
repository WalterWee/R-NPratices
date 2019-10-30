#include <stdio.h>

//编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替

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
