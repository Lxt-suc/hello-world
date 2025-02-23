#include <iostream>
#include <stdlib.h>
#include "head1.h" 
#include "head2.h" 
/* run this prram using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	SqStack S1,S2;
	LinkQueue Q;
	int i,n,m,t,p;
	ElemType e1,e2;
	LNode* p1;
	char c;
	void InitStack_sq(SqStack &S,int n);
	void Push(SqStack &S,ElemType e);
	void Pop(SqStack &S,ElemType &e);
	void InitQueue_L(LinkQueue &Q);
	void Enqueue_L(LinkQueue &Q,ElemType e);
	void DeQueue_L(LinkQueue &Q,ElemType &e);
	printf("������ͣ�����ͱ���ĳ��ȣ�");
	scanf("%d%d",&n,&m);
	c=getchar(); 
	InitStack_sq(S1,n);
	InitStack_sq(S2,n);
	InitQueue_L(Q);
	printf("���복����Ϣ���ݣ�");
	scanf("%c%d%d",&e1.c,&e1.number,&e1.time); 
	while(e1.c!='E'){
		switch(e1.c){
			case'A':if(S1.top==n-1){
			         if(Q.number==m){
			          printf("�������������⣬ͣ�����ͱ��������\n");return 0;}
			          Enqueue_L(Q,e1);
			          printf("%d�ڱ���ϵ�λ��Ϊ%d\n",e1.number,Q.number);
			        }
			        else{
			        Push(S1,e1);
			        printf("%d��ͣ������λ��Ϊ%d\n",e1.number,S1.top+1);}
			        break;
			case'D':while(S1.elem[S1.top].number!=e1.number){
				    Pop(S1,e2);
				    Push(S2,e2);
			        }
					Pop(S1,e2);
					t=e1.time-e2.time;
					p=2*t;
					printf("%d��ͣ��ʱ��Ϊ%d������Ϊ%d\n",e1.number,t,p);
					while(S2.top!=-1){
						Pop(S2,e2);
						Push(S1,e2);
					}
					break;
			case'P': i=S1.top;
			         printf("����ͣ������ĳ�Ϊ��\n");
			         while(i!=-1){
			         	printf("%d\n",S1.elem[i].number);
			         	i=i-1;
					 }
					 break;
			case'W':printf("���ں򳵳���ĳ�Ϊ��\n");
			        p1=Q.front->next;
			        while(p1!=NULL){
			        	printf("%d\n",p1->data.number);
			        	p1=p1->next;
					}
					break;
	}
	scanf("%c%d%d",&e1.c,&e1.number,&e1.time); 
	}
return 0;	 
}
