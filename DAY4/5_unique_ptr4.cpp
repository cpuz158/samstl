#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> up1(new int);

//	std::unique_ptr<int> up2 = up1; // error

	std::unique_ptr<int> up2 = std::move(up1);	// ok.. �ڿ��� ���簡 �ƴ�
												//		�ڿ��� �̵�
}