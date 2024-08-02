#include<stdio.h>

int greet(int a, int b){
	return  (a*a) + (2*a*b) + (b*b);
}

int main(){
	int a,b;
	
	printf("Enter the value of A :- ");
	scanf("%d", &a);
	printf("Enter the value of B :- ");
	scanf("%d", &b);
	
	int ans = greet(a, b);
	
	printf("\nYour Ans is  = %d", ans);
	
	return 0;
}