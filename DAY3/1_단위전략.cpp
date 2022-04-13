// Policy Base Design ( ���� ���� ������ )

// Ŭ������ ����ϴ� "� ��å" �� ���ø� ���ڸ� ���ؼ� �����ϴ� ��.

// ���ø� ���ڷ� ���޵Ǵ� ��å Ŭ������ ���Ѿ� �ϴ� ��Ģ�� ������ �˴ϴ�.
// => �Ʒ� �ڵ忡���� "lock()/unlock()" �Լ��� �־�� �մϴ�.
// => �̷� ��Ģ�� ��� ���� ���� "named requirement" ��� �մϴ�.

// STL �� "�������� ������"�� ���� �θ� ����մϴ�.

// ��, STL �����̳ʴ� ��Ƽ������ ����ȭ�� ���� �ʽ��ϴ�.
// => �Ʒ� ó�� �Ǿ� ������ �ʽ��ϴ�.



// �Ʒ� Ŭ���� ���� ����ȭ ���δ� �ᱹ
// list ����ڰ� ���ø� 2��° ���ڷ� �����ϴ� Ÿ�Կ� ���� �޶����ϴ�.
template<typename T, typename ThreadModel = noLock> class List
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
//List<int, noLock> st;	// ���������� ��Ƽ������ ȯ�濡�� �������� �ʽ��ϴ�.
//List<int, mutexLock> st;
List<int> st;

int main()
{
	st.push_front(10);

}