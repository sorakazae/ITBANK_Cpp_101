#include <iostream>
using namespace std;

class Stud {
private :
	int no;
	int nai;
public :
	Stud( int x, int y ) {
		no = x;
		nai = y;
	}
	void prn( ) {
		cout << "번호 : " << no << "\t" << "나이 : " << nai << endl ;
	}
};
void main( ) {
	Stud arr[3] = { Stud(1, 15 ), Stud( 2, 25 ) };
	arr[0].prn( );
	arr[1].prn( );
	arr[2].prn( );
}

/*
#include <iostream>        // 예제 3-6 에러
using namespace std;

class Stud {
private :
	int no;
	int nai;
public :
	Stud( int x, int y ) {
		no = x;
		nai = y;
	}
	void prn( ) {
		cout << "번호 : " << no << "\t" << "나이 : " << nai << endl ;
	}
};
void main( ) {
	Stud arr[3] = { Stud(1, 15 ), Stud( 2, 25 ), Stud( 3, 35 ) };
	arr[0].prn( );
	arr[1].prn( );
	arr[2].prn( );
}

/*
#include <iostream>
#include <string>
using namespace std;

class Stud {
private :
	int No;
	char *name;
public :
	Stud( int x, char *y );
	void prn( );
	void input( );
	void del( );
};
Stud::Stud( int x, char *y ) {
	No = x;
	name = new char[strlen(y)+1];
	strcpy(name, y);
}
void Stud::prn( ) {
	cout << "번호 : " << No << "\t" << "이름 : " << name << endl ;
}
void Stud::del ( ) {
	delete name;
}
void Stud::input ( ) {
	cout << "번호를 입력해 주세요 : " ;
	cin >> No;
	cout << "이름을 입력해 주세요 : " ;
	cin >> name;
	cout << "입력 결과" << endl;
	prn( );
}
void main( ) {
	Stud ob1(0, "독수리오형제");
	ob1.prn( );
	ob1.input( );
	ob1.del( );
}

/*
#include <iostream>
#include <string>
using namespace std;

class Stud {
private :
	int no;
	char Name[10];
public :
	Stud(int x, char *y);
	void prn();
};
Stud::Stud(int x, char *y) {
	no = x;
	strcpy(Name, y);
}
void Stud::prn() {
	cout << "번호 : " << no << "\t" << "이름 : " << Name << endl ;
}
void main( ) {
	Stud ob1(1, "홍길동");
	ob1.prn();
}

/*
#include <iostream>
using namespace std;

class Stud {
private :
	int no;
	int nai;
public :
	Stud(int x, int y) {
		no = x;
		nai = y;
	}
	void prn() {
		cout << "번호 : " << no << "\t" << "나이 : " << nai << endl ;
	}
};
void main( ) {
	Stud ob1(1,25); // 객체를 만들면서 매개변수를 쓰면 생성자 함수에 전달된다.
	ob1.prn(); // 초기화된 값이 출력된다.
	Stud ob2(2,23); // 객체를 만들면서 매개변수를 쓰면 생성자 함수에 전달된다.
	ob2.prn(); // 초기화된 값이 출력된다.
}

/*
#include <iostream>                     예제 3-2
#include <string>
using namespace std;

class Stud {
private :
	int No;
	char *name;
public :
	Stud( );
	void prn( );
	void input( );
	void del( );
};
Stud::Stud( ) {
	No = 0;
	name = new char[7];
	strcpy(name, "noboby");
}
void Stud::prn( ) {
	cout << "번호 : " << No << "\t" << "이름 : " << name << endl ;
}
void Stud::del ( ) {
	delete name;
}
void Stud::input ( ) {
	cout << "번호를 입력해 주세요 : " ;
	cin >> No;
	cout << "이름을 입력해 주세요 : " ;
	cin >> name;
	cout << "입력 결과" << endl;
	prn( );
}
void main( ) {
	Stud ob1;
	ob1.prn( );
	ob1.input( );
	ob1.del( );
}

/*
#include<iostream>
#include <string>
using namespace std;

class Stud {
private :
	int No;
	char Name[10];
public :
	Stud();
	void prn();
};
Stud::Stud() {
	No = 0;
	strcpy(Name, "noboby");
}
void Stud::prn() {
	cout << "번호 : " << No << "\t" << "이름 : " << Name << endl ;
}
void main( ) {
	Stud ob1;
	ob1.prn();
}

/*
#include <iostream>
using namespace std;

class Stud {
private :
	int No;
	int nai;
public :
	Stud(); // 클래스 내부에는 생성자 함수에 대한 선언만 한다.
	void prn() {
		cout << "번호 : " << No << "\t" << "나이 : " << nai << endl ;
	}
};
Stud :: Stud() { // 클래스 외부에서 생성자 함수 정의하기
	No = 1;
	nai = 25;
}
void main( ) {
	Stud ob1; // 객체를 만들면 자동으로 생성자 함수가 실행된다.
	ob1.prn(); // 초기화된 값이 출력된다.
}

/*
#include <iostream>
using namespace std;

class Stud {
private :
	int No;
	int nai;
public :
	Stud() {
		No = 1;
		nai = 25;
	}
	void prn() {
		cout << "번호 : " << No << "\t" << "나이 : " << nai << endl ;
	}
};
void main( ) {
	Stud ob1; // 객체를 만들면 자동으로 생성자 함수가 실행된다.
	ob1.prn(); // 초기화된 값이 출력된다.
}

/*
#include <iostream>
using namespace std;

class Stud {
public :
	int No;
	int nai;
	void set() {
		No = 1;
		nai = 25;
	}
	void prn() {
		cout << "번호 : " << No << "\t" << "나이 : " << nai << endl ;
	}
};
void main( ) {
	Stud ob1;
	ob1.set(); // 객체를 만든 뒤 멤버변수를 초기화 할 함수를 별도로 호출함
	ob1.prn(); // 초기화된 값이 출력된다.
}

/*
#include <iostream>
using namespace std;

class Stud {
public :
	int No;
	int nai;
	void prn() {
		cout << "번호 : " << No << "\t" << "나이 : " << nai << endl ;
	}
};
void main( ) {
	Stud ob1 = { 1, 25 }; // 멤버변수가 public임으로 값을 직접 넣을 수 있다.
	ob1.prn(); // 초기화된 값이 출력된다.
}

/*
#include <iostream>
using namespace std;

class Stud {
private :
	int No;
	int nai;
public :
	void prn() {
		cout << "번호 : " << No << "\t" << "나이 : " << nai << endl ;
	}
};
void main( ) {
	Stud ob1 = {1, 25}; // 에러 발생 : 멤버변수가 private임으로 값을 직접 넣을 수 없다.
	ob1.prn();
}

/*
#include <iostream>
using namespace std;

class Point {
	int xp, yp;
public :
	void setpt(int x, int y) { xp = x, yp = y; }
	void offset(int x, int y) {xp += x, yp +=y; }
	int get_x() { return xp; }
	int get_y() { return yp; }
};
int main()
{
	Point p, *ptr; // Point 형 객체 포인터 *ptr
	p.setpt(10, 20);
	ptr = &p;
	ptr->offset(100, 200);
	cout << "== 직접 참조 ==\n";
	cout << "x 좌표 : " << p.get_x()
		<< ", y 좌표 : " << p.get_y() << endl;
	cout << "\n== 간접 참조 ==\n";
	cout << "x 좌표 : " << ptr->get_x()
		<< ", y 좌표 : " << ptr->get_y() << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;

class Circle {
	int Radius;
public :
	void set(int R) { Radius = R; }
	double Area() { return (3.14 * Radius * Radius); }
};
int main()
{
	Circle Cir[5]; // 객체 배열
	cout << "== 원의 넓이 구하기 ==\n";
	for(int i=0; i<5; i++) {
		Cir[i].set(i+1);
		cout << "반지름(" << i+1 << ")=> " << Cir[i].Area() << endl;
	}
	return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

class String {
	char *str;
	int len;
public:
	void set(char *cp);
	void prn();
};
void String::set(char *cp) {
	len = strlen(cp);
	str = new char[len+1];
	strcpy(str, cp);
}
void String::prn() {
	cout << "문자열 : " << str << "(" << len << ")\n";
}
String input() {
	char text[80];
	String temp;
	cout << "Input String : ";
	cin >> text;
	temp.set(text);
	return temp;
}
int main()
{
	String str1;
	str1 = input();
	str1.prn();
	return 0;
}

/*
#include <iostream>
using namespace std;

class XY {
	int x, y;
public:
	void set_xy(int a, int b) { x = a, y = b; }
	int get_x() { return x; }
	int get_y() { return y; }
};
void swap(XY ob) {
	ob.set_xy(ob.get_y(), ob.get_x());
	cout << "== swap() ==\n";
	cout << "x = " << ob.get_x() << ", y = " << ob.get_y() << endl;
}
int main()
{
	XY ob;
	ob.set_xy(10, 20);
	swap(ob);
	cout << "\n== Main() ==\n";
	cout << "x = " << ob.get_x() << ", y = " << ob.get_y() << endl;
	return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

class String {
	char *str;
	int len;
public:
	void set(char *cp);
	void prn();
};
void String::set(char *cp) {
	len = strlen(cp);
	str = new char[len+1];
	strcpy(str, cp);
}
void String::prn() {
	cout << "문자열 : " << str
		<< "(" << len << ")" << endl;
}
int main()
{
	String str1, str2;
	str1.set("The first string");
	str2.set("This is the second string");
	str1.prn();
	str2.prn();
	cout << "\n==========================\n";
	str1 = str2; //객체 복사
	str1.prn();
	str2.prn();
	return 0;
}

/*
#include <iostream>
using namespace std;

class Date {
	int year, month, day;
public:
	void set_date(int y, int m, int d);
	int get_year() { return year; }
	int get_month() { return month; }
	int get_day() { return day; }
};
void Date::set_date(int m, int d, int y = 2005) {
	year = y;
	month = m;
	day = d;
}
int main()
{
	Date dt;
	dt.set_date(3, 25);
	cout << dt.get_year() << "."
		<< dt.get_month() << "."
		<< dt.get_day() << endl;
	dt.set_date(1, 1, 2000);
	cout << dt.get_year() << "."
		<< dt.get_month() << "."
		<< dt.get_day() << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;

class Circle {
	double Radius;
public :
	double Circle_Area();
};
double Circle::Circle_Area()
{
	Radius = 5.0;
	return (3.14 * 5.0 * 5.0);
}
int main()
{
	Circle Cir1;
	cout << "원의 면적은 " << Cir1.Circle_Area()
		<< "입니다" << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;

class Counter {
	int value;
public :
	void set(int n) { value = n; }
	void inc() {++value; }
	void dec() {--value; }
	int val() { return value; }
};
int main()
{
	Counter cnt1, cnt2;
	cnt1.set(10);
	cnt1.inc();
	cout << "cnt1 value : " << cnt1.val() << endl;
	cnt2.set(0);
	cnt2.dec();
	cout << "cnt2 value : " << cnt2.val() << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;
class Circle {
	double Radius;
public :
	double Circle_Area() {
		Radius = 5.0;
		return (3.14 * 5.0 * 5.0);
	}
};
int main()
{
	Circle Cir1;
	// Cir1.Radius = 6.0; 에러
	cout << "원의 면적은 " << Cir1.Circle_Area()
		<< "입니다" << endl;
	return 0;
}
*/