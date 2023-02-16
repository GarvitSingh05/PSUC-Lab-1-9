#include <stdio.h>
int main()
{
	int arr1[10]={11,22,33,44,55,66,77,88,99,111};
	int arr2[10]; //10 is max. elements
	int from,to,i,j;
	
	
	printf("Enter starting index: ");
	scanf("%d",&from);
	printf("Enter end index: ");
	scanf("%d",&to);	
	
	if(from<0 || to>9)
	{
		printf("Invalid from/to index!\n");
	}
	
	//copy from first array to second array
	for(i=from,j=0; i<=to; i++,j++)
		arr2[j]=arr1[i];
	
	printf("first array is: ");
	for(i=0;i<9;i++)
		printf("%d ",arr1[i]);
	printf("\n");
	
	printf("second array is: ");
	for(i=0;i<j;i++)
		printf("%d ",arr2[i]);	
	printf("\n");
	
	return 0;	
}
