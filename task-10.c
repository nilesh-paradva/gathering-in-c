#include<stdio.h>

void greet(int a, int b){
	a = a+b;
    b = a-b;
    a = a-b;
    printf("\nA is = %d \nB is = %d", a, b);
}

int main(){
	int a,b;
	
	printf("Enter the value of A :- ");
	scanf("%d", &a);
	printf("Enter the value of B :- ");
	scanf("%d", &b);
	
    greet(a, b);
    
    return 0;
}