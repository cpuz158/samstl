#include <iostream>

// �ٽ� 1. ��� ����
#include <memory>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// �ٽ� 2. std::make_shared �� �� ����ϼ���
//	std::shared_ptr<Point> sp1 = new Point(1, 2); // error
//	std::shared_ptr<Point> sp2( new Point(1, 2)); // ok.
	std::shared_ptr<Point> sp3 = std::make_shared<Point>(1, 2); // ����

	// ���� : ������ ���� ���������� ������ ��찡 ������ �ʽ��ϴ�

	// �ٽ� 3. ��ȣ ���� ���ɼ��� �ִ����� �� Ȯ���ϼ���.
	//        => People ó�� "��� ����Ÿ�� �ٽ� shared_ptr" �� �ִ� ���!

}