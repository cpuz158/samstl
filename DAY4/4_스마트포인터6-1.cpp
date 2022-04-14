#include <iostream>
#include <memory>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// 1. sp1 ����, sp2�� ���� �ڵ� �Դϴ�.
	std::shared_ptr<Point> sp1( new Point(1, 2) );

	std::shared_ptr<Point> sp2 = std::make_shared<Point>(1, 2);


	// 2. make_shared ����, ��ü�� ����ڰ� ����� ���� �ƴ϶�
	//    make_shared ���ο��� ����� ������ �޸� �Ҵ����� �ٲܼ� �����ϴ�.
	//    �׷���, ������ ���浵 �ȵ˴ϴ�.
	std::shared_ptr<Point> sp3 = std::make_shared<Point>(1, 2);


	// 3. make_shared �� ������ ����� ����ϴµ�,
	//    �����ڸ� �����Ϸ���, ��ü ���� ����� ���� �����ؾ� �մϴ�.
	std::allocator<Point> ax;
	std::shared_ptr<Point> sp3 = 
			std::allocate_shared<Point>( ax, 1, 2);
}











