#include <stdio.h>
int main()
{
	void hanoi(int n, char x, char y, char z);
	int m;	//m是需要移动的盘子数
	printf("input the number of diskes:");
	scanf("%d",&m);	//输入盘子数
	printf("The step to moveing %d diskes:\n",m);
	hanoi(m,'A','B','C');	//执行移动盘子
	return 0; 
	 
}
//定义hanoi函数
void hanoi(int n, char x, char y, char z)
{
	void move(char a,char b);	//对调用的move函数进行声明 
	if(n==1) move(x,z);
	else
	{
		hanoi(n-1, x, z, y);
		move(x, z);
		hanoi(n-1, y, x, z);
	}
 } 
 //定义move函数
 void move(char a, char b)
 {
 	printf("%c-->%c\n",a,b);	//移动一个盘子的路径 
  } 
