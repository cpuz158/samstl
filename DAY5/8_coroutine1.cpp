// 8_coroutine1

// ���� ������ ����
// 1. coroutine, generater
def foo():
	i = 0
	while(1)
		i = i + 1
		yield i

g = foo()
g.next()
g.next()
g.next()

// 2. async, await
ret = await �񵿱��Լ�()
