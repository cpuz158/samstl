// 1. github.com/codenuri/samstl  ���� DAY2_�����ҽ�.zip ��������
// 2. codexpert.org ���� �⼮���ּ���

// VC ����Ͻô� ����
// SDK ����
// �÷��� �������� ���� ���� �ּ���.














#include <iostream>
#include <iterator>
#include <list>
#include <algorithm> // copy �˰���.. 

int main()
{
	int n = 10;

	std::cout << n << std::endl;

	// ��Ʈ�� �ݺ��� : ����¿� ���Ǵ� �ݺ���.
	std::ostream_iterator<int> p(std::cout, " ");

	// ���� p �� ����ϸ� std::cout �� ����ϴ� ��� ���ۿ� ��µ˴ϴ�.
	*p = 10; // std::cout << *p << " " �� �ǹ�
	++p;     // ��� �˴ϴ�. ++ ��ü�� �ϴ����� �����ϴ�.
	*p = 20;

	std::list<int> s = { 1,2,3 };

	// list �� ��� ������ copy �˰���� ��Ʈ�� �ݺ��ڷ� ����ϱ�
	std::copy(s.begin(), s.end(), p);
}