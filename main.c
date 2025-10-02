#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num;
	int sum=0;
	int i;
	
	printf("Input an integer : ");
	scanf("%d", &num);
	
	for (i=1; i<=num; i++) {
		sum = sum + i;
	}
	
	printf("The result is %d\n", sum);
	
	return 0;
}