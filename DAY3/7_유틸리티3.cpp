#include <iostream> // ǥ�� ����� ��Ʈ��
#include <fstream>  // ȭ�� ��Ʈ��
#include <sstream>  // �޸�(��Ʈ��)��Ʈ��
#include <string>

// C++ ǥ�� ���ο� �Ʒ� �ڵ尡 �ֽ��ϴ�.
// std::ostream cout;

int main()
{
	std::ofstream fout("a.txt");

	std::ostringstream sout;  // �޸�(string) ��� ��Ʈ��

	std::cout << "hello"; // ȭ�� ���
	     fout << "hello"; // ���� ���
		 sout << "hello"; // sout �� ���������� ���� ���ڿ��� ���

	std::string s = sout.str();

	std::cout << s << std::endl; // �ᱹ s�� ����  "hello" ���
}
