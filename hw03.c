#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char str[10];
	float a;
	float b;
	printf("�п�J�Ǹ��G");
	scanf("%s",&str);
	printf("�п�J�䤤�Ҥ��ơG");
	scanf("%f",&a);
	printf("�п�J�����Ҥ��ơG");
	scanf("%f",&b);
	printf("�Ǹ��G%s\n",str);
	printf("�䤤���ơG%.2f\n",a);
	printf("�������ơG%.2f\n",b);
	printf("�䤤�һP�����ҥ������ơG%.2f\n",(a+b)/2);
	return 0;
}
