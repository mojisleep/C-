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
//	//	printf("未成年\n");
//	//	printf("不能饮酒\n");
//	//}
//	//else
//	//	printf("成年\n");
//	//return 0;
//
//	/*int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年");
//	else if (age >= 18 && age < 20)
//		printf("青年");
//	else if (age >= 20 && age < 40)
//		printf("中年");
//	else if (age >= 40 && age < 60)
//		printf("壮年");
//	else if (age >= 60 && age < 100)
//		printf("老年");
//	else 
//		printf("老寿星");
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

//1.变量的命名(有意义,规范)
//2.空格 空行 换行

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
//		printf(" 奇数\n");
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
//	//	printf("星期1\n");
//	//else if (2 == day)
//	//	printf("星期2\n");
//	//else if(3 == day)
//	//	printf("星期3\n");
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
//		printf("选择错误\n");
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
//        {//switch允许嵌套使用
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
	printf("请输入密码:");
	scanf("%s", password);
	getchar();//吃掉\n.
	printf("请确认密码(Y/N)");
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