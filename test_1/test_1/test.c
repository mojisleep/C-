#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//std_��׼
//i-input
//o-output


//printf��һ���⺯��
//ר��������ӡ���ݵ�

//int main()
//C����һ��Ҫ��main����
//main�������ҽ���1��
//{
//    printf("Hello world");
//    return 0;
//}


//���ϵ�д��-���Ƽ�
//void main()
//{}
//int main()
//{
//    printf("%zu\n",sizeof(char));//1�ֽ�=8������λ
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


//�����ͳ����ĸ���
//������Ϊ�ֲ���ȫ��
//�ֲ�����-{}�ڲ�����ı���
//ȫ�ֱ���-{}�ⲿ����ı���
//int a=10;//ȫ�ֱ���
//int main()
//{
//    int b=5;
//    return 0;//�ֲ�����
//}

//дһ������,����2�������ĺ�
//int main()
//{
//    int a=0;
//    int b=0;//��ʼ��
//
//    //������������
//    scanf("%d %d",&a,&b);
//
//    //���
//    int c=a+b;
//
//    //���
//    printf("%d",c);
//    return 0;
//}

//������������
//�ֲ�����:�Ǳ������ڵľֲ���Χ
//ȫ�ֱ���:������Χ����������
extern int a;//ȫ�ֱ���(���������ⲿ�ķ���)
void e()
{

    printf("a==%d\n",a);
}



int main()
{
    e();
    {
        int a=10;//�ֲ�����
        printf("a=%d\n",a);
    }
    printf("a=%d\n",a);

}

//��������������
//�ֲ�����:�����������������ڿ�ʼ����ȥ����""
//ȫ�ֱ���:��������
//�ֲ�����