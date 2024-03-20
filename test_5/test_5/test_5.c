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
//static修饰局部.全局变量.函授.
//static修饰局部变量的时候,局部变量出了作用域,不销毁的.
//本质上,static修饰局部变量的储存位置的.影响了变量的生命周期,生命周期变长,和程序的生命周期一样.



////修饰全局变量
////声明外部符号
//extern int a;
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//寄存器变量
//	register int num = 3;//3放入寄存器中
//	return 0;
//}

////define定义标识符常量
//#define NUM 100
//
////      宏名     宏体      宏的类型,参数是无类型
//#define ADD(x,y) ((x)+(y))
////define 定义宏
////宏是有参数
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
//	int a = 10;//向内存申请4个字节,储存10.
//	//&a是取地址操作符
//	printf("%p\n", &a);//打印指针地址
//	int* p= &a;//p是指针变量,是存放地址的
//	*p = 20;//解引用操作符,意思就是通过p中存放的的地址,找到p所指的对象,*p就是p指向的对象.
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//32位机器上的指针变量的的大小是4个字节 32bit位-4byte.
//	//64位机器上的指针变量的的大小是8个字节 64bit位-8byte.
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
////学生
//struct Stu
//{
//	//成员
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
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20, "nan", "15596668862"};
//	
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//
