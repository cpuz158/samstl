


// github.com/codenuri/samstl ����
// "DAY4_�����ҽ�.zip" ��������



// codexpert.org ���� �⼮�� �ּ���








#include <iostream>
#include "show.h"

// set : ����(������, �����յ�)���� ���� ����
#include <set> // Red Black Tree�� ����
#include <functional>

int main()
{
//	std::set<int> s;
	std::set<int, std::greater<int> > s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);

	auto p = s.begin();
	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}
	
}







