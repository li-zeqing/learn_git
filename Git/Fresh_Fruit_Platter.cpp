#include <stdio.h>
//ʵ��6-2 forѭ����Ӧ�� 
int main(){
    int i, j, k,l,m;	//�ֱ��Ӧˮ�� apple,orange,banana,pineapple,pear
//  ȡֵΪ1ʱ����ˮ����������ƴ�̣�ȡֵΪ0ʱ��ʾ��ˮ������������ˮ��ƴ�� 
    for (i=0; i<2; i++)
        for(j=0; j<2; j++)
            for(k=0; k<2; k++)
            	for(l=0; l<2; l++)
            		for(m=0; m<2; m++){
            			//ֻ��3����ͬ��ˮ����������һ��ˮ��ƴ�� 
            			if(i+j+k+l+m==3){
            				//ÿ����һ��ѭ���ʹ�ӡ��������ˮ��ƴ�̵�ˮ�� 
            				if(i==1)
            					printf("apple ");
            				if(j==1)
            					printf("orange ");
            				if(k==1)
            					printf("banana ");
            				if(l==1)
            					printf("pineapple ");
            				if(m==1)
            					printf("pear ");
            				printf("\n");	//��ӡ��ˮ������ 
						}
         		
					}
                
    return 1;
}

