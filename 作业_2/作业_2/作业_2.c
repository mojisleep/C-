#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int arr[] = {73,32,99,97,110,32,105,116,33};
//	int i = 0;
//	int az = sizeof(arr) / sizeof(arr[0]);
//	 //sizeof(arr):数组的总大小
//	//sizeof(arr[0]:数组的一个元素大小
//	while (i < az)
//	{
//		printf("%c",arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}

//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float jp = 0.0f;
//	scanf("%d;%f,%f,%f",&id,&c,&math,&jp);
//	printf("The each subject score of No. %d is %f, %f, %f.\n",id,c,math,jp);
//
//}

//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n",n);
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return(a+b+c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", sum(a));
//	}
//	return 0;
//}

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\"<< endl;\n");
//	return 0;
//}

//int main()
//{
//	int i=1;
//	int n = 0;
//	int max = 0;
//	scanf("%d",&max);
//	while(i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	double r = 0.0;//0.0 默认是double类型
//	double v = 0.0;
//	scanf("%lf",&r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf",v);
//	return 0;
//}

//int main()
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d %d",&weight,&high);
//	float bmi = weight / (high / 100.0) / (high / 100.0);
//	printf("%.2f\n",bmi);
//	return 0;
//}