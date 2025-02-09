#include <iostream>
using namespace std;
int fibo1(int n) {     // 반복문으로 피보나치 수열의 n항을 구해 return하는 함수
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
int fibo2(int n) {     // 재귀호출로 피보나치 수열의 n항을 구해 return하는 함수
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
class stack {                // 템플릿 클래스
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
template <class my>            // template class의 멤버함수 클래스 외부에 정의하는 방법
void stack<my>::push(my x) {
			data[++top] = x;
		}

void func(stack<int> t1, stack<double> t2) {
}


void main( ) {
	stack<int> s1;              // 생성된 class - 데이터 타입 stack<int>
	stack<int> *sp = &s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	cout << "pop=" << s1.pop( ) << endl;
	cout << "pop=" << s1.pop( ) << endl;
	cout << "pop=" << s1.pop( ) << endl;
	stack<double> s2;           // 생성된 class - 데이터 타입 stack<double>
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