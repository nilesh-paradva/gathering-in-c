#include<stdio.h>

int greet(int a, int b, int c){
	return  ((b*b)*(4*a*c))/(2*a);
}

int main(){
	int a,b,c;
	
	printf("Enter the value of A :- ");
	scanf("%d", &a);
	printf("Enter the value of B :- ");
	scanf("%d", &b);
	printf("Enter the value of C :- ");
	scanf("%d", &c);
	
	int ans = greet(a, b, c);
	
	printf("\nYour Ans is  = %d", ans);
	
	return 0;
}