#include "iostream"
#include "string"
using namespace std;

// struct 关键字可以定义自定义结构
// c++11 新标准规定，可以为数据成员提供一个类内初始值.创建对象是，类内初始值将用于吃实话数据成员。没有初始值得成员江北默认初始化
struct people
{
	string name = "你好";
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