#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//1、字面常量
//2、const修饰的常变量const int a=10;有常量性质的变量
//3、define定义的标识符常量
//4、枚举常量
//int main()
//{
//    int a=10;//定义变量
//    a=20;//赋值
//    printf("%d\n",a);//20
//    return 0;
//}

//const int[n]=10
//int arr[n]={0}//冲突

//#define max 100//全局常见
//#define a "afgjfdf"
//int main()
//{
//    printf("%d\n",max);
//    printf("%s\n",a);
//    max=900;//error
//    return 0;
//}

//enum color
//{
//    //枚举常量
//    red,
//    green,
//    blue
//};


//int main()
//{
//    enum color c=red;
//    red=10;//error
//    return 0;
//}
//#include <string.h>
//int main()
//{
//    //%ffiuvy$字符串
//    //char字符类型
//    //c语言中没有字符串类型，只有字符类型
//    char arr1[]="abcdef";//7多一个'\0'
//    char arr2[]= {'a','b','c','d','e','f'}; //6
//    printf("%s\n",arr1);
//    printf("%s\n",arr2);
//    int len=strlen("abc");//求字符串长度的一个函数string length 包含此函数的头文件string.h
//    printf("%d\n",len);
//    printf("%d\n",strlen(arr1));
//    return 0;
//}

//转义字符
//三字母词
//？？(--> [
//？？)--> ]

//int main()
//{
//    printf("abc\n\0def");//abc
//    printf("%s\n","are you ok\?\?");//'\？'-？
//    printf("%c\n",'\'');
//    printf("\"");
//    printf("abcd\\0ef\n");
//    printf("\a\a\a");//会有声音
//    printf("%c\n",'\130');//打印ascll码88位的x
//    printf("%d\n",strlen("c:\test\628\test.c"));//14 转义字符算一个字符
//    return 0;
//}

//%d-打印整形
//%c-打印字符
//%s-打印字符串
//%f-打印float类型数据
//%lf-打印double类型数据
//%zu-打印sizeof的返回值
//用双\可以表示路径可以防止\+任意字母导致变成转义字符
//\n换行
//\r回车
//\t水平制表符
//\ddd ddd表示1~3个八进制数字 \333
//xdd dd表示2个十六进制数字 \x333


//注释
/*注释*/



/*注释
/*不能嵌套注释
*///不能用两个*/

//int main()
//{
//    int g=0;
//    printf("好好学习吗？(1/0)\n");
//    scanf("%d",&g);
//    if(g==1)
//    {
//        printf("有前途");
//    }
//    else//if(g==0)
//    {
//        printf("没前途");
//    }
//    return 0;
//}

//int main()
//{
//    int g=0;
//    while(g<200)
//    {
//        printf("攒钱钱:%d\n",g);
//        g++;
//    }
//    if(g>=200)
//    {
//        printf("钱够了\n");
//    }
//    else
//    {
//        printf("钱不够\n");
//    }
//    return 0;
//}

//int add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//
//int main()
//{
//	int n1=0;
//	int n2=0;
//	int sum;
//	//输入
//	scanf("%d %d ",&n1,&n2);
//	//求和
//	
//	sum=add(n1,n2);
//	//打印
//	printf("%d\n",sum);
//	return 0;
//
//}
int main()
{

int arr[10]={0,1,2,3,4,5,6,7,8,9};
int i=0;
while(i<10)
{
	printf("%d ",arr[i]);
	i=i+1;
}
return 0;
}

