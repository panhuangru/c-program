#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,sum=0;	
    printf("計算平均分數:\n");
	printf("---------------------------\n");
    printf("輸入人數: "); 
	scanf("%d",&n);
	int arr[n];


	for(i=0;i<n;i++){
		printf("學生第%d為分數:",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i]; 
	}
	printf("平均分數%f:",(float)sum/n);
	return 0;
}
