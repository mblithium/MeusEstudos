#include <stdio.h>
#include <stdlib.h>

double cube(num) {
	return num * num * num;
}
int main() {
	float userNum;
	scanf("%f", &userNum);
	printf("%f cubed equals %f", userNum, cube(userNum));
	return 0;
}