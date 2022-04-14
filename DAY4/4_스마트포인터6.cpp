#include <iostream>
#include <memory>

void foo(void* p) { free(p); }

int main()
{
	// ������ ����
	std::shared_ptr<int> sp1( new int ); // ok

//	std::shared_ptr<int> sp2( (int*)malloc(sizeof(int)) ) ; // bug..sp2�� �Ҹ��ڴ�
															// delete ����
															// 
	// �ٽ� 1. �����ڸ� �����Ϸ��� shared_ptr �������� 2��° ���ڷ� ����
	std::shared_ptr<int> sp2((int*)malloc(sizeof(int)), foo);// ok. ������ ����
//	std::shared_ptr<int> sp2((int*)malloc(sizeof(int)), free);
//	std::shared_ptr<int> sp2((int*)malloc(sizeof(int)), [](int* p) { free(p); });


	// �ٽ� 2. new [] �� �Ҵ��� ���
	std::shared_ptr<int> sp3(new int[10]); // bug, "delete[]" �ؾ� �ϴµ�
											// delete �ϰ� �ȴ�.

	// �迭 �Ҵ��� ��� �Ʒ� ó�� �����ڸ� �����ؾ� �մϴ�.
	std::shared_ptr<int> sp4(new int[10], [](int* p) { delete[] p; }); // ok
	
	// C++17 ���ʹ� �Ʒ� ó�� �ϸ� �˴ϴ�.
	std::shared_ptr<int[]> sp5(new int[10]);

	// �׷���, �����غ� ����,  new int[10] �� �ʿ��ϸ� ??
	// ��.. ����Ʈ�����ͷ� �����ϴ°� ??
	// vector�� �ִµ�.
	std::vector<int> v(10); // �ᱹ new int[10] �ƴұ� ?
	// ��� ö������
	// �Ѱ� ��ü�� shared_ptr �� �����ϰ�
	// ���� ��ü�� vector �� ����..
	// �� ���ʿ��� �����ߴ�.
}











