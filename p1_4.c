#include <stdio.h>


//��дһ�������ӡ�����¶�ת��Ϊ��Ӧ���� �¶ȵ�ת���� 


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


//�ܽ᣺ 	printf ֧�ֵĸ�ʽ��
//%d 		ʮ���ƴ�ӡ
//%6d  		����ʮ���ƴ�ӡ������6���ַ���
//%f 		���ո�������ӡ
//%6f		���ո�������ӡ������6���ַ���
//%.2f 		���ո�������ӡ��С�����������С��
//%6.2f 	���ո�������ӡ������6���ַ���С���������λС������д�Ļ����Ჹ��0 
//%-6.2f 		���ո�������ӡ������6���ַ���С���������λС������д�Ļ����Ჹ��0�����ű�ʾ������� 
