#include <stdio.h>
#include "main.h"

int main(){
	char str[10] = "make a constant variable";
	printf("\nBefore memset() :%s\n", str);
	//fill 5 character starting from str [2] with '.'
	
memset(str + 2, ', ', 8*sizeof(char));
printf("After memset(): %s", str);
return 0;
}
