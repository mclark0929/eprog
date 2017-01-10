#include<stdio.h>
#include<math.h>

int main(){

	int one, two, sub;
	
	printf("Enter first MMR - ");
	scanf("%d",&one);
	
	printf("Enter second MMR - ");
	scanf("%d",&two);
	
	sub = abs(one- two);
	printf("MMR difference = %d\n", sub);
		
}
