// 6_optional
#include <iostream>
#include <optional>

int main()
{

	int n1 = 0; // n1 �� �������� �����ϴ�.

//	std::optional<int> n2 = 10; // n2 �� ������ + ������(null) ���¸� ������ �ֽ��ϴ�.
//	std::optional<int> n2 = std::nullopt; 
	std::optional<int> n2 = NULL; // ok.. �׷���, 0���� ���. ��, �� ����.
//	std::optional<int> n2 = nullptr;

	
	if (n2)
	{
		std::cout << "�� ���� : " << *n2 << std::endl;
	}
	else
		std::cout << "�� ���� " << std::endl;

}
