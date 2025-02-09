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

	nike arr[3];          // 객체를 배열로 생성
	arr[0].set(1, 1.5);
	arr[1].set(2, 2.5);
	arr[2].set(3, 3.5);
	arr[0].print( );      // 1, 1.5
	arr[1].print( );      // 2, 2.5
	arr[2].print( );      // 3, 3.5

	nike *cp;        // class nike * 변수 cp;
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
	void push(int x) {      // stack에 넣는것
		top++;
		data[top] = x;
	}
	int pop( ) {           // stack에서 빼는것
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
	int x, y;     // 원의 중심점 좌표를 저장할 멤버변수
	double r;    // 반지름을 저장할 멤버변수
public :
	void set(int a, int b, double c) {
		x=a, y=b, r=c;
		cout << "중심점이 " << x << ", " << y << "이고 " << "반지름이 " << r << "인 원이 만들어짐" << endl;
	}
	void print( ) {
		cout << "중심점이 " << x << ", " << y << "이고 " << "반지름이 " << r << "인 원"<< endl;
	}
	void move(int a, int b) {
		x=x+a, y=y+b;
		print( );              // 멤버함수에서 다른 멤버함수 호출 //가능함
	}
};
void main( ) {
	circle c1;
	c1.set(10, 20, 5.5);
	c1.print( );
	c1.move(5, 50);
}

/*
class first {  // class first의 정의
private :          // 여기서부터 다음 키워드 까지 전용멤버
	int a;              // 멤버변수 1
	float b;            // 멤버변수 2
public :           // 여기서부터 다음 키워드 까지 공용멤버
	void print( );           // 멤버함수 1의 원형
	void set(int x, float y);             // 멤버함수 2의 원형
	
};            // class first의 정의 종료

void first::print( ) {     // 멤버함수 1의 정의
	cout << "난 print함수다!" << endl;
	cout << "a=" << a << ",b=" << b << endl;
}
void first::set(int x, float y)  {   // 멤버함수 2의 정의
	a=x, b=y;
}

void main( ) {
	first ob;   // first형 객체 ob 생성
	// ob.a = 10;// 에러 : private 멤버는 외부호출 불가
	ob.print( );   // public 멤버는 외부호출 가능
	ob.set(7, 7.5);
	ob.print( );
}
*/