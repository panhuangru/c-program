#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,sum=0;	
    printf("�p�⥭������:\n");
	printf("---------------------------\n");
    printf("��J�H��: "); 
	scanf("%d",&n);
	int arr[n];


	for(i=0;i<n;i++){
		printf("�ǥͲ�%d������:",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i]; 
	}
	printf("��������%f:",(float)sum/n);
	return 0;
}
