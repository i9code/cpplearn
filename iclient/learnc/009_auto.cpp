#include "iostream"
using namespace std;

int main() {
	// auto ����ı��������г�ʼֵ
	int i = 1;
	// ʹ��autoҲ����һ����������������������Ϊһ���������ֻ����һ����������
	auto ai = 0, *p = &ai;// ��ȷ��ai��������p������ָ��
	//auto sz = 0, pi = 3.14;// ����sz��pi���Ͳ�һ��

	int ii = 0, &r = ii;
	auto a = r; // a��һ��������r��i�ı�������i��һ������

	// auto һ�����Ե�����const,ͬʱ�ײ�const��ᱣ�����������統��ʼֵ��һ��ָ������ָ��ʱ
	const int ci = i, &cr = ci;
	// ci = 2; �������ܸ�ֵ
	auto b = ci;  // b��һ����������ci�Ķ���const���Ա����Ե��ˣ�
	cout << "ci =  " << ci <<  "b = " << b << endl;
	b = 2; 
	cout << "ci =  " << ci <<  "b = " << b << endl;
	getchar();
	auto  c = cr; // c��һ��������cr��ci�ı�����ci������һ������const��

	auto d = &i; // d��һ������ָ�루�����ĵ�ַ����ָ��������ָ�룩

	auto e = &ci // e��һ��ָ������������ָ�루�Գ�������ȡ��ַ��һ�ֵײ�const ��



}