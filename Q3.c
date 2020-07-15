#include <stdio.h>
#include <math.h>



unsigned int fact(unsigned int n){
	if (n == 1){
		return 1;
	}
	else
	{
		return n * fact(n -1);
	}
}


int main()
{
	unsigned int n, r, nPr;
	printf("<<<<< n must be greater than or equal to r. And both are positive >>>>>\n");
	
	printf("Enter n abd Enter r: \n");
	scanf("%d %d", &n ,&r);

	nPr = fact(n)/fact(n-r);
	
	printf("nPr= %d", nPr);
    return 0;
}
