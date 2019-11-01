#include <stdio.h>

int cn[128];

main()
{
	
//	int ch;
//
//   for( ch = 0 ; ch <= 100; ch++ ) {
//      printf("ASCII value = %d, Character = %c\n", ch , ch );
//   }
	int c;
	
	for(int i = 0; i < 128; ++i){
		cn[i] = 0;
	}
	
	while((c = getchar()) != EOF){
		cn[c]++;
	}
//	
	for(int i = 0; i < 128; i++){
		if(cn[i] == 0) continue;
		printf("%c:   ",i);
		for(int j = 0; j < cn[i]; ++j){
			printf("*");
		}
		printf("\n");
	}
 } 
