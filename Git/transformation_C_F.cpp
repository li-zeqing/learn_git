#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//摄氏度与华氏度的相互转化 
 
int main()
{	//定义一个char类型的数组来存储输入的字符串 如“38.5C”或者“100.5F” 
    char s[10];
    printf("请输入带单位的温度："); 
    scanf("%s",&s);
    //用for循环将单位截取掉，则ss[10]存的是“38.5”或者“100.5”这样的字符串 
    char ss[10];
	for(int i = 0;i<int(strlen(s))-1;i++) {
		 ss[i] = s[i];
	}
	//通过if else 判断你输入的单位是C、c还是F、f，再进行相应的温度转换 
	if (s[int(strlen(s))-1] == 'C'|s[int(strlen(s))-1] == 'c')
	{
    	float a = atof(ss);		//atof()函数将字符串转换为双精度浮点型值 
		float f =(9/5.0)*a+32; // 输入为摄氏度，转化为华氏度赋值给f 
		printf("你输入的温度转化为华氏度："); 
		printf("%.1fF\n",f);
	}
    else if(s[int(strlen(s))-1] == 'F'|s[int(strlen(s))-1] == 'f')
    {
    	float f = atof(ss);
		float a =(5/9.0)*(f-32);	// 输入为华氏度，转化为摄氏度赋值给a 
		printf("你输入的温度转化为摄氏度："); 
		printf("%.1fC\n",a);
	}
	else
		printf("你输入的单位有误！"); //如果输入的单位不为C、c、F、f中的一个即判定为输入单位有误 
	
    return 0;
}


