
// ���������� ����������������� ��������� ������

template <class T> class LineList {
public:

	// ����������� � ����������
	LineList();
	~LineList();

	LineListElem<T>* getStart();

	// �������� ������� ��������
	void deleteFirst();
	// �������� ����� ������� ��������
	void deleteAfter(LineListElem<T>* ptr);
	// ������� ������� ��������
	void insertFirst(const T& data);
	// ������� ����� ������� ��������
	void insertAfter(LineListElem<T>* ptr, const T& data);
};