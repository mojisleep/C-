#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 1;//初始化
//	while (i<=10)//判断
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;//调整
//	}
//
//	return 0;
//}
 //continue会跳过后面的代码,break会终止程序

//打印1~10

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i = 12;
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	////0~9
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//int i = 0;
//	//for (i = 100; i <= 200; i++)
//	//{
//	//}
//
//	//for循环的判断部分省略意味这判断会恒成立
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 0;
//	//int j = 0;
//
//	//for (i=0; i < 3; i++)
//	//{
//	//	for (i=0; j < 3; j++)
//	//	{
//	//		printf("hehe\n");
//	//	}
//	//}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//
//	do 
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}	
//	while (i <= 10);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum =sum+ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	int i = 0;
//	int az = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < az; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了%d\n",i);
//			break;
//		}
//	}
//	if (i==az)
//	{
//		printf("没找到");
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10;

	//在一个有序数组中查找具体的某个数字n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	return 0;
}