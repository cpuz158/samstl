#include <vector>

// resize �� ������ ������ ���ô�.
// �޸� �Ҵ��(allocator) : �޸� �Ҵ� ��å�� ���� Ŭ����
//						   
template<typename T, typename Alloc = std::allocator<T> > 
class vector
{
	Alloc ax; // 2��° ���ڷ� ���� ���� �Ҵ���� ��ü�� ����� ����
			  // �޸� �Ҵ��� �ʿ��Ҷ� ���� �� �Ҵ�� ���
public:
	void resize(int sz)
	{
		// �޸� �Ҵ��� �ʿ��� ��� ��� �ұ�� ?
		// new ? malloc ? memory pool
		T* buff = ax.allocate(sz); // T Ÿ�� sz �� �Ҵ�

		ax.deallocate(buff, sz); // �޸� �����Ҷ��� �Ҵ�⿡ ����.
	}
};

int main()
{
	std::vector<int> v(5);

	v.resize(10);
}


