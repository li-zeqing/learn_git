#include <stdio.h>

# define N 4
# define L 4

//交换函数
void Swap(int a[], int b[]){
	if(a[L]<b[L]){
		for(int i=0;i<N;i++){
			int temp=a[i];
            a[i]=b[i];
            b[i]=temp;
		}
	}
	return;
};
////冒泡排序法
//void BubbleSort(int a[],int n){
//	int i,j;
//	for(i=0;i<n;i++){
//		bool flag = false;
//		for(j=1;j<n-1;j++){
//			if(a[j]<a[j-1]){
//				Swap(a[j-1],a[j]);  //交换函数，降序
//				flag = true;
//			}
//		}
//		if(flag==false)  //未交换时，排序已经停止了
//			return;
//	}
//};

int main(){
	

int a[4][6];
int i=0;
for(i=0;i<4;i++){
	printf("请依次输入第%d个学生的学号和3门成绩：",i+1);
	scanf("%d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
	int sum=a[i][1]+a[i][2]+a[i][3];
	int averge=sum/3;
	a[i][4]=averge;
	printf("%d %d %d %d %d",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
};

int (*p)[6];//指向数组a的数组指针
p=a;
//把每一行数据看作一个单元 对每一个单元利用冒泡排序的思想进行由低到高排序
for(i=0;i<N-1;i++){
	Swap(*(p+i),*(p+i+1));//一个单元数据和下一个单元数据进行比较并交换(一行和下一行进行比较并交换）
}
//int b[4];
//for(int i=0;i<4;i++){
//	b[i] =a[i][4];
//	printf("%d",b[i]);
//};
//BubbleSort(b,4);
for(int i=0;i<4;i++){
    for(int j=0;j<6;j++)
    printf("%d ",*(*(p+i)+j));
    printf("\n");
 }
return 0;

};
