#include <stdio.h>
#include <math.h>




void findC(unsigned int a, unsigned int b, unsigned int A){
	unsigned int y;
	y = 180- b;
	unsigned int C = A * (sin(a)/ sin(y));
	printf(" The length of C : %d", C);
	printf(" The angle y : %d", y);


}



int main(){
	unsigned int angle_a, angle_b, length_A;
	
	
	printf("<<<< Enter positve numbers less than 180 for >>>>>> \n");
	printf(" enter angle_a, angle_b and length_A: \n ");
	scanf("%d %d %d", &angle_a, &angle_b, &length_A);
	

	
	printf("\n");
	
	findC(angle_a, angle_b, length_A);
	
	
}
