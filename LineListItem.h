
// Ёлемент линейного списка

template <class T> class LineListElem {
public:
	LineListElem(const T& adata, LineListElem* anext);
	const T& getData() const;
	LineListElem* getNext();
};
