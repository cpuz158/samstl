#include <tuple>
#include <iostream>

int main()
{
	// pair : C++98. ���� �ٸ� Ÿ���� ��ü 2�� ����
	std::pair<int, double> p1(3, 3.4);


	// pair�� 3, 4... �� ���������մϴ�.
	std::pair<int, std::pair<int, double> > p2(3, std::pair<int, double>(1, 3.4));

	std::cout << p2.first << std::endl; // 3
	std::cout << p2.second.first << std::endl; // 1
	std::cout << p2.second.second << std::endl; // 3.4

	// ��ó�� �ϸ� pair�� ��� ������ ������, �ʹ� �����ϰ� �����մϴ�.
	// �׷��� C++11 ���� tuple ����

	std::tuple<> t0; // 0�� ����
	std::tuple<int, double> t2(1, 3.4);
	std::tuple<int, double, char, short> t4(1, 3.4, 'A', 3);

	// tuple�� ��� ������ std::get ���

	std::get<0>(t4) = 30;

	std::cout << std::get<0>(t4) << std::endl;
}