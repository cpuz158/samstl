#include <iostream>
#include <iterator>
#include <list>
#include <algorithm> 
#include <fstream> 

int main()
{
	std::ifstream fin("1_stream4.cpp"); // ���� �ҽ� �̸� ��������

	std::istream_iterator<char> p(fin); // �Է� ��Ʈ�� �ݺ���
	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;
}