#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//int a = 0;
//	//if (a == 3)
//	//	printf("hehe\n");
//	//return 0;
//	//int age = 20;
//	//if (age < 10)
//	//{
//	//	printf("δ����\n");
//	//	printf("��������\n");
//	//}
//	//else
//	//	printf("����\n");
//	//return 0;
//
//	/*int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����");
//	else if (age >= 18 && age < 20)
//		printf("����");
//	else if (age >= 20 && age < 40)
//		printf("����");
//	else if (age >= 40 && age < 60)
//		printf("׳��");
//	else if (age >= 60 && age < 100)
//		printf("����");
//	else 
//		printf("������");
//	return 0;*/
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a == 1)
//		if (b == 0)
//			printf("hehe\n");
//		else
//			printf("hehe\n");
//	return 0;
//}

//1.����������(������,�淶)
//2.�ո� ���� ����

//int test()
//{
//	int a = 0;
//	if (a == 3)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf(" ����\n");
//	else
//		printf("no\n");
//	//return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		//if (i % 2 == 1)
//		//	printf("%d ", i);
//		//i++;
//		printf("$d ", i);
//		i += 2;
//	}
//	return 0;
//}






//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//	printf("����1\n");
//	//else if (2 == day)
//	//	printf("����2\n");
//	//else if(3 == day)
//	//	printf("����3\n");
//	//else ....
//	int n = 1;
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//
//	return 0;
//}
//


//#include <stdio.h>
//
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1: n++;
//        case 2: m++; n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}

//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}

int main()
{
	char password[20] = { "0" };
	printf("����������:");
	scanf("%s", password);
	getchar();//�Ե�\n.
	printf("��ȷ������(Y/N)");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}