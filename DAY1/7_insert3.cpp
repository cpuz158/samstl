#include <iostream>
#include <list>
#include <iterator>

// ���Թݺ�������

int main(int argc, char** argv)
{
	int x[5]    = { 1, 2, 3, 4, 5 };
	std::list<int> s = { 0, 0, 0, 0, 0 };


	// ���Թݺ��ڴ� 3���� �ֽ��ϴ�.
	// 1. �Ĺ� ���� �ݺ���
//	std::copy(x, x + 5, std::back_inserter(s)); // std::back_insert_iterator ����
												// 0, 0, 0, 0, 0, 1, 2, 3, 4, 5

	// 2. ���� ���� �ݺ���
//	std::copy(x, x + 5, std::front_inserter(s)); // std::front_insert_iterator ����
												// 5,4,3,2,1,0,0,0,0,0

	// 3. ���� ���� �ݺ���
	// std::inserter( �����̳�, ��������ġ����Ÿ���¹ݺ���p) : p�տ� ����
//	std::copy(x, x + 5, std::inserter(s, ++(s.begin()) )); // std::insert_iterator ����
												// 0,1,2,3,4,5,0,0,0,0

	// ���� �������� �����̳� �տ� ���� - ������ ������ ���� �ʰ� ���Ե˴ϴ�.
	std::copy(x, x + 5, std::inserter(s, s.begin()) );
											// 1,2,3,4,5,0,0,0,0,0

	for (auto& n : s)
		std::cout << n << ", ";
}
