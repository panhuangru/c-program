#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,min_i;
	printf("�п�J�H��: ");
	scanf("%d",&n);
	int arr[n];
	int min=arr[0],min_2=arr[0];
	//input 
	for(i=0;i<n;i++){
		printf("��%d�ӤH����: ",i+1);
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
	printf("�ĤG�C���ǥͤ��ƬO:%d",min_2);
	
		
	

	
	return 0;
}
