#include <stdio.h>


//编写一个程序打印摄氏温度转换为相应华氏 温度的转换表。 


main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = -20;
	upper = 40;
	step = 5;
	
	celsius = lower;
	printf("%6s %7s\n", "fahr","celsius");
	while (celsius <= upper) {
		fahr = celsius * 9.0 / 5.0 + 32.0;
		printf("%-6.1f %7.0f\n", fahr, celsius);  
		celsius = celsius + step;
	}
}


//总结： 	printf 支持的格式：
//%d 		十进制打印
//%6d  		按照十进制打印，至少6个字符宽
//%f 		按照浮点数打印
//%6f		按照浮点数打印，至少6个字符宽
//%.2f 		按照浮点数打印，小数点后有两个小数
//%6.2f 	按照浮点数打印，至少6个字符宽，小数点后有两位小数。不写的话，会补充0 
//%-6.2f 		按照浮点数打印，至少6个字符宽，小数点后有两位小数。不写的话，会补充0，减号表示向左对齐 
