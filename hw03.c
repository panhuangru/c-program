#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char str[10];
	float a;
	float b;
	printf("請輸入學號：");
	scanf("%s",&str);
	printf("請輸入其中考分數：");
	scanf("%f",&a);
	printf("請輸入期末考分數：");
	scanf("%f",&b);
	printf("學號：%s\n",str);
	printf("其中分數：%.2f\n",a);
	printf("期末分數：%.2f\n",b);
	printf("其中考與期末考平均分數：%.2f\n",(a+b)/2);
	return 0;
}
