#include <iostream>

// Step 3. �˻� ��� Ÿ���� �Ϲ�ȭ - "���ø� ���"

template<typename T>
T* find(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 10, 5.0); // ����! ��ü �˻��Ϸ��� x+9�� �ƴ�
										//    x+10 �Դϴ�.


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}