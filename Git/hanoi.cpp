#include <stdio.h>
int main()
{
	void hanoi(int n, char x, char y, char z);
	int m;	//m����Ҫ�ƶ���������
	printf("input the number of diskes:");
	scanf("%d",&m);	//����������
	printf("The step to moveing %d diskes:\n",m);
	hanoi(m,'A','B','C');	//ִ���ƶ�����
	return 0; 
	 
}
//����hanoi����
void hanoi(int n, char x, char y, char z)
{
	void move(char a,char b);	//�Ե��õ�move������������ 
	if(n==1) move(x,z);
	else
	{
		hanoi(n-1, x, z, y);
		move(x, z);
		hanoi(n-1, y, x, z);
	}
 } 
 //����move����
 void move(char a, char b)
 {
 	printf("%c-->%c\n",a,b);	//�ƶ�һ�����ӵ�·�� 
  } 
