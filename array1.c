#include <stdio.h>
int main(){
	int i, grades[3],sum=0;
	float average = 0.0;
	for(i=0; i<3; i++){
		printf("Enter grade %d: ", i+1);
		scanf("%d", &grades[i]);
		sum= sum + grades[i];
	}
	average = sum/3;
	printf("Average Grade is: %.2f", average);
		if(average>= 75){
		printf("Pass");
		}else{
		printf("Fail");
	}
}
