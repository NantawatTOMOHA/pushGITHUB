#include<stdio.h>
float s,d,result=0;
main() {
	printf("rectangle area \n");
	scanf("%f%f",&s,&d);
	result = s * d;
	printf("%.2f",result);
	return 0;
}