#include "iostream"
#include "vector"
#include "string"
#include "cctype"
using namespace std;

void test_vector_handler();

void test_iter();

// c++ �м�����ģ�壬���к���ģ�壬����vector��һ����ģ�塣
int main()
{
	// test_vector_handler();

	test_iter();
	getchar();
	return 0;
}

void test_iter() {
	vector <int> v;
	for (int i = 0; i < 5; i++) {
		v.push_back(i); // ��v��β�����һ��ֵΪt��Ԫ��
	}

	auto b = v.begin(); // ָ��v�ĵ�һ��Ԫ��
	cout << *b << endl;
	auto	e = v.end(); // ָ��vβԪ�ص���һλ
	// cout << *e << endl; err ָ��Ϊ�� 
	
	string s("some thing");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
		
	}
	cout << s << endl;
	
	// ����������
	vector<int > ::iterator it;
	it = v.begin();				// �ɶ���д

	vector<int>::const_iterator cit;
	it = v.begin(); // const_iterator  �ͳ���ָ���࣬�ܶ�ȡ�������޸���֪��Ԫ��ֵ
	
	// vector ������Զ�̬����������Ҳ����һ�������ã���֪��һ���ǲ��E�ڷ�Χforѭ������ vector�������Ԫ��
	// ��һ���������κ�һ���ܸı�vector���������Ĳ��������� push_back �����Ǹ�vector ����� ������ʧЧ

	// ��Ϊvector��˳������ģ�һ��ɾ�����߼���һ��Ԫ�� vector.begin()��vector.end()�Ǳ仯��

	//erase�ķ�����һ�������������������ָ��ɾ��֮ǰ���ٺ�ĵ�һ��Ԫ�ء�
	vector<int> ::iterator iit;
	for (iit = v.begin(); iit != v.end();) {
		cout << *iit << "  ";
		if (*iit == 2) {
			iit = v.erase(iit);
		}
		else {
			++iit;
		}
		// ���� iit�п����Ѿ�����v.end() ���� *iit Խ��
	} 

}

void test_vector_handler()
{	
	vector<int > v;
	for (int i = 0; i < 5; i++) {
		v.push_back(i); // ��v��β�����һ��ֵΪt��Ԫ��
	}

	cout << v.empty() << endl; // ���v�������κ�Ԫ�أ������棬����Ϊ��

	cout << v.size() << endl; // ����v��Ԫ�ظ���

	cout << v[1] << endl;  // ����v�е�1��λ����Ԫ�ص����� 

	
	for (auto &i : v) { // ����v�е�ÿ��Ԫ�� ע��i������   
		i *= i;   // ����i��ƽ��
	}

	for (auto i : v)
		cout << i << " ";
	cout << endl;


	// �������±���ʽ ���Ԫ��
	vector<int> ivec;
	 cout << ivec[0];  // err ivec�в������κ�Ԫ��

	 vector <int> v2(10); // ����10��Ԫ��
	 cout << v2[10]; // err  v2�ĺϷ�Ԫ�ص�����Ϊ0-9



	getchar();
	
	
}

void test_vector_init(){
	vector<int> v1;  // v1��һ����vector,��Ǳ�ڵ�Ԫ����T���͵ģ�ִ��Ĭ�ϳ�ʼ��

	vector<int> v2(v1); // v2�а���v1������Ԫ�صĸ���,��ʱ��ע������vector��������ͱ�����ͬ

	vector<int> vv2 = v1; // �ȼ��� v2(v1); v2�а���v1�����е�Ԫ��

	vector<int> v3(3, 3); // v3�а�����n���ظ���Ԫ�أ�ÿ��Ԫ�ص�ֵ����val

	vector<int> v4(4); // v4�а���4���ظ�ִ����ֵ��ʼ���Ķ���ÿ������ʼ��Ϊ0
	vector<int> vv4{ 4 };// ֻ��һ��Ԫ�ء�����


	// c++11 �±�׼�ṩ���б��ʼ������ ��vector�����е�Ԫ�ظ���ʼֵ����ʱ��{} ��������0��������ʼԪ��ֵ������vector����

	vector<int> v5{ 1,2,3,4 };// v5�а����˳�ʼֵ������Ԫ�أ�ÿ��Ԫ�ر�������Ӧ�ĳ�ʼֵ
	// vector<int> vv5(1,2,3,4); err  ֻ�ܷŵ�{}��


	vector<int> v6 = { 1,2,3,4 };//�ȼ���v5{1,2,3,4}

	vector<string> v7{ "hi" };// �б��ʼ����������һ��Ԫ��
	// vector<string> v8("hi"); // ���󣬲���ʹ���ַ�������ֵ����������������

	// v8,v8 �ṩ��ֵ������ΪԪ�صĳ�ʼֵ���������᳢��Ĭ�ϳ�ʼֵ��ʼ��
	vector<string> v8 {10}; // v8���У�����Ĭ�ϳ�ʼ����Ԫ��jjjjfjskdjfadfjfffffffffffffff
	vector<string> v9{ 10,"hi" };// v9 h���У�������ʼֵΪ����飢��Ԫ��
}