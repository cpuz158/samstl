#include <iostream>
#include <string>
#include <vector>
#include <ranges>
#include <iterator>

int main()
{
	std::vector<int> v = { 1,2,3,4 };

	// �Ʒ� 3���� ������ ������
	auto p1 = v.begin(); // ok.!!
	auto p2 = std::vector<int>{ 1,2,3 }.begin();
	auto p3 = std::begin( std::vector<int>{1, 2, 3} );

//	*p2 = 10;

	// ��ó�� ������ begin �� ��� ������ �־����ϴ�.
	// �׷��� ���ο� begin �� ��������ϴ�.
	auto p4 = std::ranges::begin(std::vector<int>{1, 2, 3});
//	auto p4 = std::ranges::begin(v);

}