#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num1, num2;
	int result;
	char op;
	
	printf("Enter the calculation : ");
	scanf("%d %c %d", &num1, &op, &num2);
	
	switch (op) {
		case '+' :
			result = num1+num2;
			break;
		case '-' :
			result = num1-num2;
			break;
		case '*' :
			result = num1*num2;
			break;
		case '/' :
			result = num1/num2;
			break;
		default :
			break;
	}
	
	printf("= %d\n", result);
	
	
	return 0;
}