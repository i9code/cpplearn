#include "iostream"
using namespace std;

// c++֧�� c�����ַ��������ǳ�������ò�Ҫʹ�����ǡ�

int main() {
	char p[] = "hello";
	char p1[] = "nihao";
	// c����ַ����ĺ���

	cout << strlen(p) << endl;  // ����p�ĳ��ȣ����ַ�����������

	cout << strcmp(p, p1) << endl; // �Ƚ�p��p1�������  p== p1   ����0��p >p1 �������� p< p1 ���ظ���

	cout << strcat(p, p1) << endl; // ��p1���ӵ�p�ϣ�Ȼ�󷵻�p

	cout << strcpy(p, p1) << endl; // ��p1������p ����p

	getchar();
	return 0;
}