#include "iostream"
using namespace std;

//��ͳ�����ؼ��� typedef
typedef double  wages;  // wages ��double��ͬ���

// ���﷨
using INT = int; // int


typedef char *pstring;
int main() 
{
	pstring cstr = 0; // cstr��ָ��char�ĳ���ָ�� 

	// auto ����ı��������г�ʼֵ
	auto i = 1;
	// ʹ��autoҲ����һ����������������������Ϊһ���������ֻ����һ����������
	auto i = 0, *p = &i;// ��ȷ��i��������p������ָ��
	auto sz = 0, pi = 3.14;// ����sz��pi���Ͳ�һ��
	return 0;
}