//5_���������Ÿ��5
#include <vector>
#include <iostream>

class Point
{
};
class Rect
{
};

int main()
{
	// 1.
	std::vector<Point> v1; // Point �ۿ� �����Ҽ� �����ϴ�.

	// 2. void* ����
	// ���� 1. ���� ��� Ÿ���ּ� ����, ���������� �͵鵵, ��Ư¡�� ������ ������ ����
	// ���� 2. �������� ������ �ּҰ� ��� Ÿ������ �˼��� ����.!!
	std::vector<void*> v2; // ��� Ÿ�� �ּ� ���� �����մϴ�.
	v2.push_back(new Point);
	v2.push_back(new Rect);
	v2.push_back(new int);
	void* p = v[0];

	// ��� 3. ��� Ŭ������ ������, ��� Ŭ���� ������ ����(upcasting)
	
}