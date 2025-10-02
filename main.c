#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num;
	int answer = 59;
	int trial = 0;
	
	do {
		printf("Guess a number : ");
		scanf("%d", &num);
		
		trial++;
		
		if (num<answer) {
			printf("Low!\n");
		} else if (num>answer) {
			printf("High!\n");
		}
	} while (answer != num);
	
	printf("Congratulation! trials : %d\n", trial);
	
	return 0;
}