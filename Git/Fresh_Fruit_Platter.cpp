#include <stdio.h>
//实验6-2 for循环的应用 
int main(){
    int i, j, k,l,m;	//分别对应水果 apple,orange,banana,pineapple,pear
//  取值为1时，该水果参与制作拼盘，取值为0时表示该水果不参与制作水果拼盘 
    for (i=0; i<2; i++)
        for(j=0; j<2; j++)
            for(k=0; k<2; k++)
            	for(l=0; l<2; l++)
            		for(m=0; m<2; m++){
            			//只有3个不同的水果才能制作一个水果拼盘 
            			if(i+j+k+l+m==3){
            				//每进行一次循环就打印参与制作水果拼盘的水果 
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
            				printf("\n");	//打印完水果换行 
						}
         		
					}
                
    return 1;
}

