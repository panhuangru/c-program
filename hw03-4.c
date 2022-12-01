#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n=3;
	int arr[n],i,j;
	printf("請輸入三個數:\n");
	for(i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	printf("從小到大:");
	for(i=0;i<2;i++){
		for(j=1;j<3;j++){
		    if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			
				printf("%d",arr[i]);
			
			
			}
			else if(arr[1]!=arr[j])
			printf("%d",arr[i]);
		}
	}

	return 0;
}
