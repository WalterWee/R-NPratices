#include<stdio.h>

//��дһ�������븴�Ƶ�����ĳ���  ���������е��Ʊ���滻Ϊ\t���ѻ��˷��滻Ϊ\b,�ѷ�б��
//�滻Ϊ\\���������Խ��Ʊ�� �ͻ��˷��Կɼ��ķ�ʽ��ʾ������ 

main()
{
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '\t'){
			putchar('\\');
			putchar('t');
		}else if(c == '\b'){ //��getchar��Ϊgetch����ֱ����ʾ\b 
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
