#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,sum=0;	
    printf("璸衡キАだ计:\n");
	printf("---------------------------\n");
    printf("块计: "); 
	scanf("%d",&n);
	int arr[n];


	for(i=0;i<n;i++){
		printf("厩ネ材%dだ计:",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i]; 
	}
	printf("キАだ计%f:",(float)sum/n);
	return 0;
}
