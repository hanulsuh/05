#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num;
	
	printf("Input an integer : ");
	scanf("%d", &num);
	
	if (num>0) {
		printf("yangsu\n");
	} else if (num<0) {
		printf("yumsu\n");
	}	else {
		printf("0\n");
	}
	
	return 0;
}