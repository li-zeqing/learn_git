#include <stdio.h>
#include <stdlib.h>


//评分数据可视化
//在行业和科学研究中，人们经常需要对数据进行分析并将结果以直方图的形式显示。
//假设有40个学生被邀请来给自助餐厅的食品和服务质量打分,
//分数为从1-10的10个等级(1表示最低分, 10表示最高分),
//试统计调查结果,并用*打印出示意图。
//评分可以随机产生
int main(){
	int a[40]={0};  //创建一维数组用于存打分数据
	int b[10]={0};
	srand(10);  //设置种子数
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
	printf("分数 打分人数 直方图\n");
	for(int i=0;i<10;i++){
		printf("%2d   %2d       ",i+1,b[i]);
		for(int j=0;j<b[i];j++)
			printf("*");
		printf("\n");
	};
	
	return 1;
};
