#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 7 / 2;//��������
//	int b = 7 % 2;//ȡģ����,%����ֻ����������
//	printf("%d\n", a);//3
//	printf("%d\n", b);//1
//	//���ŵ����˶���������ʱ��ִ�������������������ֻҪ��һ����������ִ�и�����������
//	float c = 7.0/ 2.0;
//	printf("%.2f\n", c);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ20
//	a = a + 3;//a=23
//	a += 3;
//
//	a = a - 3;
//	a -= 3;//ͬ��
//
//	return 0;
//}

//+��˫Ŀ���������Ӻ�������������������
// ��Ŀ������������˼��ֻ��һ���������Ĳ�����



//��0��ʾ��   ��1233445567889
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

//sizeof�ǵ�Ŀ������

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
//	printf("%d\n", sizeof(arr));//40 ���������������Ĵ�С,��λ���ֽ�.
//	printf("%d\n", sizeof(arr[0]));//4
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//10
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = a++;//����++,��ʹ��,��++;
//	//int b = a; a = a + 1;
//
//	//int a = 10;
//	//int b = ++a;//ǰ++,��++,��ʹ��;
//	//a = a + 1;b=a;
// return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//	//3.14���渡����,������Ĭ�����Ϊdoubie����
//}

//=ֻ�ܸ�ֵ
//==���бȽ�. ��if(a==0)





//&& �߼���
//|| �߼���
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
//	int r = (a > b ? a: b);//��Ŀ������
//	printf("%d\n",r);
//	return 0;
//}

//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//���ű��ʽ���ص���:���������Դμ���,�������ʽ�Ľ�������һ�����ʽ�Ľ��.
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
//	arr[n] = 20;//[]�����±����ò�����;arr��3����[]�Ĳ�����
//	return 0;
//}

