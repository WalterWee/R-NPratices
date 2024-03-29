#include <stdio.h>


//重新编写1.2节中的温度转换程序，使用函数实现温度转换计算 


float fahr2celsius(float);

int main()
{
	float fahr;
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("%4s %7s\n", "fahr","celsius");
	while (fahr <= upper) {
		printf("%4.0f %7.1f\n", fahr, fahr2celsius(fahr));
		fahr = fahr + step;
	}
	return 0;
}

float fahr2celsius(float fahr){
	return (5.0/9.0) * (fahr-32.0);
}
