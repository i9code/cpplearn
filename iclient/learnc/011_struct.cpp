#include "iostream"
#include "string"
using namespace std;

// struct �ؼ��ֿ��Զ����Զ���ṹ
// c++11 �±�׼�涨������Ϊ���ݳ�Ա�ṩһ�����ڳ�ʼֵ.���������ǣ����ڳ�ʼֵ�����ڳ�ʵ�����ݳ�Ա��û�г�ʼֵ�ó�Ա����Ĭ�ϳ�ʼ��
struct people
{
	string name = "���";
	int   age = 10;
};


int main() {
	people *p = new people;
	cout << p->name << " " << p->age << endl;

	people stu, teacher;
	stu.name = "xiao ming";
	stu.age = 11;

	teacher.name = "lao wang";
	teacher.age = 46;
	cout << stu.name << stu.age << " " << endl;
	cout << teacher.name << " " << teacher.age << endl;
	getchar();
	return 0;
}