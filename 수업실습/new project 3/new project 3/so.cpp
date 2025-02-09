#include <iostream>
using namespace std;
class nike{
	int nai;
	float ki;
public :
	void set(int x, double y) { nai=x, ki=y; }
	void print( ) {
		cout <<"nai = " << nai << ", ki = " << ki << endl;
	}
};
nike func(nike temp) {
	temp.print( ) ;
	temp.set(99, 99.9);
	return temp;
}
void main( ) {
	nike ob, pb;
	cout << sizeof(ob) << endl;
	ob.set(10, 100.5);
	ob.print( );
	pb = func(ob);
	pb.print( );

	nike arr[3];          // ��ü�� �迭�� ����
	arr[0].set(1, 1.5);
	arr[1].set(2, 2.5);
	arr[2].set(3, 3.5);
	arr[0].print( );      // 1, 1.5
	arr[1].print( );      // 2, 2.5
	arr[2].print( );      // 3, 3.5

	nike *cp;        // class nike * ���� cp;
	cp = &ob;
	(*cp).print( );     // 10, 100.5
	cp->print( );       // 10, 100.5

	cp = arr;
	cp->print( );        // 1, 1.5
	(cp+1)->print( );    // 2, 2.5
	cp[2].print( );      // 3, 3.5
}

/*
class stack {
private :
	int data[5];
	int top;
public :
	void start( ) { top=-1; }
	void push(int x) {      // stack�� �ִ°�
		top++;
		data[top] = x;
	}
	int pop( ) {           // stack���� ���°�
		return data[top--];
	}
};


void main( ) {
	stack ob;
	ob.start( );
	ob.push(10); ob.push(20); ob.push (30);

	stack pb;
	pb=ob;

	cout << ob.pop( ) << endl;     //30
	cout << ob.pop( ) << endl;     //20
	cout << ob.pop( ) << endl;     //10

	cout << pb.pop( ) << endl;     //30
	cout << pb.pop( ) << endl;     //20
	cout << pb.pop( ) << endl;     //10
}

/*
class circle {
private :
	int x, y;     // ���� �߽��� ��ǥ�� ������ �������
	double r;    // �������� ������ �������
public :
	void set(int a, int b, double c) {
		x=a, y=b, r=c;
		cout << "�߽����� " << x << ", " << y << "�̰� " << "�������� " << r << "�� ���� �������" << endl;
	}
	void print( ) {
		cout << "�߽����� " << x << ", " << y << "�̰� " << "�������� " << r << "�� ��"<< endl;
	}
	void move(int a, int b) {
		x=x+a, y=y+b;
		print( );              // ����Լ����� �ٸ� ����Լ� ȣ�� //������
	}
};
void main( ) {
	circle c1;
	c1.set(10, 20, 5.5);
	c1.print( );
	c1.move(5, 50);
}

/*
class first {  // class first�� ����
private :          // ���⼭���� ���� Ű���� ���� ������
	int a;              // ������� 1
	float b;            // ������� 2
public :           // ���⼭���� ���� Ű���� ���� ������
	void print( );           // ����Լ� 1�� ����
	void set(int x, float y);             // ����Լ� 2�� ����
	
};            // class first�� ���� ����

void first::print( ) {     // ����Լ� 1�� ����
	cout << "�� print�Լ���!" << endl;
	cout << "a=" << a << ",b=" << b << endl;
}
void first::set(int x, float y)  {   // ����Լ� 2�� ����
	a=x, b=y;
}

void main( ) {
	first ob;   // first�� ��ü ob ����
	// ob.a = 10;// ���� : private ����� �ܺ�ȣ�� �Ұ�
	ob.print( );   // public ����� �ܺ�ȣ�� ����
	ob.set(7, 7.5);
	ob.print( );
}
*/