#include <iostream>
using namespace std;
class bumo {
	int ma;
public :
	virtual void print( ) {
		cout << "부모의 print" << endl;
	}
	virtual void pp( ) = 0;        // 순수 가상함수
};
class jasic : public bumo {
	int mb;
public :
	virtual void print( ) {
		cout << "자식의 print" << endl;
	}
	void myst( ) {        }
	void pp( ) {            }
};
void main( ) {
	// bumo aa;
	jasic ob;
	ob.print( );    // jasic의 print가 나온다.              지역변수
	ob.bumo::print( ); // bumo의 print가 나온다.             전역변수
	ob.jasic::print( );

	bumo *mom = &ob;
	mom->print( );         //부모형 포인터 맘을 역참조하면 부모가 나옴    //bumo의 print가 나온다.
	          // 단, print가 가상함수라면 jasic의 print가 나온다.
	mom->bumo::print( );  // bumo의 print가 나온다.
	// mom->myst( );
	// mom->jasic::print( );

	bumo &fa = ob;
	fa.print( );        // bumo의 print가 나옴
	             // 단, print가 가상함수라면 jasic의 print가 나온다.
	fa.bumo::print( );
}
/*
	int data=1;
	char *cp = (char *)&data;
	cout << (int)*cp << endl;
	cout << (int)*(cp+1) << endl;
	cout << (int)*(cp+2) << endl;
	cout << (int)*(cp+3) << endl;
}

	/*
	jasic *son = &ob;
	son->print( );       // jasic의 print가 나온다.
	son->bumo::print( );  // bumo의 print가 나온다.

	jasic &jr = ob;
	jr.print( );       // jasic의 print가 나온다.
	jr.bumo::print( );  // bumo의 print가 나온다.
}
/*
class stack {
	int data[5];
protected :
	int top;
public :
	stack( )         {   top = -1;           }
	void push(int x) {   data[++top]=x;      }
	int pop( )       {   return data[top--]; }
};
class stack2 : public stack {
public :
	void push(int x) {  //함수의 오버라이딩
		if(top==4) {
			cout << "stack Full!" << endl;
			return;
		}
		stack::push(x); // 부모 클래스의 오버라이딩 함수 호출
	}
	int pop( ) {
		if(top==-1) {      // 함수의 오버라이딩
			cout << "stack Empty!";
			return -9999;
		}
		return stack::pop( );        // 부모 클래스의 함수 호출
	}
};
void main( ) {
	stack2 ob;
	ob.push(10);  ob.push(20);  ob.push(30);  ob.push(40);  ob.push(50);  ob.push(60);
	cout << "pop=" << ob.pop( ) << endl;   //50
	cout << "pop=" << ob.pop( ) << endl;   //40
	cout << "pop=" << ob.pop( ) << endl;   //30
	cout << "pop=" << ob.pop( ) << endl;   //20
	cout << "pop=" << ob.pop( ) << endl;   //10
	cout << "pop=" << ob.pop( ) << endl;
}

/*
class A {
	const int ma;
public :
	A(int x) : ma(x) {     // 멤버변수의 콜론초기화
		// ma = x;
		cout << "ma=" << ma << endl;
	}
};
void main( ) {
	A ob(10);

}

/*
class A {
	int ma;
public :
	A(int x) {
		cout << "A class의 생성자" << x << endl;
	}
	~A( ) {
		cout << "A class의 소멸자" << endl;
	}
};
class B : public A {    // A를 상속받는 클래스 B
	int mb;
public :
	B(int x, int y) : A(x) {      // 부모class에 생성자함수 주는 법
		cout << "B class의 생성자" << y << endl;
	}
	~B( ) { 
		cout << "B class의 소멸자" << endl;
	}
};
void main( ) {
	B ob(10,20);
}
	
/*
class A {
protected :    // 이하 보호멤버
	int ma;
public :       // 이하 공용멤버
	void set(int x) {
		ma=x;
	}
	void print( )   {
		cout << "ma=" << ma << endl;
	}
};
class B : public A { // A를 상속 받은 자식 class B
	int mb;
public :
	void input(int y) { 
		mb=y;
	}
	void out( )   { 
		// cout << "상속 되었나?" << ma << endl;
		set(77);   print( );
		cout << "mb=" << mb << endl;
	}
};
void main( ) {
	B ob;
	ob.input(99);
	ob.out( );
	ob.set(10);
	ob.print( );
}
*/