#define _CRT_SECURE_NO_WARNINGS 1

//typedef unsigned int uint;
//typedef struct node
//{
//	int data;
//	struct node*next;
//}node;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 2;
//	struct node n;
//	node n2;
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//static���ξֲ�.ȫ�ֱ���.����.
//static���ξֲ�������ʱ��,�ֲ���������������,�����ٵ�.
//������,static���ξֲ������Ĵ���λ�õ�.Ӱ���˱�������������,�������ڱ䳤,�ͳ������������һ��.



////����ȫ�ֱ���
////�����ⲿ����
//extern int a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//3����Ĵ�����
//	return 0;
//}

////define�����ʶ������
//#define NUM 100
//
////      ����     ����      �������,������������
//#define ADD(x,y) ((x)+(y))
////define �����
////�����в���
//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a = 10;//���ڴ�����4���ֽ�,����10.
//	//&a��ȡ��ַ������
//	printf("%p\n", &a);//��ӡָ���ַ
//	int* p= &a;//p��ָ�����,�Ǵ�ŵ�ַ��
//	*p = 20;//�����ò�����,��˼����ͨ��p�д�ŵĵĵ�ַ,�ҵ�p��ָ�Ķ���,*p����pָ��Ķ���.
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//32λ�����ϵ�ָ������ĵĴ�С��4���ֽ� 32bitλ-4byte.
//	//64λ�����ϵ�ָ������ĵĴ�С��8���ֽ� 64bitλ-8byte.
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}


//int main()
//{
//	char* pc;
//	int* p;
//
//	int *p1, *p2, *p3;
//	return 0;
//}
//
////ѧ��
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20, "nan", "15596668862"};
//	
//	//�ṹ�����.��Ա��
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//
