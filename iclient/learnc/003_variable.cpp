#include "iostream"
using namespace std;

// ��������ֻ�ܱ�����һ�Σ����ǿ���������� 


// ��������Ļ�����ʽ������������˵���������������һ�����߶����������ɵ��б����б������Զ��÷ָ�������ԷֺŽ���
// ��ʼ�����Ǹ�ֵ����ʼ���ĺ����Ǵ�������ʱ��ԣ��һ����ʼֵ������ֵ�ĵĺ����ǰѶ���ĵ�ǰֵ����������һ����ֵ����
void test_variable()
{
	// ����������ʱû��ָ����ʦֵ���������Ĭ�ϳ�ʼֵ��Ĭ�ϳ�ʼֵ������ʲô�ɱ������;�����ͬʱ���������λ��Ҳ��Դ���Ӱ��
	int sum = 0, value, units_sold = 0;  // sum,value units_sold ����int ���ͣ� sum ��units_sold��ʼֵΪ0
	string book("jian ai");				// book ͨ��һ��string ����ֵ��ʼ��
	cout << book.c_str() << endl;
	
	// c++�г�ʼ���ļ��ֲ�ͬ��ʽ��c++11�±�׼�� �û���������ʼ�������õ���ȫ���Ӧ�ã�
	// �����ǳ�ʼ��������ĳЩʱ��Ϊ����ֵ����������һ���ɻ�������������ʼֵ��
	int a = 3.14;
	//int b = { 3.14 };  // ת��δִ�У����ڶ�ʧ��Ϣ��Σ��
	int b = { 0 };
	int c{ 0 };
	int d(0);
	cout << "a " << a << endl;
	cout << "b " << b << endl;
	cout << "c " << c << endl;
	cout << "d " << d << endl;
	// double dd = ff = 999.99; // ff δ����


	 
}

string g_str; // ����ʼ��Ϊ ""
int g_int; // ����ʼ��Ϊ 0

int main()
{
	cout << g_str.c_str() << endl;
	cout << g_int << endl;  
	string l_str; // ����ʼ��Ϊ ""
	int l_int;    // δ����ʼ��
	cout << l_str.c_str() << endl;
	//cout << l_int << endl;
	cout << "            "<<endl;
	int _;

	test_variable();
	getchar();
	return 0;
}