#include <iostream>
#include <vector>
#include <functional>
using namespace std::placeholders;

class Button
{
public:
	void click()
	{
		// ��ư�� ���� ����� ���ο� �˷��� �մϴ�.
	}
};

int main()
{
	Button b1, b2; // 2���� ��ư �����
	b1.click();
}