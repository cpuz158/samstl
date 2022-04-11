// 7_insert1-3
#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::list<int>   s = { 1,2,3 };

	auto p1 = std::back_inserter(s);
	
	*p1 = 10; // s.push_back(10);
	*p1 = 20; // s.push_back(20) ���� �ڵ����� �߰� �˴ϴ�.

	// ���� ��� �ݺ��ڴ� ++�� �ؾ� �������� �̵��Դϴ�
	// �׷���, ���� �ݺ��ڴ� ++ ���ص� �˴ϴ�.
	// ++�� �ص� �˴ϴ�.
	*p1 = 30; // s.push_back(10);
	++p1;     // ok.. ���, ++������ �ƹ��ϵ� ���� �ʰ� �ֽ��ϴ�.
			  // ������, copy � �������� ++�� �ƹ� �ϵ� ���� �ʾƵ�
			  // �����Ǳ� �ؾ� �մϴ�.
	*p1 = 40;

//	std::copy(x, x + 5, p1);
}