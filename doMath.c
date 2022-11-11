#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#include "mathtest.h" // This is where the static library comes in

int main(void){
	time_t t;
	srand((unsigned) time(&t));
	int rNuma = rand();
	int rNumb = rand();

	int answer;

	answer = addNumbers(rNuma, rNumb);
	printf("%d + %d = %d\n",rNuma, rNumb, answer);

	answer = subNumbers(rNuma, rNumb);
	printf("%d - %d = %d\n",rNuma, rNumb, answer);

	return 0;
}