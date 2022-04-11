#include <iostream>

// Step 5. ���п� ���� ��ȯ�� ����

// �˻� ���н�
// nullptr ��� last ��ȯ
// 1. find ������ü�� ���� ��������. �Ʒ� �ڵ� ����
// 2. Ȱ�뵵�� ����. find ���н� ��ȯ���� ���� �˻� ������ ������ �ȴ�.
// 3. �������� ����. ����Ʈ ������ ���� ��� ����Ʈ �����Ͱ� nullptr�� 
//				  ȣȯ�� �ʿ䵵 ���� ����.
template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;

	return first; //  == last ? nullptr : first;
}
int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 10, 5.0f); // ??

	if (p == x+10)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}