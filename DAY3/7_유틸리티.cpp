#include <iostream>
#include "show.h"

// ���� �ٸ� Ÿ���� ���� 2�� �����Ҽ� �ִ� �������� �뵵�� ����ü
template<typename T, typename U> struct pair
{
	T first;
	U second;

	// �����ڵ�... 
};
//--------------------------------------------


template<typename T> void foo(T a) {}

int main()
{
	// pair : ���δٸ� Ÿ�� 2���� �����ϴ� ����ü
	std::pair<int, double> p1(1, 3.4);

	// 1. ��� ����
	std::cout << p1.first  << std::endl;
	std::cout << p2.second << std::endl;

	// 2. make_pair
	auto p2 = std::make_pair(1, 3.4);

	foo( std::make_pair(1, 3.4) ); // �Լ� ���ڷ� pair �� ������
								 // make_pair �� ����ϸ� ���մϴ�.

	// 3. C++17 ���ʹ� pair ��ü�� Ÿ�Ի��� ����
	std::pair p3(1, 3.4);

}


