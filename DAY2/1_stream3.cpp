#include <iostream>
#include <iterator>
#include <list>
#include <algorithm> 
#include <fstream> // C++ ǥ�� ���� Ŭ����

int main()
{
//	std::ostream_iterator<int> p(std::cout, " ");

	std::istream_iterator<int> p(std::cin); // �Է� ��Ʈ�� �ݺ���
//	*p = 10; // error. p�� ����� �ȵ˴ϴ�

	int n = *p; // std::cin >> n �� ���� �ǹ�..

	std::cout << n << std::endl;


}