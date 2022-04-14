#include <memory>

void push_back( std::shared_ptr<int> sp )
{
}

int main()
{
	// 1. shared_ptr �����ڴ� explicit �Դϴ�.
	std::shared_ptr<int> sp1 = new int; // error
	std::shared_ptr<int> sp2(new int);  // ok

	// 2. 
	push_back(new int); // std::shared_ptr<int> sp = new int; �̹Ƿ� error
	push_back(std::shared_ptr<int>(new int));
			// std::shared_ptr<int> sp = std::shared_ptr<int>(new int);
			//	ok.. �� �ڵ�� ���� ������ ���. explicit �ƴ�.

	push_back( std::make_shared<int>(0) );
		// std::shared_ptr<int> sp = std::make_shared<int>(0)
}