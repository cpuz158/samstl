#include <vector>
#include <algorithm>
#include "show.h"
#include <array> // �� �ȿ� array2.cpp ���� ���� �ڵ尡 �ֽ��ϴ�.
				 // C++11���� ����

int main()
{
	std::array<int, 10> arr = { 1,2,3,4,5,6,7,8,9,10 };
				// int arr[10]

	// �Ʒ� �ڵ� �����غ�����
	arr.push_back(1); // error
	arr.resize(7);	  // error

	// std::array �� ���������� raw array �Դϴ�.
	// �׷���, ũ�� ����, ����/���� �� ��� �Ұ����մϴ�.
	// ����, "raw �迭 + ��� ���� �Լ�" �� �Ǿ� �ֽ��ϴ�.

}
