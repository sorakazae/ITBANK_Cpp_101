#include <iostream>
using namespace std;
int fibo1(int n) {     // �ݺ������� �Ǻ���ġ ������ n���� ���� return�ϴ� �Լ�
	if(n==1 || n==2)
		return 1;
	int a=1, b=1, c;
	for(int x=3; x<=n; x++) {
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int fibo2(int n) {     // ���ȣ��� �Ǻ���ġ ������ n���� ���� return�ϴ� �Լ�
	if(n==1 || n==2)
		return 1;
	return fibo2(n-2)+fibo2(n-1);
}
void main( ) {
	cout << "fibo1(7) = " << fibo1(40) << endl;
	cout << "fibo2(7) = " << fibo2(40) << endl;
}

/*
template <class my>
class stack {                // ���ø� Ŭ����
	my data[5];
	int top;
public :
	stack( ) {
		top = -1;
	}
		void push(my x);
		my pop( ) {
			return data[top--];
		}
};
template <class my>            // template class�� ����Լ� Ŭ���� �ܺο� �����ϴ� ���
void stack<my>::push(my x) {
			data[++top] = x;
		}

void func(stack<int> t1, stack<double> t2) {
}


void main( ) {
	stack<int> s1;              // ������ class - ������ Ÿ�� stack<int>
	stack<int> *sp = &s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	cout << "pop=" << s1.pop( ) << endl;
	cout << "pop=" << s1.pop( ) << endl;
	cout << "pop=" << s1.pop( ) << endl;
	stack<double> s2;           // ������ class - ������ Ÿ�� stack<double>
	//sp = &s2;

	func(s1, s2);

	s2.push(1.5);
	s2.push(2.5);
	s2.push(3.5);
	cout << "pop=" << s2.pop( ) << endl;
	cout << "pop=" << s2.pop( ) << endl;
	cout << "pop=" << s2.pop( ) << endl;
}
*/