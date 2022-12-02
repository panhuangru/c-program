#include <stdio.h>
#include <stdlib.h>
#define LENGTH 10 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int i=0,sum=0;
	int number[5]={0,1,2,3,4};
	int length=sizeof(number)/sizeof(number[1]);
	printf("sizeof(number)=%d sizeof(number[0])=%d\n", sizeof(number),sizeof(number[0]));
	printf("length=%d\n",length);
	for(i=0;i<length;i++){
		if(i%2==0){
			number[i]=90;
		}
		else{
			number[i]=60;
			
		}
		printf("%d ",number[i]);
	    sum+=number[i];
		}
	printf("\n¥­§¡:%d",sum/length);

	return 0;
}
