#include <stdio.h>
#include <math.h>



const float pi = 3.14; 

void volumeCylinder(float pi){
	float h, r;
	printf(" Enter the following propaties for cylinder \n");
	printf(" Hight h: , Radius r: \n");
	scanf("%d %d", h, &r);
	
	
	float  V = pi*(pow(r,2))*h;
	printf("The volume of the cylinder is %d \n ",V);
	
}

void volumeSphare(float pi){
	int r;
	printf(" Enter the following propaties for Sphare  \n");
	printf("Radius r: \n");
	scanf("%d", r);
	float  V = (4*pi*(pow(r,3)))/3;
	printf("The volume of the Sphare is %d \n ", V);
	
	
	
}

void volumeCone(float pi){
	float h, r;

	printf(" Enter the following propaties for cylinder \n");
	printf(" Hight h: , Radius r: \n");
	scanf("%d %d", h, &r);
	
	float  V = (1*pi*(pow(r,2))*h)/3;
	printf("The volume of the cone is %d \n ", V);
	
}

void volumeRectangularSolid(){
	float h, l, w;
	printf(" Enter the following propaties for RectangularSolid \n");
	printf(" Hight h: , Length l: , Width w: \n");
	scanf("%d %d %d", &h, &l, &w);

	float  V = h*l*w;
		printf("The volume of the RectangularSolid is %d \n", V);
	
}


int main(){
	unsigned int choose, flag=1;
	
	while(flag ==1 ){
	
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<><>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("<<< Enter your option to choose an object to find it volume>>>");
	printf("\n");
	printf(" (1) Rectangular solid\n (2) Cylinder\n (3) Sphere\n (4) Cone\n (5) EXIT");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<><>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	
	
	scanf("%d", choose);
	
	switch(choose)
	{
		case(1):
			volumeRectangularSolid();
			printf("\n");
			printf("  <<< press 1 to continue or any key to Exit >>>");
			scanf("%d",flag);
			break;
			
		case(2):
			volumeCylinder(pi);
			printf("\n");
			printf("  <<< press 1 to continue or any key to Exit >>>");
			scanf("%d",flag);
		
			break;
			
		case(3):
			volumeSphare(pi);
			printf("\n");
			printf("  <<< press 1 to continue or any key to Exit >>>");
			scanf("%d",flag);
			break; 
			
		case(4):
			volumeCone(pi);
			printf("\n");
			printf("  <<< press 1 to continue or any key to Exit >>>");
			scanf("%d",flag);
			break;
			
		case(5):
			exit(0);
			break;
	}
}
	
	return 0;
}

