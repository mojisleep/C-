#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//1�����泣��
//2��const���εĳ�����const int a=10;�г������ʵı���
//3��define����ı�ʶ������
//4��ö�ٳ���
//int main()
//{
//    int a=10;//�������
//    a=20;//��ֵ
//    printf("%d\n",a);//20
//    return 0;
//}

//const int[n]=10
//int arr[n]={0}//��ͻ

//#define max 100//ȫ�ֳ���
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
//    //ö�ٳ���
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
//    //%ffiuvy$�ַ���
//    //char�ַ�����
//    //c������û���ַ������ͣ�ֻ���ַ�����
//    char arr1[]="abcdef";//7��һ��'\0'
//    char arr2[]= {'a','b','c','d','e','f'}; //6
//    printf("%s\n",arr1);
//    printf("%s\n",arr2);
//    int len=strlen("abc");//���ַ������ȵ�һ������string length �����˺�����ͷ�ļ�string.h
//    printf("%d\n",len);
//    printf("%d\n",strlen(arr1));
//    return 0;
//}

//ת���ַ�
//����ĸ��
//����(--> [
//����)--> ]

//int main()
//{
//    printf("abc\n\0def");//abc
//    printf("%s\n","are you ok\?\?");//'\��'-��
//    printf("%c\n",'\'');
//    printf("\"");
//    printf("abcd\\0ef\n");
//    printf("\a\a\a");//��������
//    printf("%c\n",'\130');//��ӡascll��88λ��x
//    printf("%d\n",strlen("c:\test\628\test.c"));//14 ת���ַ���һ���ַ�
//    return 0;
//}

//%d-��ӡ����
//%c-��ӡ�ַ�
//%s-��ӡ�ַ���
//%f-��ӡfloat��������
//%lf-��ӡdouble��������
//%zu-��ӡsizeof�ķ���ֵ
//��˫\���Ա�ʾ·�����Է�ֹ\+������ĸ���±��ת���ַ�
//\n����
//\r�س�
//\tˮƽ�Ʊ��
//\ddd ddd��ʾ1~3���˽������� \333
//xdd dd��ʾ2��ʮ���������� \x333


//ע��
/*ע��*/



/*ע��
/*����Ƕ��ע��
*///����������*/

//int main()
//{
//    int g=0;
//    printf("�ú�ѧϰ��(1/0)\n");
//    scanf("%d",&g);
//    if(g==1)
//    {
//        printf("��ǰ;");
//    }
//    else//if(g==0)
//    {
//        printf("ûǰ;");
//    }
//    return 0;
//}

//int main()
//{
//    int g=0;
//    while(g<200)
//    {
//        printf("��ǮǮ:%d\n",g);
//        g++;
//    }
//    if(g>=200)
//    {
//        printf("Ǯ����\n");
//    }
//    else
//    {
//        printf("Ǯ����\n");
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
//	//����
//	scanf("%d %d ",&n1,&n2);
//	//���
//	
//	sum=add(n1,n2);
//	//��ӡ
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

