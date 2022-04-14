#include <iostream>
#include <string>
#include <unordered_set>
#include "show.h"

// unordered_set 

int main()
{
	// C++ ǥ���� �����ϴ� "hash �Լ�"��
	// "�Լ���ü"�� �Ǿ� �ֽ��ϴ�.
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string> hs;

	std::cout << hi(30) << std::endl;
	std::cout << hi(40) << std::endl;
	std::cout << hd(3.4) << std::endl;

	std::cout << hs("hello") << std::endl;
}

