// �ݺ�������

// 1. �ݺ��� ����, �����̳ʿ��� ������ ��, "s.end()" �� past the end

// 2. �ݺ����� ���� : "��ü�� �ݺ���", "raw ������"
//					���� ������ ������ "T::value_type" �� ���� �ʴ�.
//					"std::iterator_traits<T>::value_type" �� ����

// 3. �ݺ����� 5���� �з�(iterator_category)
//    �Է�, ���, ������, �����, ��������
//    �˰����� �ڽ��� �䱸�ϴ� �ݺ����� category �� �ִ�.
//	  std::sort(�������� first, �������� last)

// 4. ���Թݺ��� 3���� - ����, �Ĺ�, ���� ����
//    std::copy(s1.begin(), s1.end(), s2.begin()); 
//    std::copy(s1.begin(), s1.end(), std::back_inserter(s2)); 

// 5. stream �ݺ��� - ǥ�� �����, ���� �����..
//    show.h �� show() �Լ� ����..

// 6. reverse iterator ����
//    reverse iterator ���п� ��� �˰��� �Լ��� ���������ε� �����Ѵ�
//    => �ڿ��� ���� ���� �˻�
//    
// 7. �����̳ʿ��� �ݺ��ڸ� ������ 4���� ���
//    c.begin();
//    c.rbegin();
//    c.cbegin();
//    c.crbegin();
