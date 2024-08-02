#include<stdio.h>

float greet(int l, int h){
	return  (l*h)/2;
}

int main(){
	int l,h;
	
	printf("Enter the length of Triangle :- ");
	scanf("%d", &l);
	printf("Enter the hight of Triangle :- ");
	scanf("%d", &h);
	
	float area = greet(l,h);
	
	printf("\nArea of Triangle = %.2f", area);
	
    return 0;
}