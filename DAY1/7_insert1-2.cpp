#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::list<int>   s = { 1,2,3 };
	std::vector<int> v = { 1,2,3 };

	// ���Թݺ��ڶ� ?
	// => �����̳ʿ� ��Ҹ� �߰� �Ҷ� ����ϴ� �ݺ���
	
	// ����ϴ� ��� 1. ���Թݺ��� Ŭ���� �̸� ���� ���.
	std::back_insert_iterator< std::list<int> >   p1(s);
	std::back_insert_iterator< std::vector<int> > p2(v);

	// ���� 2. ���Թݺ��� ��ü�� ����� "���� �Լ�" ���
	//          => insert1-1�� �ִ� make_pair �������� �����
	auto p3 = std::back_inserter(s);
	auto p4 = std::back_inserter(v);

	*p3 = 100; // s.push_back(100);


	// ���� 3. C++17 ���� ���ʹ� �Ʒ� ó���� ����ص� �˴ϴ�.
	std::back_insert_iterator p5(s);
	std::back_insert_iterator p6(v);

	*p6 = 30; // v.push_back(30) �� �ǹ�.

}