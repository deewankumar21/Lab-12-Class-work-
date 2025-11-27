#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("=============== malloc() Demonstration ============ \n");
	printf("malloc allocates memory but does not initialize it (contain garbage value) \n");
	int number,i;
	int *ptr;
	printf("Enter total Number of values: ");
	scanf("%d",&number);
	
	ptr = (int*) malloc(number * sizeof(int));  //int* type cast but malloc is void function
		ptr = (int*) calloc(number, sizeof(int));
	printf("\nIntialy our Dynamic Memory have Garbage value: ");
	for(i=0;i<number;i++){
		printf("\nptr[%d]= %d ",i,*(ptr+i));
			}
			
			printf("\nEnter %d integer to initialize the array : \n ",number);

for(i=0;i<number;i++){
	printf("Enter Value for ptr[%d]: ",i);
	scanf("%d",(ptr+i));}
	
	printf("\n\nAfter Assigning values to Dynamic: ");
	for(i=0;i<number;i++){
		printf("\nptr[%d]= %d ",i,*(ptr+i));
			}
			
			int sum=0;
			for(i=0;i<number;i++){
				sum+=ptr[i];
		
			}
					printf("\nSum: %d",sum);
	
	return 0;
}
