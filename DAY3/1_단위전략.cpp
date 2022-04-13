
// �Ʒ� Ŭ���� ���� ����ȭ ���δ� �ᱹ
// list ����ڰ� ���ø� 2��° ���ڷ� �����ϴ� Ÿ�Կ� ���� �޶����ϴ�.
template<typename T, typename ThreadModel > class List
{	
	ThreadModel tm;
public:
	void push_front(const T& a)
	{
		tm.lock();
		//....
		tm.unlock();
	}
};
//--------------------------------
// ����ȭ ��å�� ���� ��å Ŭ������ �����մϴ�.
class mutexLock
{
	// pthread_mutex_t handle;
public:
	inline void lock()   { } // pthread_acquire_mutex()
	inline void unlock() { } // pthread_release_mutex()
};
class noLock
{
public:
	inline void lock() { } 
	inline void unlock() { } 
};
//---------------------------------------
// ���� List ����ڴ� template  ���ڷ� "����ȭ ��å"�� ���� �մϴ�
List<int, noLock> st;	// ���������� ��Ƽ������ ȯ�濡�� �������� �ʽ��ϴ�.

int main()
{
	st.push_front(10);

}