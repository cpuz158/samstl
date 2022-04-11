// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>

// �Լ� ����

int main(int argc, char** argv)
{
	int x[5] = { 10,20,30,40,50 };

	std::list<int> s = { 1, 2, 3, 4, 5 };
	

//	std::copy(x, x + 5, s.begin()); // �����.

//	std::copy(x, x + 5, s.end() );  // runtime-error. �Ҵ���� ���� �޸� �����

	// �����̳��� ���� �߰��ϴ� ��� 1. for, push_back ���
//	for (auto e : x)
//		s.push_back(e); // ok

	// ��� 2. ���Թݺ��� ���
//	std::back_insert_iterator< std::list<int> > p1(s);
//	std::copy(x, x + 5, p1);

	// ��� 3. ���Թݺ��� �Լ� ���� ���
	std::copy(x, x + 5, std::back_inserter(s) );


	for (auto& n : s)
		std::cout << n << std::endl; 
}
