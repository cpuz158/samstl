#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	auto p1 = std::begin(s1); // 1��° ��Ҹ� ����Ű�� �ݺ���
	auto p2 = std::end(s1);	  // ������ ���� ��Ҹ� ����Ű�� �ݺ���
							  // "past the end"
	*p1 = 10; // ok
//	*p2 = 20; // runtime error. std::end()�� ��� �ݺ��ڴ� * ���� ������


	// end()�� ��� �ݺ��ڴ� ���� �뵵�θ� ����ϼ���
	// [p1, p2)
	while (p1 != p2)
	{
		++p1;
	}

	// end()�� past the end �̹Ƿ� begin() == end() ��� �ǹ̴� empty �� �ǹ�.
	std::list<int> s3;
	if (s3.empty()) {}

	if (std::begin(s3) == std::end(s3)) {}	
}