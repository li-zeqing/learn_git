#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//���϶��뻪�϶ȵ��໥ת�� 
 
int main()
{	//����һ��char���͵��������洢������ַ��� �硰38.5C�����ߡ�100.5F�� 
    char s[10];
    printf("���������λ���¶ȣ�"); 
    scanf("%s",&s);
    //��forѭ������λ��ȡ������ss[10]����ǡ�38.5�����ߡ�100.5���������ַ��� 
    char ss[10];
	for(int i = 0;i<int(strlen(s))-1;i++) {
		 ss[i] = s[i];
	}
	//ͨ��if else �ж�������ĵ�λ��C��c����F��f���ٽ�����Ӧ���¶�ת�� 
	if (s[int(strlen(s))-1] == 'C'|s[int(strlen(s))-1] == 'c')
	{
    	float a = atof(ss);		//atof()�������ַ���ת��Ϊ˫���ȸ�����ֵ 
		float f =(9/5.0)*a+32; // ����Ϊ���϶ȣ�ת��Ϊ���϶ȸ�ֵ��f 
		printf("��������¶�ת��Ϊ���϶ȣ�"); 
		printf("%.1fF\n",f);
	}
    else if(s[int(strlen(s))-1] == 'F'|s[int(strlen(s))-1] == 'f')
    {
    	float f = atof(ss);
		float a =(5/9.0)*(f-32);	// ����Ϊ���϶ȣ�ת��Ϊ���϶ȸ�ֵ��a 
		printf("��������¶�ת��Ϊ���϶ȣ�"); 
		printf("%.1fC\n",a);
	}
	else
		printf("������ĵ�λ����"); //�������ĵ�λ��ΪC��c��F��f�е�һ�����ж�Ϊ���뵥λ���� 
	
    return 0;
}


