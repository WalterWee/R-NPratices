#include <stdio.h>


//修改温度转换程序，要求以逆序（即按照从300度到0度的顺序）打印温度转换表。 

/*print Fahrenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version */
main()
{
	float fahr, celsius;
	float lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = upper;
	printf("%4s %7s\n", "fahr","celsius");
	while (fahr >= lower) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %7.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
}
