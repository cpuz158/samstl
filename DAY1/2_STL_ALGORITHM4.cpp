#include <iostream>

// Step 4. ���� Generic �ϰ�.. - �ణ ����� �̾߱�

// ���ø��� �Ʒ� ó�� ����� 2���� �������� �ֽ��ϴ�.

// template<typename T>
// T* find(T* first, T* last, T c)

// 1. ������ Ÿ�԰� �˻� ��� Ÿ���� �����˴ϴ�.
//    double �迭���� double �� �˻� �����ϰ�,
//    int, float ���� �˻��� �ȵ˴ϴ�(T�� �����Ҽ� ���, ������ ����)

// 2. "T*" ��� �ϸ� �׻� "raw pointer �� ��밡���մϴ�."
//    ����Ʈ �����͵��� ����Ҽ� �����ϴ�.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;

	return first == last ? nullptr : first;
}


int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 10, 5.0f); // ??


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}