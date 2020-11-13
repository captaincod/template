#include "LineListItem.cpp"
#include "LineList.cpp"
#include <iostream>
using namespace std;
int main(void)
{
	setlocale(LC_ALL, "Russian");
	LineList<int> list; // ”казываем, список какого типа
	list.insertFirst(10);
	LineListElem<int>* ptr = list.getStart();
	list.insertAfter(ptr, 15);
	list.insertAfter(ptr->getNext(), 12);
	list.insertFirst(7);
	return 0;
}