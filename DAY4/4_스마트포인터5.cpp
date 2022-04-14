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
	
	// �ٽ� 1. 
	// shared_ptr ���� (1) ���ٴ� (2)�� �����ϴ�.
	//(1) std::shared_ptr<Point> sp(new Point(1, 2));
	//(2) std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);
	
	// �ٽ� 2. make_shared�� 2���� ����
	// 1. ȿ������ �޸� ����(��ü + ������ü)�� �ѹ��� �Ҵ�
	// 2. �ڿ������� ���� �����ϴ�.

	// (1)->(2)->(3) �� ������ ����Ǹ� �����մϴ�.
	// (1)->(3)->(2) �� ������ ����ǰ�, goo���� ���ܰ� �߻��ϸ�
	//								�Ҵ�� �޸�(new int)�� ���ŵɼ� �����ϴ�.
	foo( std::shared_ptr<int>(new int), goo() );
	//            (2)           (1)      (3) 

	// ���, "�ڿ��Ҵ�" �� "�ڿ�������ü"�� ������ �ݵ�� �ѹ��� �̷������ �մϴ�.
	// �߰��� �ٸ� �۾��� �ְ� �Ǹ� ����(�ٸ��۾����� ���ܹ߻���)�մϴ�.

	// �Ʒ� �ڵ忡�� (1) �� �ڿ�(int)�� �Ҵ�� ����Ʈ �������� ������ �ѹ��� �ϴ� �Լ�
	foo(std::make_shared<int>(0), goo());
	//      (1)					  (2)


}


void foo( std::shared_ptr<int> sp, int n) {}

int goo() { return 10; }

