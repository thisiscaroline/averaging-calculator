#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv){

	char* s = (char*)malloc(sizeof(int));
	int count = 0, sum = 0, grade = 0;
	float total = 0;

	printf("Quick averager\n------------\n\nEnter in a digit:\n");
	scanf("%s", s);
	
	do {
		
		grade = atof(s);
		printf("\n\tNum: %d\n", grade);

		sum += grade;
		count++;
		
		free(s);
		printf("\nEnter next digit, or q to quit: ");
		scanf("%s", s);
		
	} while ((strcmp(s, "q")) != 0);
	
	total = sum/(float)count;
	printf("\n\nTotal: %0.3f\n\n", total);
	
	return 0;
	
}
