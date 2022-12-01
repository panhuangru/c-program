#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,min_i;
	printf("請輸入人數: ");
	scanf("%d",&n);
	int arr[n];
	int min=arr[0],min_2=arr[0];
	//input 
	for(i=0;i<n;i++){
		printf("第%d個人分數: ",i+1);
		scanf("%d",&arr[i]);
	}
	//find min
	for(i=0;i<n;i++){
		if(arr[i]<=min){
			min=arr[i];
			min_i=i; 
			}
	}
	//find min2
	for(i=0;i<n;i++){
		if(i!=min_i){
			if(arr[i]<=min_2){
				min_2=arr[i];
				
				
				
			}
		}
	}
	printf("第二低的學生分數是:%d",min_2);
	
		
	

	
	return 0;
}
