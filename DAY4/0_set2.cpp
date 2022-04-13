#include <iostream>
#include "show.h"
#include <set> 
#include <functional>

int main()
{
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);



	// �ٽ� 1. ����� �ߺ��� ������� �ʴ´�.
	// insert() ��ȯ Ÿ���� pair �Դϴ�.
//	std::pair< std::set<int>::iterator, bool> ret = s.insert(15); // ����

	auto ret = s.insert(15);

	if (ret.second == false)
		std::cout << "fail" << std::endl;
	else
		std::cout << "ok" << std::endl;



	// �ٽ� 2. ��� ������ insert(�Ǵ� emplace) �� �����մϴ�.
	//        �׻� �ڷᱸ���� Ư¡�� �� �����ϼ���..
//	s.push_front(37); // error


	// �ٽ� 3. �ݺ��ڷδ� �б⸸ �����մϴ�.
	auto p1 = s.begin();
//	*p1 = 100; // error. 


	// �ٽ� 4. �ڷᱸ�� Ư���� �´� �Լ��� ����ϼ���.
	
	// �Ʒ� �ڵ�� ������ �ƴϰ�, �ߵ���������, �����˻����� ���� ã�� �ڵ��Դϴ�.
	// ��ȿ�����Դϴ�. set(tree)�� ����ϴ� ������ �����˻��� �Ϸ��� ����մϴ�.
	auto ret1 = std::find(s.begin(), s.end(), 15);
	std::cout << *ret1 << std::endl;

	auto ret2 = s.find(15); // ���� �˻�
	std::cout << *ret2 << std::endl;

	// "�˰���� ������ �̸��� ��� �Լ� ������
	//  ��� �Լ��� ����ض�!"

}







