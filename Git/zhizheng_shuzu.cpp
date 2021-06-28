#include <stdio.h>
int main(){
	int a[10] = {19,17,20,18,16,22,24,15,23,25};
	int i, *p=a;
	for(i=0;i<10;i++)
		printf("%d ",a[i]);	//用数组名加下标
	printf("%\n");
	for(i=0;i<10;i++)
		printf("%d ",*(a+i)); //通过数组名计算数组元素地址，知道元素
	printf("%\n");
	for(i=0;i<10;i++)
		printf("%d ",*(p+i));	//通过指针变量计算数组元素地址，知道元素 
	printf("%\n");
	for(p;p<(a+10);p++)
		printf("%d ",*p);	//通过指针变量先后指向各元素 
	printf("%\n");
	
	return 0;
} 
