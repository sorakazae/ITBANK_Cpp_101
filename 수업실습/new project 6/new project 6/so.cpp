#include <iostream>
using namespace std;
class bumo {
	int ma;
public :
	virtual void print( ) {
		cout << "�θ��� print" << endl;
	}
	virtual void pp( ) = 0;        // ���� �����Լ�
};
class jasic : public bumo {
	int mb;
public :
	virtual void print( ) {
		cout << "�ڽ��� print" << endl;
	}
	void myst( ) {        }
	void pp( ) {            }
};
void main( ) {
	// bumo aa;
	jasic ob;
	ob.print( );    // jasic�� print�� ���´�.              ��������
	ob.bumo::print( ); // bumo�� print�� ���´�.             ��������
	ob.jasic::print( );

	bumo *mom = &ob;
	mom->print( );         //�θ��� ������ ���� �������ϸ� �θ� ����    //bumo�� print�� ���´�.
	          // ��, print�� �����Լ���� jasic�� print�� ���´�.
	mom->bumo::print( );  // bumo�� print�� ���´�.
	// mom->myst( );
	// mom->jasic::print( );

	bumo &fa = ob;
	fa.print( );        // bumo�� print�� ����
	             // ��, print�� �����Լ���� jasic�� print�� ���´�.
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
	son->print( );       // jasic�� print�� ���´�.
	son->bumo::print( );  // bumo�� print�� ���´�.

	jasic &jr = ob;
	jr.print( );       // jasic�� print�� ���´�.
	jr.bumo::print( );  // bumo�� print�� ���´�.
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
	void push(int x) {  //�Լ��� �������̵�
		if(top==4) {
			cout << "stack Full!" << endl;
			return;
		}
		stack::push(x); // �θ� Ŭ������ �������̵� �Լ� ȣ��
	}
	int pop( ) {
		if(top==-1) {      // �Լ��� �������̵�
			cout << "stack Empty!";
			return -9999;
		}
		return stack::pop( );        // �θ� Ŭ������ �Լ� ȣ��
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
	A(int x) : ma(x) {     // ��������� �ݷ��ʱ�ȭ
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
		cout << "A class�� ������" << x << endl;
	}
	~A( ) {
		cout << "A class�� �Ҹ���" << endl;
	}
};
class B : public A {    // A�� ��ӹ޴� Ŭ���� B
	int mb;
public :
	B(int x, int y) : A(x) {      // �θ�class�� �������Լ� �ִ� ��
		cout << "B class�� ������" << y << endl;
	}
	~B( ) { 
		cout << "B class�� �Ҹ���" << endl;
	}
};
void main( ) {
	B ob(10,20);
}
	
/*
class A {
protected :    // ���� ��ȣ���
	int ma;
public :       // ���� ������
	void set(int x) {
		ma=x;
	}
	void print( )   {
		cout << "ma=" << ma << endl;
	}
};
class B : public A { // A�� ��� ���� �ڽ� class B
	int mb;
public :
	void input(int y) { 
		mb=y;
	}
	void out( )   { 
		// cout << "��� �Ǿ���?" << ma << endl;
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