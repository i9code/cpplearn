#include "iostream"
using namespace std;




void test_type_convert() {
	bool b = 42;				// ����һ����bool���͵�ֵ��ֵ��bool ���ͣ���ʼֵΪ0 ����Ϊfalse,����Ϊ1
	cout << b << endl;			// ���1 
	int i = b;				    // ����һ��bool���͸�ֵ����bool����ʱ����ʼֵΪfalse��Ϊ0������Ϊ1.
	cout << i << endl;			// ���1
	i = 3.14;					// ���Ѹ�������ֵ������ʱ��ֻ������������С����֮ǰ����
	cout << i << endl;			// ���3
	double pi = i;				// ����һ��������ֵ���������ǣ�С�����ּ�Ϊ0��
	cout << pi << endl;			// ���3.0
	unsigned char c = -1; 
	cout  <<c << endl;	
	signed char c2 = 256;
	cout << c2 << endl;

}


// һ���ֽ�Ϊ8������
// һ��short��long longΪ�̶��ֽ�����int��64λϵͳ��Ϊ�����¼��ݶ�������4���ֽ� long Ϊ8�ֽ�
void test_type_size() {
	bool a = false;
	cout << "bool size: " << sizeof(a) << endl;
	char b = 'c';
	cout << "char size: " << sizeof(b) << endl;
	wchar_t c = 'c';
	cout << "wchar_t size: " << sizeof(c) << endl;
	short d = 2;
	cout << "short size: " << sizeof(d) << endl;
	int e = 3;
	cout << "int size: " << sizeof(e) << endl;
	long f = 4;
	cout << "long size: " << sizeof(f) << endl;
	long long g = 5;
	cout << "long long size: " << sizeof(g) << endl;
	float ff = 5.0;
	cout << "float size: " << sizeof(ff) << endl;
	double df = 5.0;
	cout << "double size: " << sizeof(df) << endl;
	long double ldf = 5.0;
	cout << "long double size: " << sizeof(ldf) << endl;
}

void main()
{
	test_type_convert();

	getchar();
	
}

/*
	float : �����ȸ����� double : ˫���ȸ�����

	���ߵ���Ҫ�������£�

����01.���ڴ���ռ�е��ֽ�����ͬ
�������������ȸ������ڻ��ڴ�ռ4���ֽ�
��������˫���ȸ������ڻ��ڴ�ռ8���ֽ�

����02.��Ч����λ����ͬ
�������������ȸ�������Ч����8λ
��������˫���ȸ�������Ч����16λ

����03.��ֵȡֵ��Χ
  �����������ȸ������ı�ʾ��Χ��-3.40E+38~3.40E+38
��������˫���ȸ������ı�ʾ��Χ��-1.79E+308~-1.79E+308

����04.�ڳ����д����ٶȲ�ͬ
��������һ����˵��CPU�������ȸ��������ٶȱȴ���˫���ȸ�������
		�����������Ĭ��С��Ϊdouble���ͣ��������Ҫ��float�Ļ����������ǿת
*/