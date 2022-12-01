#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,odd,even;
	printf("輸入元素個數:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("第%d個元素:",i+1);
		scanf("%d",&arr[i]);
	
	} 
	printf("odd number:\n");
	for(i=0;i<n;i++){
		
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		
			
		}

	
	}
	printf("\neven number:\n ");
	for(i=0;i<n;i++){
	 if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}}

	return 0;
}
