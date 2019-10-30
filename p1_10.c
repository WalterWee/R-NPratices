#include<stdio.h>

//编写一个将输入复制到输出的程序  ，并将其中的制表符替换为\t，把回退符替换为\b,把反斜杠
//替换为\\。这样可以将制表符 和回退符以可见的方式显示出来。 

main()
{
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '\t'){
			putchar('\\');
			putchar('t');
		}else if(c == '\b'){ //将getchar换为getch可以直接显示\b 
			putchar('\\');
			putchar('b');
		}else if(c == '\\'){
			putchar('\\');
			putchar('\\');
		}else{
			putchar(c);
		}
		
	} 
}
