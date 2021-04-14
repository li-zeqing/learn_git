#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct PNode
{
	float coef;	//ϵ�� 
	int expn;	//ָ��
	struct PNode *next;	//ָ���� 
 }PNode,*Polynomial;

//����n��ϵ����ָ����������ʾ����ʽ����������P 
void CreatePloyn(Polynomial &P,int n )
{
	P = new PNode;
	P->next = NULL;	//�Ƚ���һ����ͷ���ĵ�����
	for(int i = 1;i<=n;++i)
	{
		PNode *s = new PNode;	//�����½�� 
		cout<<"�������"<<i<<"��ϵ��"; 
		cin>>s->coef;	//����ϵ��
		cout<<"�������"<<i<<"��ָ��";
		cin>>s->expn;	//����ָ��
		PNode *pre = P;	//pre���ڱ���q��ǰ������ֵΪͷ���P 
		PNode *q = P->next;	//q��ʼ����ָ����Ԫ��� 
		//�洢��ʽ��([��][...][С])  
		while(q && q->expn>s->expn)	//ͨ���Ƚ�ָ���ҵ���һ������������ָ������*q 
		{
			pre = q;
			q = q->next;
		}
		s->next = q;	//��������s���뵽q����ǰ�����pre֮�� 
		pre->next = s; 
	 } 
}
//��ӡ������
void ShowPoly(Polynomial P)
{	
	P = P->next;
	while(P!=NULL)
	{
		if(P->expn>0)
		{
			cout<<P->coef<<"x^"<<P->expn;
			if(P->next)
			{
				if(P->next->coef>0)
				cout<<"+";
			}
		}		
		else
			cout<<P->coef;		
		P = P->next;
	}
		
 } 	

//����ʽ�����
void AddPolyn(Polynomial &Pa,Polynomial Pb)
{
	//����ʽ�ӷ���Pa=Pa+Pb��������������ʽ�Ľ�㹹��"�Ͷ���ʽ"
	PNode *p1 = Pa->next;	//p1ָ��Pa����Ԫ��� 
	PNode *p2 = Pb->next; 	//p2ָ��Pb����Ԫ���
	PNode *p3 = Pa;	//p3ָ�򡰺Ͷ���ʽ����㣬��ֵΪPa
	while(p1&&p2)
	{
		if(p1->expn==p2->expn)	//ָ�����ʱ 
		{
			float sum = p1->coef+p2->coef;	//sum������ָͬ�����ϵ���� 
			if(sum!=0)	//ϵ����Ϊ�� 
			{
				p1->coef = sum;	//�޸�Pa��ǰ����ϵ�� 
				p3 = p3->next;	//p3ָ���һ�� 
				p1 = p1->next;	//p1ָ���һ�� 
				PNode *r =p2; p2=p2->next; delete r;	//ɾ����ǰ��㣬p2ָ���һ�� 
			}
			else
			{
				p3->next = p3->next->next;
				delete p1;
				p1 = p3->next;
				p2 = p2->next; 
			}
		}
		
		else if(p1->expn<p2->expn)	//Pa��ǰ����ָ����Сʱ 
		{
			p2->next = p1;
			p3->next = p2;
			p3 = p3->next;
			p2 = p2->next;
			
		}
		else	//Pa��ǰ����ָ���ϴ�ʱ 
		{
			p1 = p1->next;
			p3 = p3->next;
		}
	}	
//	p3->next = p1?p1:p2;	//������ʽ����p1����p2��Ϊ��ʱ������ǿն���ʽ��ʣ���
	if(p1=NULL) p3->next = p2;
	delete Pb;	//�ͷ�Pb��ͷ��� 

 } 

int main(){
	Polynomial Pa;
	Polynomial Pb;
	int N1,N2; 
	cout<<"�������һ������ʽ���м��N1=";
	cin>>N1;
	cout<<"�������һ������ʽ"<<'\n';
	CreatePloyn(Pa,N1);
	ShowPoly(Pa);
	cout<<'\n';
	cout<<"������ڶ�������ʽ���м��N2=";
	cin>>N2;
	cout<<"������ڶ�������ʽ"<<'\n';
	CreatePloyn(Pb,N2);
	ShowPoly(Pb);
	AddPolyn(Pa,Pb);
	cout<<'\n';
	cout<<"������ʽ��ӽ��Ϊ��";
	ShowPoly(Pa);
	return 0;
}
