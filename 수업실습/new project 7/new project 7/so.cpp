#include <iostream>
#include <string>
using namespace std;

template <class dt>       // 템플릿 함수 dt의 선언
void myswap(dt &x, dt &y) {
	dt temp = x;            // 문자열은 이 방법(대입)으로 할 수 없다.
	x=y;
	y=temp;
}
void myswap(char *x, char *y) {
	char temp[6];            // 문자열 대입 가능 함수.  템플릿 함수와 오버로딩
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y,temp);
}

void main( ) {
	int a = 10, b = 20;
	myswap(a, b);
	cout << "a= " << a << ", b= " << b << endl;

	char name1[]="korea", name2[]="japan";
	myswap(name1, name2);
	cout << "name1=" << name1 << ", name2=" << name2 << endl;
}

/*
template <class dt, class dt2, class dt3>       // 템플릿 함수 dt의 선언
void myswap(dt &x, dt2 &y) {
	dt3 temp = x;
	x=y;
	y=temp;
}

void main( ) {
	int a = 10, b = 20;
	myswap<int, int, int>(a, b);              // 뭘로 바뀔지 모르는 경우에는 <'데이터 타입',...> 을 써주어야 한다.
	cout << "a= " << a << ", b= " << b << endl;

	char c = 'S', d = 'K';
	myswap<char, char, char>(c, d);
	cout << "c= " << c << ", d= " << d << endl;

	double e =1.5 , f = 2.5 ;
	myswap<double, double, double>(e, f);
	cout << "e= " << e << ", f= " << f << endl;

	myswap<int, char, int>(a, c);
}


/*
class A {
protected :
	int ma;
public :
	A(int x) : ma(x) {
		cout << "A의 생성자!" << endl;
	}
	~A( ) {
		cout << "A의 소멸자!" << endl;
	}
	void printA( ) {
		cout << "A의 print함수 : " << ma << endl;
	}
	virtual void reset( ) {         // 가상함수
		ma = 0;
		printA( );
	}
	virtual void kk( ) = 0;        // 순수가상함수의 선언
};
class B : public A {
protected :
	int mb;
public :
	B(int x, int y) : A(x), mb(y) {
		cout << "B의 생성자!" << endl;
	}
	~B( ) {
		cout << "B의 소멸자!" << endl;
	}
	void printB( ) {
		cout << "B의 print함수 : " << mb << endl;
	}
	virtual void reset( ) {          // 가상함수
		mb = 0;
		printB( );
	}
};
class C : public B {
	int mc;
public :
	C(int x, int y, int z) : B(x, y),mc(z) {         // 매계변수 전달 순서 상관 없음.
		cout << "C의 생성자!" << endl;
	}
	~C( ) {
		cout << "C의 소멸자!" << endl;
	}
	void printC( ) {
		cout << "ma=" << ma << endl;
		cout << "mb=" << mb << endl;
		cout << "C의 print함수 : " << mc << endl;
	}
	void reset( ) {
		mc = 0;
		printC( );
	}
	void kk( ) {          // 순수가상함수의 정의
		cout << "순수가상함수 kk의 정의" << endl;
	}
};
void main( ) {
	C ob(10, 20, 30);
	ob.printA( );
	ob.printB( );
	ob.printC( );
	cout << "-------함수의 오버라이딩-------" << endl;
	ob.reset( );       // C의 reset함수가 나온다.
	ob.A::reset( );    // A의 reset함수 호출
	ob.B::reset( );    // B의 reset함수 호출

	cout << "-------부모형 포인터-------" << endl;
	A *ap = &ob;
	B *bp = &ob;
	cout << "ap=" << ap << ", " << "bp=" << bp << endl;
	ap->reset( );      // reset이 가상함수가 아니면 A의 reset(부모) 맞다면 C의 reset(자식)이 나온다.
	bp->reset( );      // reset이 가상함수가 아니면 B의 reset(부모) 맞다면 C의 reset(자식)이 나온다.
}




/*
class A {
protected :
	int ma;
public :
	A(int x) : ma(x) {
		cout << "A의 생성자!" << endl;
	}
	~A( ) {
		cout << "A의 소멸자!" << endl;
	}
	void printA( ) {
		cout << "A의 print함수 : " << ma << endl;
	}
	virtual void reset( ) {         // 가상함수
		ma = 0;
		printA( );
	}
	virtual void kk( ) = 0;        // 순수가상함수의 선언
};
class B {
protected :
	int mb;
public :
	B(int y) : mb(y) {
		cout << "B의 생성자!" << endl;
	}
	~B( ) {
		cout << "B의 소멸자!" << endl;
	}
	void printB( ) {
		cout << "B의 print함수 : " << mb << endl;
	}
	virtual void reset( ) {          // 가상함수
		mb = 0;
		printB( );
	}
};
class C : public A, public B {
	int mc;
public :
	C(int x, int y, int z) : A(x), B(y), mc(z) {         // 매계변수 전달 순서 상관 없음.
		cout << "C의 생성자!" << endl;
	}
	~C( ) {
		cout << "C의 소멸자!" << endl;
	}
	void printC( ) {
		cout << "ma=" << ma << endl;
		cout << "mb=" << mb << endl;
		cout << "C의 print함수 : " << mc << endl;
	}
	void reset( ) {
		mc = 0;
		printC( );
	}
	void kk( ) {          // 순수가상함수의 정의
		cout << "순수가상함수 kk의 정의" << endl;
	}
};
void main( ) {
	C ob(10, 20, 30);
	ob.printA( );
	ob.printB( );
	ob.printC( );
	cout << "-------함수의 오버라이딩-------" << endl;
	ob.reset( );       // C의 reset함수가 나온다.
	ob.A::reset( );    // A의 reset함수 호출
	ob.B::reset( );    // B의 reset함수 호출

	cout << "-------부모형 포인터-------" << endl;
	A *ap = &ob;
	B *bp = &ob;
	cout << "ap=" << ap << ", " << "bp=" << bp << endl;
	ap->reset( );      // reset이 가상함수가 아니면 A의 reset(부모) 맞다면 C의 reset(자식)이 나온다.
	bp->reset( );      // reset이 가상함수가 아니면 B의 reset(부모) 맞다면 C의 reset(자식)이 나온다.
}
*/