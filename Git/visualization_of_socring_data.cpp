#include <stdio.h>
#include <stdlib.h>


//�������ݿ��ӻ�
//����ҵ�Ϳ�ѧ�о��У����Ǿ�����Ҫ�����ݽ��з������������ֱ��ͼ����ʽ��ʾ��
//������40��ѧ����������������������ʳƷ�ͷ����������,
//����Ϊ��1-10��10���ȼ�(1��ʾ��ͷ�, 10��ʾ��߷�),
//��ͳ�Ƶ�����,����*��ӡ��ʾ��ͼ��
//���ֿ����������
int main(){
	int a[40]={0};  //����һά�������ڴ�������
	int b[10]={0};
	srand(10);  //����������
	for(int i=0;i<40;i++){
		a[i]=rand()%10+1;
	};
//	for(int i=0;i<40;i++){
//		printf("%d  ",a[i]);
//	};
	printf("\n");
	for(int i=0;i<40;i++){
		switch(a[i]){
			case 1:
				b[0]+=1;
				break;
				
			case 2:
				b[1]+=1;
				break;
			case 3:
				b[2]+=1;
				break;
			case 4:
				b[3]+=1;
				break;
			case 5:
				b[4]+=1;
				break;
			case 6:
				b[5]+=1;
				break;
			case 7:
				b[6]+=1;
				break;
			case 8:
				b[7]+=1;
				break;
			case 9:
				b[8]+=1;
				break;
			case 10:
				b[9]+=1;
				
		};
		
	};
	printf("���� ������� ֱ��ͼ\n");
	for(int i=0;i<10;i++){
		printf("%2d   %2d       ",i+1,b[i]);
		for(int j=0;j<b[i];j++)
			printf("*");
		printf("\n");
	};
	
	return 1;
};
