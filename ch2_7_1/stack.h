template<class T> class Stack {
	T* v;
	int max_size;
	int top;

public:
	class Underflow {};
	class Overflow {};
	class Bad_pop {};

	Stack(int s);
	~Stack();

	void push(T);
	T pop();
};