//#pragma once
//
//
//const int MaxSize = 10;
//
//template<typename T>
//class Stack {
//
//	T _array[MaxSize];
//	int _top = -1;
//	int _size = 0;
//
//public:
//
//	int getSize();
//
//	int getTop();
//
//	bool isEmpty();
//
//	bool isFull();
//
//	void push(T newItem);
//
//	void pop();
//
//	T peek();
//
//	void clear();
//
//	template<typename T>
//	friend ostream& operator<<(ostream& os, const Stack<T>& stack);
//};
//
//
//template<typename T>
//int Stack<T>::getSize() { return _size; }
//
//template<typename T>
//int Stack<T>::getTop() { return _top; }
//
//template<typename T>
//bool Stack<T>::isEmpty()
//{
//	return(this->_top == -1);
//}
//
//template<typename T>
//bool Stack<T>::isFull()
//{
//	return(this->_top == MaxSize - 1);
//}
//
//template<typename T>
//void Stack<T>::push(T newItem)
//{
//	if (this->isFull())
//	{
//		cout << "Stack is full" << endl;
//		return;
//	}
//
//	this->_top++;
//	this->_size++;
//	this->_array[this->_top] = newItem;
//}
//
//template<typename T>
//void Stack<T>::pop()
//{
//	if (this->isEmpty())
//	{
//		cout << "Stack is empty" << endl;
//		return;
//	}
//	this->_top--;
//	this->_size--;
//}
//
//template<typename T>
//T Stack<T>::peek()
//{
//	if (this->isEmpty())
//		assert(!"Stack is empty");
//	return this->_array[this->_top];
//}
//
//template<typename T>
//void Stack<T>::clear()
//{
//	this->_top = -1;
//	this->_size = 0;
//}
//
//template<typename T>
//ostream& operator<<(ostream& os, const Stack<T>& stack)
//{
//	for (size_t i = 0; i < stack._size; i++)
//		os << "[" << i << "] => " << stack._array[i] << endl;
//	return os;
//}