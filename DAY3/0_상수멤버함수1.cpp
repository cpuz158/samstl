// 1. github.com/codenuri/samstl ���� "DAY3_�����ҽ�.zip" �����ø� �˴ϴ�.
// 2. codexpert.org ���� �⼮���ּ���
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	// �ٽ� : ��� ��ü�� ��� ��� �Լ��� ȣ���Ҽ� �ִ�.
	//       ��� �Լ��� ���鶧, ��ü�� ���¸� �������� ���� ����Լ����
	//		 �ݵ�� ��� ����Լ��� �ؾ� �Ѵ�.
	void print() const
	{
//		x = 10; // error. ��� ��� �Լ������� ��� ����Ÿ�� �����Ҽ� ����.

		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
//	Point pt(1, 2);
	const Point pt(1, 2);

//	pt.x = 10;		// error. x �� public �� ������, ��� �̹Ƿ�
//	pt.set(10, 20);	// error.
	pt.print();		// ok.. ��, print()�� ��� ����Լ� ���.. 
}


