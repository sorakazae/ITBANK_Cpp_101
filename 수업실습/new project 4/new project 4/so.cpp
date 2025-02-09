#include <iostream>
using namespace std;

class nike {
	int nai;
	double ki;
public :
	void set(int x, double y) {   //컴파일 하면  void set(nike *this, int x, double y);  로 바뀜
		this->nai = x, this->ki = y;
	}
	void print( ) {   //         void print(nike *this) {
		cout << "nai=" << nai << ", ki=" << ki << endl;
	}
	friend void reset(nike &temp);   // 프렌드 함수의 선언
};
void reset(nike &temp) {    // 프렌드 함수의 정의
	temp.nai = temp.ki = 0;
}
void main( ) {
	nike ob, pb;
	ob.set(10, 100.5);  // 컴파일 하면  ob.set(&ob, 10, 100.5);  로 바뀜
	pb.set(20, 200.5);  //             pb.set(&pb, 20, 200.5);
	ob.print( );        //       ob.print(&ob)
	pb.print( );        //       pb.print(&pb)
	reset(ob);
	ob.print( );
}

/*
#include <iostream>
#include <string>
using namespace std;
class str {
	char *data;
	int len;
public :
	str(char *x) {
		len = strlen(x);
		data = new char[len+1];
		strcpy(data, x);
	}
	str(str &temp) {   // 사용자가 정의한 복사생성자
		len = temp.len;
		data = new char[len+1];
		strcpy(data, temp.data);
	}
	void print( ) {
		cout << data << "(" << len << ")" << endl;
	}
	~str( ) {     // 사용자가 정의한 소멸자 함수
		cout << data << "의 동적할당 해제" << endl;
		delete []data;
	}
};
void main( ) {
	str ob("korea"), pb(ob);
}
/*	
class nike {
	int nai;
	double ki;
public :
	nike(nike &temp) {                   // 컴파일러가 만들어준 복사생성자
		cout << "내가 만든 복사 생성자" << endl;
		nai=temp.nai, ki=temp.ki;
	}
	nike(int x, double y) {   // 사용자가 정의한 생성자 함수
		cout << "생성자 함수가 실행된다." << endl;
		nai = x, ki = y;
	}
	void print( ) {
		cout << "nai=" << nai << ", ki=" << ki << endl;
	}
};
void func(nike temp) {
	temp.print( );
}
void main( ) {
	nike ob(10, 100.5), pb(ob);
	ob.print( );    pb.print( );
	func(ob);
}
/*
class str {
	char *data;
	int len;
public :
	str(char *x) {
		len = strlen(x);
		data = new char[len+1];
		strcpy(data, x);
	}
	void print( ) {
		cout << data << "(" << len << ")" << endl;
	}
	~str( ) {     // 사용자가 정의한 소멸자 함수
		cout << data << "의 동적할당 해제" << endl;
		delete []data;
	}
};
void func( ) {
	str t1("111");
}
void main( ) {
	str ob("korea"), pb("japan");
	ob.print( );   pb.print( );
	func( );
	{
		str t2("222");
	}
	str arr[3]={str("555"),str("666"),str("777") };
}
/*
class nike {
	int nai;
	double ki;
public :
	nike( ) {
		cout << "난 매개변수가 없는 생성자" << endl;
		nai = ki = 1;
	}
	nike(int x, double y) {   // 사용자가 정의한 생성자 함수
		cout << "생성자 함수가 실행된다." << endl;
		nai = x, ki = y;
	}
	void set(int x, double y) {
		nai = x, ki = y;
	}
	void print( ) {
		cout << "nai=" << nai << ", ki=" << ki << endl;
	}
};
void main( ) {
	// nike ob={7,7.5};
	nike ob(20, 200.5);   // 객체생성시 생성자에 매개변수 주는법
	nike pb;
	ob.print( );
	ob.set(10, 100.5);
	ob.print( );
	// ob.nike( );      // 생성자 함수는 직접 호출 불가

	nike a[3]={nike(1,1.5),nike(2, 2.5),nike(3,3.5)};   // 배열로 만드는 법ㅜ
	a[0].print( );
	a[1].print( );
	a[2].print( );

	nike *np = new nike(77, 707.5);       // 동적할당으로 만드는 법
}
*/