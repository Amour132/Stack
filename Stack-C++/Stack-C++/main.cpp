#include "Stack.h"

void TestStack()
{
	Stack<int> s;
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(4);
	cout << s.Size() << endl;
	while (!s.Empty())
	{
		cout << s.Top() << " ";
		s.Pop();
	}
	cout << endl;
}
int main()
{
	TestStack();
	return 0;
}