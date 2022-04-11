#include <iostream>

// Step 2. �˻� ������ �Ϲ�ȭ
// ��ü ���ڿ� �� �ƴ϶� "�κ� ���ڿ��� �˻�" ���� - Ȱ�뵵�� �о���..
// Ȱ�뵵�� ���� �������� �۾� - �Ϲ�ȭ! �Ѵٵ� �̾߱�..

// [first, last) ������ ���ڿ����� "�����˻� ����"
// "�ݰ���(half-open) ����" �̶�� �մϴ�.

char* xstrchr(char* first, char* last, int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}


int main()
{
	char s[] = "abcdefgh";

	char* p = xstrchr(s, s + 4,  'c');

	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}