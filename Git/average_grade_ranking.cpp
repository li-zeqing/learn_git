#include <stdio.h>

# define N 4
# define L 4

//��������
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
////ð������
//void BubbleSort(int a[],int n){
//	int i,j;
//	for(i=0;i<n;i++){
//		bool flag = false;
//		for(j=1;j<n-1;j++){
//			if(a[j]<a[j-1]){
//				Swap(a[j-1],a[j]);  //��������������
//				flag = true;
//			}
//		}
//		if(flag==false)  //δ����ʱ�������Ѿ�ֹͣ��
//			return;
//	}
//};

int main(){
	

int a[4][6];
int i=0;
for(i=0;i<4;i++){
	printf("�����������%d��ѧ����ѧ�ź�3�ųɼ���",i+1);
	scanf("%d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
	int sum=a[i][1]+a[i][2]+a[i][3];
	int averge=sum/3;
	a[i][4]=averge;
	printf("%d %d %d %d %d",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
};

int (*p)[6];//ָ������a������ָ��
p=a;
//��ÿһ�����ݿ���һ����Ԫ ��ÿһ����Ԫ����ð�������˼������ɵ͵�������
for(i=0;i<N-1;i++){
	Swap(*(p+i),*(p+i+1));//һ����Ԫ���ݺ���һ����Ԫ���ݽ��бȽϲ�����(һ�к���һ�н��бȽϲ�������
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
