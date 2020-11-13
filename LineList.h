
// Реализация однонаправленного линейного списка

template <class T> class LineList {
public:

	// Конструктор и деструктор
	LineList();
	~LineList();

	LineListElem<T>* getStart();

	// Удаление первого элемента
	void deleteFirst();
	// Удаление после данного элемента
	void deleteAfter(LineListElem<T>* ptr);
	// Вставка первого элемента
	void insertFirst(const T& data);
	// Вставка после данного элемента
	void insertAfter(LineListElem<T>* ptr, const T& data);
};