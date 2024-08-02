#include<stdio.h>

float greet(int r){
	return 3.14 * r * r;
}

int main(){
	int c;
	
	printf("Enter the radius of circle :- ");
	scanf("%d", &c);
	
	float area = greet(c);
	
	printf("Area of circle = %.2f", area);
	
	return 0;
}
