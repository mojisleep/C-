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

//0---����0
//��0��---�ַ�-ASCIIֵ��48
//��\0'-�ַ�-ASCIIֵ��0
//EOF-end of file�ļ��Ľ�����־�Ǹ�һ

//int main()
//{
//	int arr[10];//10��
//	int arr2[] = { 10 };//1��
//}

#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));//7���ֽ�
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'b','i','t' };//���ֵ
//	char arr2[4]={ 'b','i','t' };//����ȫ��ʼ����t�����㡣
//	printf("%d\n", strlen(arr));//���ֵ
//  printf("%d\n", strlen(arr2));//3
//}


//int main()
//{
//	int n = 10;
//	int arr[n];//vs��֧�ֱ䳤���顣
//	//c99��׼֮ǰ�������С�ó������ʽ������ʾ��c99��׼֮�������С�����ñ�����ʾ����������б䳤���顣
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


