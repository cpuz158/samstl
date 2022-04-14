#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> up(new int);
	std::shared_ptr<int> sp(new int);


	// ������ ������ ?
	std::shared_ptr<int> sp1 = up;	// error
	std::shared_ptr<int> sp2 = std::move(up); // ok

	std::unique_ptr<int> up1 = sp; // error
	std::unique_ptr<int> up2 = std::move(sp); // error
}

// �Ʒ� Alloc ���� ��ȯ���� "int*" ��� ����Ʈ �����ͷ� �ϱ�� �߽��ϴ�.
// shared_ptr �� �ұ�� ? unique_ptr�� �ұ�� ?
//int* Alloc()
//std::shared_ptr<int> Alloc() // ȣ���ڴ� �ݵ�� shared_ptr�θ� �޾ƾ� �մϴ�.
std::unique_ptr<int> Alloc()   // ȣ���ڴ� shared_ptr �Ǵ� unique_ptr�� ���ð���
{
	//return new int;
	return std::unique_ptr<int>(new int);
}

int main()
{
	std::shared_ptr<int> sp1 = Alloc();
	std::unique_ptr<int> up1 = Alloc();
}


