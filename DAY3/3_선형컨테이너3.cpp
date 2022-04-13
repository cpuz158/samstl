#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity ����
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // ��� ����������� ?

	std::cout << v.size()     << std::endl;	// 7
	std::cout << v.capacity() << std::endl;	// 10

	v.push_back(20); // ���� �Ѱ� �߰�.
					 // ���� ���´� �޸��� ���� ������ �����Ƿ�
					 // �޸� ���Ҵ� �ʿ� �����ϴ�.
					 // not expensive operation

	std::cout << v.size()     << std::endl; // 8
	std::cout << v.capacity() << std::endl; // 10

	v.shrink_to_fit(); // size == capacity �� �ǵ��� �ش޶�.

	std::cout << v.size() << std::endl;     // 8
	std::cout << v.capacity() << std::endl; // 8

	v.push_back(3);  // ���� �Ѱ�(3) �߰�
					// ���� ������ �����Ƿ� �޸� ���Ҵ� �ʿ�
					// expensive operation

	std::cout << v.size() << std::endl;     // 9
	std::cout << v.capacity() << std::endl; // g++ : 16(��, 2�辿 Ȯ��)
									// cl(visual studio) : 12(1.5��)

	v.reserve(100); // �޸�(capacity)�� 100 ����

	std::cout << v.size() << std::endl;     // 9
	std::cout << v.capacity() << std::endl; // 100

	// list ���� capacity ������ �����ϴ�.
	// vector ���� �ֽ��ϴ�.


	// �Ʒ� 2���� �ڵ��� �������� �˾Ƶμ���
	// �Ʒ� �ڵ�� ������ 2������ �ϼž� �մϴ�.
	// 1.
	std::vector<int> v1(100); // 100���� ����� ����
	v1.resize(0);             // �ϴ�, ũ��� 0���� ���� ���
							  // size = 0, capacity = 100
	// �׷���.. ���ڵ��
	// std::vector<int> v1(100);    1. sizeof(int) * 100�� �޸� �Ҵ�
								 // 2. int Ÿ���� �ƴ϶� ����� ����Ÿ���̸�
								 //	   100���� ������ ȣ��


	// 2. 
	std::vector<int> v2;
	v2.reserve(100);		// size = 0, capacity = 100
							// 1. 100���� �޸𸮸� �Ҵ�
							//    int �� �ƴ� ����� ���� Ÿ���̶� ������ȣ��ȵ�




}









// ���̽��� ��쵵 ���������Դϴ�
// s = [1,2,3]  // ���������δ� 4�� �Ҵ�
// s.append(4)  // ���� ������ ���Ƿ� �޸� ���Ҵ� ����
// s.append(5)  // 4�� => 8�� �޸𸮷� Ȯ���մϴ�.



