#include <iostream>
#include <memory>
void* operator new(size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}

struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};



int main()
{
	// �Ʒ� �ڵ�� ���� �޸� �Ҵ��� ����ϰ� �ɱ�� ?
	// 2�� : ��ü ����, ���� ��ü ����
//	std::shared_ptr<Point> sp(new Point(1, 2));


	// make_shared<T> : T Ÿ�԰�ü�� ������ü�� �ѹ��� �޸��Ҵ��ش޶�
	//					sizeof(T) + sizeof(������ü) �� �ѹ��� �Ҵ�
	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);
							// 1. sizeof(Point) + sizeof(������ü)�� �ѹ��� �Ҵ���
							// 2. �ش� �޸𸮸� ����Ű�� shared_ptr�� ���� ��ȯ
	
	
}











void foo( std::shared_ptr<int> sp, int n) {}

int goo() { return 10; }

