#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	// reverse iterator �� ����� ���
	// 1. �ݺ��ڸ� ������, reverse_iterator �� ����� ���
	auto p1 = s.begin();
	std::reverse_iterator<std::list<int>::iterator> ri1(p1); 

	// 2. make_reverse_iterator �Լ� ���
	auto rend = std::make_reverse_iterator( s.begin() );
	auto rbegin = std::make_reverse_iterator( s.end() );

	// 3. �����̳ʿ��� ���� ������. - ��ǻ� �̹���� �θ� ���
	auto rp1 = s.rbegin(); // std::make_reverse_iterator( s.end() );
	auto rp2 = s.rend();
}
