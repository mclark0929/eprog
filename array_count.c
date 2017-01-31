#include<stdio.h>
#include<conio.h>

int main(){
	int i, numbers[5], count=0;
	for(i=0; i<5; i++){
	printf("Enter numbers %d: ", i+1);
	scanf("%d", &numbers[i]);
	}
		for(i=0; i<5; i++){
		if(numbers[i] == 1)
		 count++;
		}		
			printf("Ones: %d\n",count);
			printf("Zeroes: %d\n",5-count);
}	
