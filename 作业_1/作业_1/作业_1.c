#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int Add(int x,int y)
//{
//	int z=9;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	int c=Add(a,b);
//	return 0;
//
//}

//int num=10;
//int main()
//{
//	int num=1;
//	printf("num=%d\n", num);//1
//	return 0;
//}

//int main()
//{
//	int a=40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", r);
//	return 0;
//}

//0---数字0
//‘0’---字符-ASCII值是48
//‘\0'-字符-ASCII值是0
//EOF-end of file文件的结束标志是负一

//int main()
//{
//	int arr[10];//10个
//	int arr2[] = { 10 };//1个
//}

#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));//7个字节
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'b','i','t' };//随机值
//	char arr2[4]={ 'b','i','t' };//不完全初始化。t后是零。
//	printf("%d\n", strlen(arr));//随机值
//  printf("%d\n", strlen(arr2));//3
//}


//int main()
//{
//	int n = 10;
//	int arr[n];//vs不支持变长数组。
//	//c99标准之前，数组大小用常量表达式或常量表示。c99标准之后，数组大小可以用变量表示，这种数组叫变长数组。
//	int arr[1 + 8];
//	return 0;
//}

//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, % b);
//	/ int r = max(a, b);
//	printf("%d\n", r);
//	return 0;
//}

int main()
{
	int x = 0;
	int y = 0;
	scanf("%d",&x);
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else
		y = 1;
	printf("%d\n", y);
	return 0;

}


