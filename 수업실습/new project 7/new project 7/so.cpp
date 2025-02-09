#include <iostream>
#include <string>
using namespace std;

template <class dt>       // ���ø� �Լ� dt�� ����
void myswap(dt &x, dt &y) {
	dt temp = x;            // ���ڿ��� �� ���(����)���� �� �� ����.
	x=y;
	y=temp;
}
void myswap(char *x, char *y) {
	char temp[6];            // ���ڿ� ���� ���� �Լ�.  ���ø� �Լ��� �����ε�
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
template <class dt, class dt2, class dt3>       // ���ø� �Լ� dt�� ����
void myswap(dt &x, dt2 &y) {
	dt3 temp = x;
	x=y;
	y=temp;
}

void main( ) {
	int a = 10, b = 20;
	myswap<int, int, int>(a, b);              // ���� �ٲ��� �𸣴� ��쿡�� <'������ Ÿ��',...> �� ���־�� �Ѵ�.
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
		cout << "A�� ������!" << endl;
	}
	~A( ) {
		cout << "A�� �Ҹ���!" << endl;
	}
	void printA( ) {
		cout << "A�� print�Լ� : " << ma << endl;
	}
	virtual void reset( ) {         // �����Լ�
		ma = 0;
		printA( );
	}
	virtual void kk( ) = 0;        // ���������Լ��� ����
};
class B : public A {
protected :
	int mb;
public :
	B(int x, int y) : A(x), mb(y) {
		cout << "B�� ������!" << endl;
	}
	~B( ) {
		cout << "B�� �Ҹ���!" << endl;
	}
	void printB( ) {
		cout << "B�� print�Լ� : " << mb << endl;
	}
	virtual void reset( ) {          // �����Լ�
		mb = 0;
		printB( );
	}
};
class C : public B {
	int mc;
public :
	C(int x, int y, int z) : B(x, y),mc(z) {         // �Ű躯�� ���� ���� ��� ����.
		cout << "C�� ������!" << endl;
	}
	~C( ) {
		cout << "C�� �Ҹ���!" << endl;
	}
	void printC( ) {
		cout << "ma=" << ma << endl;
		cout << "mb=" << mb << endl;
		cout << "C�� print�Լ� : " << mc << endl;
	}
	void reset( ) {
		mc = 0;
		printC( );
	}
	void kk( ) {          // ���������Լ��� ����
		cout << "���������Լ� kk�� ����" << endl;
	}
};
void main( ) {
	C ob(10, 20, 30);
	ob.printA( );
	ob.printB( );
	ob.printC( );
	cout << "-------�Լ��� �������̵�-------" << endl;
	ob.reset( );       // C�� reset�Լ��� ���´�.
	ob.A::reset( );    // A�� reset�Լ� ȣ��
	ob.B::reset( );    // B�� reset�Լ� ȣ��

	cout << "-------�θ��� ������-------" << endl;
	A *ap = &ob;
	B *bp = &ob;
	cout << "ap=" << ap << ", " << "bp=" << bp << endl;
	ap->reset( );      // reset�� �����Լ��� �ƴϸ� A�� reset(�θ�) �´ٸ� C�� reset(�ڽ�)�� ���´�.
	bp->reset( );      // reset�� �����Լ��� �ƴϸ� B�� reset(�θ�) �´ٸ� C�� reset(�ڽ�)�� ���´�.
}




/*
class A {
protected :
	int ma;
public :
	A(int x) : ma(x) {
		cout << "A�� ������!" << endl;
	}
	~A( ) {
		cout << "A�� �Ҹ���!" << endl;
	}
	void printA( ) {
		cout << "A�� print�Լ� : " << ma << endl;
	}
	virtual void reset( ) {         // �����Լ�
		ma = 0;
		printA( );
	}
	virtual void kk( ) = 0;        // ���������Լ��� ����
};
class B {
protected :
	int mb;
public :
	B(int y) : mb(y) {
		cout << "B�� ������!" << endl;
	}
	~B( ) {
		cout << "B�� �Ҹ���!" << endl;
	}
	void printB( ) {
		cout << "B�� print�Լ� : " << mb << endl;
	}
	virtual void reset( ) {          // �����Լ�
		mb = 0;
		printB( );
	}
};
class C : public A, public B {
	int mc;
public :
	C(int x, int y, int z) : A(x), B(y), mc(z) {         // �Ű躯�� ���� ���� ��� ����.
		cout << "C�� ������!" << endl;
	}
	~C( ) {
		cout << "C�� �Ҹ���!" << endl;
	}
	void printC( ) {
		cout << "ma=" << ma << endl;
		cout << "mb=" << mb << endl;
		cout << "C�� print�Լ� : " << mc << endl;
	}
	void reset( ) {
		mc = 0;
		printC( );
	}
	void kk( ) {          // ���������Լ��� ����
		cout << "���������Լ� kk�� ����" << endl;
	}
};
void main( ) {
	C ob(10, 20, 30);
	ob.printA( );
	ob.printB( );
	ob.printC( );
	cout << "-------�Լ��� �������̵�-------" << endl;
	ob.reset( );       // C�� reset�Լ��� ���´�.
	ob.A::reset( );    // A�� reset�Լ� ȣ��
	ob.B::reset( );    // B�� reset�Լ� ȣ��

	cout << "-------�θ��� ������-------" << endl;
	A *ap = &ob;
	B *bp = &ob;
	cout << "ap=" << ap << ", " << "bp=" << bp << endl;
	ap->reset( );      // reset�� �����Լ��� �ƴϸ� A�� reset(�θ�) �´ٸ� C�� reset(�ڽ�)�� ���´�.
	bp->reset( );      // reset�� �����Լ��� �ƴϸ� B�� reset(�θ�) �´ٸ� C�� reset(�ڽ�)�� ���´�.
}
*/