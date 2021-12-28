/*CH-230-A
Urfan Alvani    
ualvani@jacobs-university.de */
#include<stdio.h>

float convert(int cm);

int main() {
	int cm;
	float km;
	
	scanf("%d", &cm);
	
	// Assign the return value of convert() to float km
	km = convert(cm);
	
	printf("Result of conversion: %f\n", km);
	
	return 0;
}

float convert(int cm) {
	float km = cm / 100000.0;
	return km;
}