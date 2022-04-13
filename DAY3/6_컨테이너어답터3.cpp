#include <list>
#include <vector>
#include <deque>
#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

// STL ���� "container adapter" �� 3�� �Դϴ�.
// 1. stack
// 2. queue
// 3. priority_queue

int main()
{
	// ������ ������ ��� ��� ������
	// stack : sequence �� ���� ���⸸ ����մϴ�.
	// queue : sequence �� ���� ������ ����մϴ�.
	std::stack<int, std::list<int>>   s1;
	std::stack<int, std::vector<int>> s2;
	std::stack<int, std::deque<int>>  s3;

	std::queue<int, std::list<int>>   q1;
	std::queue<int, std::vector<int>> q2; // error. 
										  // vector �� ���� ����.
										  // ���⼭ ������ �ƴ϶�	
										  // ����Ҷ�(����Լ�ȣ��) ���� �߻�
	std::queue<int, std::deque<int>>  q3;

	q2.push(10); // ���� �ƴ�. vector �� ����(push_back)���� �ֱ�
	q2.front();  // ���� �ƴ�. ���Ű� �ƴϹǷ�
	q2.pop();    // ���� �ؾ� �ϴµ� vector �� pop_front() ����


}



