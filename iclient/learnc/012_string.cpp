#include "iostream"
#include "cctype"
using namespace std;

// λ��ͷ�ļ��Ĵ��룬һ����˵��Ӧ��ʹ��using��������Ϊͷ�ļ������ݻ´�����������������ļ��У����ͷ�ļ�����ĳЩusing������
// ��ôÿ��ʹ�ø�ͷ�ļ����ļ��������������������ĳЩ���E�����飬���ڲ�����������һЩ���֣��������ܲ���ʼ��δ�������ֳ�ͻ

// ��׼������string ��ʾ�ɱ䳤���ַ������У�ʹ��string���ͱ����װ���stringͷ�ļ�.
// ��Ϊ��׼���һ���֣�string�����������ռ�std�С�

#include "string"

using std::string;

void test_string_handler();
void test_string_char();
	

int main()
{
	
	test_string_char();
	
	getchar();
	
	return 0;
}

// ����string�����е��ַ�
void test_string_char() {
	string s = "a";
	char c  = s[0];

	for (auto c : s) {
	}
		cout << isalnum(c) << endl; // ��c����ĸ��������ʱΪ��

		cout << isalpha(c) << endl; // ��cΪ��ĸ��Ϊ��

		cout << iscntrl(c) << endl; // ��cΪ�����ַ���Ϊ��

		cout << isdigit(c) << endl; // ��c Ϊ����ʱΪ��

		cout << isgraph(c) << endl; // ��c��Ϊ�յ��ǿɴ�ӡʱΪ��

		cout << islower(c) << endl; // ��c ΪСд��ĸ��Ϊ��

		cout << isprint(c) << endl; // ��c�ǿɴ�ӡ�ַ�ʱΪ��(��c�ǿո��c���п�����ʽ)

		cout << ispunct(c) << endl; // ��cΪ��������Ϊ�棨��c���ǿ����ַ������֣���ĸ���ɴ�ӡ�հ����е�һ��

		cout << isspace(c) << endl; // ��c�ǿհ���Ϊ�� �� c�ǿո񣬺����Ʊ���������Ʊ�����س��������з������Ʒ��е�һ��

		cout << isupper(c) << endl; // ��c�Ǵ�д��ĸ��Ϊ��

		cout << isxdigit(c) << endl; // ��c��ʮ����������ʱΪ��

		cout << tolower(c) << endl; // �����Ӧ��Сд��ĸ
		cout << toupper(c) << endl; // �����Ӧ��д��ĸ
	
	cout << s << endl;
	
}

void test_string_handler() {

	string s = "abcdefg";
	string s1 = "abc";
	string s2 = "defg";
	// os << s; //��sд�������os����,����os
	// is >>s ; // ��is�ж�ȡ�ַ�����ֵ��s,�ַ����Կհ׷ָ�������is
	// getline(is,s);// ��is�ж�ȡһ�и�ֵ��s,����is

	cout << s.empty() << endl; // sΪ�շ���true�����򷵻�false

	cout << s.size() << endl; // ����s���ַ����ĸ���
	int n = 2;
	cout << s[n] << endl; // ����s�е�n���ַ��������ã�λ�ô�n����

	cout << s1 + s2 << endl; //����s1 ��s2 ���Ӻ��ֵ

	cout << (s1 = s2) << endl; // ��s2�ĸ������s1�е��ַ���

	cout << (s1 == s2) << endl; // ���s1��s2���������ַ�����ȫһ�������������

	cout << (s1 != s2) << endl; // �����ж϶��ַ����Ĵ�Сд����  < <= > >= �����ַ������ֵ��е�˳����бȽϣ��ҶԴ�Сд����

}

void test_string_initialization(){
	string s1;	// Ĭ�ϳ�ʼ����s1��һ�����ַ���
	string ss2(s1); // ss2��s1��һ������
	string s2 = s1; // �ȼ���ss2(s1) s2��s1��һ������
	s2 = "xxxxx";
	cout << s1 << "      " << s2 << endl;

	string ss3("value"); // ss3������ֵ"value"�ĸ�������������ֵ�����ĸ����ַ�����
	string s3 = ss3; //  �ȼ��� ss3��"value"���� s3������ֵ"value"�ĸ���
	string s4(10, 'c'); // s2��������"cccccccccc"��������ʼ��n���ַ�c�����

	// ���ʹ�õȺţ�=����ʼ��һ��������ʵ����ִ�е��ǿ�����ʼ����copy initialization��,�������ѵȺ��Ҳ�ĳ�ʼ��ֵ������һ���´����Ķ�����
	// �����ʹ�õȺţ���ִ�е���ֱ�ӳ�ʼ��
	string s5 = "hiya"; // ������ʼ��
	string s6("hiya"); // ֱ�ӳ�ʼ��
	string s7(5, 'c'); // ֱ�ӳ�ʼ����s7 ccccc

	string s8 = string(7, 'c'); // ������ʼ��

}