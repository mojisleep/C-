#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//std_标准
//i-input
//o-output


//printf是一个库函数
//专门用来打印数据的

//int main()
//C语言一定要有main函数
//main函数有且仅有1个
//{
//    printf("Hello world");
//    return 0;
//}


//古老的写法-不推荐
//void main()
//{}
//int main()
//{
//    printf("%zu\n",sizeof(char));//1字节=8个比特位
//    printf("%zu\n",sizeof(short));//2
//    printf("%zu\n",sizeof(int));//4
//    printf("%zu\n",sizeof(long));//8
//    printf("%zu\n",sizeof(long long));//8
//    printf("%zu\n",sizeof(float));//4
//    printf("%zu\n",sizeof(double));//8
//}
//int main()
//{
//    int age=29;
//    double price=66.6;
//    return 0;
//}


//变量和常量的概念
//变量分为局部和全局
//局部变量-{}内部定义的变量
//全局变量-{}外部定义的变量
//int a=10;//全局变量
//int main()
//{
//    int b=5;
//    return 0;//局部变量
//}

//写一个代码,计算2个整数的和
//int main()
//{
//    int a=0;
//    int b=0;//初始化
//
//    //输入两个整数
//    scanf("%d %d",&a,&b);
//
//    //求和
//    int c=a+b;
//
//    //输出
//    printf("%d",c);
//    return 0;
//}

//变量的作用域
//局部变量:是变量所在的局部范围
//全局变量:作用域范围是整个工程
extern int a;//全局变量(声明来自外部的符号)
void e()
{

    printf("a==%d\n",a);
}



int main()
{
    e();
    {
        int a=10;//局部变量
        printf("a=%d\n",a);
    }
    printf("a=%d\n",a);

}

//变量的生命周期
//局部变量:进入作用域生命周期开始，出去结束""
//全局变量:整个工程
//局部优先