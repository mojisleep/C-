#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 7 / 2;//除法运算
//	int b = 7 % 2;//取模运算,%两端只能是整数。
//	printf("%d\n", a);//3
//	printf("%d\n", b);//1
//	//除号的两端都是整数的时候，执行整数除法。如果两端只要有一个浮点数就执行浮点数除法。
//	float c = 7.0/ 2.0;
//	printf("%.2f\n", c);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值20
//	a = a + 3;//a=23
//	a += 3;
//
//	a = a - 3;
//	a -= 3;//同上
//
//	return 0;
//}

//+是双目操作符，加号两端有两个操作符。
// 单目操作符，顾名思义只有一个操作数的操作符



//非0表示真   如1233445567889
//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("hehe\n");
//
//	}
//	return 0;
//}

//sizeof是单目操作符

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小,单位是字节.
//	printf("%d\n", sizeof(arr[0]));//4
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = a++;//后置++,先使用,后++;
//	//int b = a; a = a + 1;
//
//	//int a = 10;
//	//int b = ++a;//前++,先++,后使用;
//	//a = a + 1;b=a;
// return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//	//3.14字面浮点数,编译器默认理解为doubie类型
//}

//=只能赋值
//==进行比较. 如if(a==0)





//&& 逻辑与
//|| 逻辑或
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a || b)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int r = (a > b ? a: b);//三目操作符
//	printf("%d\n",r);
//	return 0;
//}

//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是:从左向右以次计算,整个表达式的结果是最后一个表达式的结果.
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//       c=8   a=28  c=5
//	int r = (c=a-2,a=b+c,c-3);
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]就是下标引用操作符;arr和3就是[]的操作符
//	return 0;
//}

