#include <iostream>
#include <list>
#include <filesystem> // C++17 

int main()
{
	// �ݺ��ڴ� �����̳ʷ� ���� ������ �� �ܿ��� ���� ������ �ֽ��ϴ�.
	std::filesystem::directory_iterator p("C:\\windows");

	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;
}










