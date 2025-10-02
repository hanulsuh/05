#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num;
	
	printf("Input an integer : ");
	scanf("%d", &num);
	
	if (num<0) {
		printf("absolute is %d.\n", -num);
	} else {
		printf("absolute is %d.\n", num);
	}
	
	return 0;
}