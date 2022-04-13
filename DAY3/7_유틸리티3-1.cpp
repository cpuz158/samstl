#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>
#include <iomanip>

int main()
{

	int    n = 3;
	double d = 3.454566756;

	// n, d �� ���� ����ȭ�� ���ڿ��� ����� �ʹ�.
	// ex) "n = 3, d = 3.4" �� ���ڿ���
	// 
	// 1. C ��Ÿ��.
	char s[32];
//	sprintf(s, "n = %d, d = %lf", n, d);		// n, d�� ���� ���� ���� ���� �÷ο� ���ɼ�����.
	snprintf(s, 32, "n = %d, d = %lf", n, d);	// ���۰� ������ ���ڿ� �߸�.

	// 2. C++ ��Ÿ�� 
	std::ostringstream sout;
	
	sout << "n = " << n << ", ";
//	sout << "d = " << d;
	sout << "d = " << std::setprecision(10) << d; // �Ҽ������� �ڸ��� ����

	std::string s1 = sout.str();

	std::cout << s1 << std::endl;
}
