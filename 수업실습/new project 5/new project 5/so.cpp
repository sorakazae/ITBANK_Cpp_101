#include <iostream>
using namespace std;
class arr {
	int data[5];
public :
	void set(int x, int y) {
		data[x]=y;
	}
	void print(int x) {
		cout << data[x];
	}
	int operator[](int x) {
		if(x>=0 && x<=4)
			return data[x];
		else {
			cout << "배열의 범위 초과";
			return -9999;
		}
	}
};
void main( ) {
	arr ob;
	for (int x=0; x<=4; x++) {
		ob.set(x, (x+1)*10);
		ob.print(x);
	}
	for (int x=0; x<=5; x++) {
		cout << ob[x] << endl;
	}
}
/*
class nike {
	int nai;
	double ki;
public :
	nike(int x, double y) {
		nai = x, ki = y;
	}
	void print( ) {
		cout << "nai=" << nai << ", ki=" << ki << endl;
	}
	nike operator + (int y) {   // +연산자 오버로딩함수
		nike temp(0, 0);
		temp.nai = nai + y;
		temp.ki = ki + y;
		return temp;
	}
	nike operator + (nike y) {   // +연산자 오버로딩함수
		nike temp(0, 0);
		temp.nai = nai + y.nai;
		temp.ki = ki + y.ki;
		return temp;
	}
	void operator++( ) {
		nai++, ki++;
	}
	nike operator - () {
		nai = -nai;     ki = -ki;
		return *this;
	}
};
void main( ) {
	nike ob(10, 100.1), pb(20, 200.2);
	ob = ob + 1;
	ob.print( );   // 11, 101.1
	ob = ob + pb;
	ob.print( );   // 31, 301.3
	ob++;
	ob.print( );   // 32, 302.3
	ob= -ob;
	ob.print( );   // -32, -302.3
}
/*
class nike {
	int nai;
	double ki;
public :
	nike(int x, double y) {
		nai = x, ki = y;
	}
	void print( ) {
		cout << "nai=" << nai << ", ki=" << ki << endl;
	}
	friend nike operator + (nike x,int y);
	friend nike operator + (int x,nike y);
	friend nike operator + (nike x,nike y);
	friend nike operator - (nike x,int y);
	friend nike operator - (nike x,nike y);
	friend nike operator / (nike x,int y);
	friend int operator < (nike x, nike y);
	friend int operator > (nike x, nike y);
};

nike operator + (nike x,int y) {   // +연산자 오버로딩함수
	nike temp(0, 0);
	temp.nai = x.nai + y;
	temp.ki = x.ki + y;
	return temp;
}
nike operator + (int x,nike y) {   // +연산자 오버로딩함수
	nike temp(0, 0);
	temp.nai = x + y.nai;
	temp.ki = x + y.ki;
	return temp;
}
nike operator + (nike x,nike y) {   // +연산자 오버로딩함수
	nike temp(0, 0);
	temp.nai = x.nai + y.nai;
	temp.ki = x.ki + y.ki;
	return temp;
}
nike operator - (nike x,int y) {   // -연산자 오버로딩함수
	nike temp(0, 0);
	temp.nai = x.nai - y;
	temp.ki = x.ki - y;
	return temp;
}
nike operator - (nike x,nike y) {   // -연산자 오버로딩함수
	nike temp(0, 0);
	temp.nai = x.nai - y.nai;
	temp.ki = x.ki - y.ki;
	return temp;
}
nike operator / (nike x,int y) {   // /연산자 오버로딩함수
	nike temp(0, 0);
	temp.nai = x.nai / y;
	temp.ki = x.ki / y;
	return temp;
}
int operator < (nike x, nike y) {
	if(x.nai<y.nai && x.ki<y.ki)
		return 1;
	else
		return 0;
}
int operator > (nike x, nike y) {
	if(x.nai>y.nai && x.ki>y.ki)
		return 1;
	else
		return 0;
}

void main( ) {
	nike ob(10, 100.1), pb(20, 200.2);
	ob = ob + 1;
	ob.print( );   // 11, 101.1
	ob = 2 + ob;
	ob.print( );   // 13, 103.1
	ob = ob + pb;
	ob.print( );   // 33, 303.3
	ob = ob - 3;
	ob.print( );   // 30, 300.3
	ob = ob - pb;
	ob.print( );   // 10, 100.1
	ob = ob/2;
	ob.print( );   // 5, 50.05
	// ob의 모든 멤버가 pb의 멤버보다 작으면 ob가 pb보다 작다
	// ob의 모든 멤버가 pb의 멤버보다 크다면 ob가 pb보다 크다
	cout << "ob<pb=" << (ob<pb) << endl;     // 1
	cout << "ob>pb=" << (ob>pb) << endl;     // 0
}

/*
struct st {
	int ma;
};
void main( ) {
	cout << 3+4 << endl;        // +(int, int)
	cout << "korea"+1 << endl;  // +(char *, int)
	cout << 2+"korea" << endl;  // +(int, char *)
	cout << "kor" + "ea" << endl;  // +(char *, char *) 연산자 함수가 없다. (연산자 오버로딩)

	st ob = {7}, pb = {9};
	cout << ob+1 << endl;  // +(st, int) 없다.
	cout << 2+ob << endl;  // +(int, st) 없다.
	cout << ob+pb << endl; // +(st, st)  없다.
}

/*
class nike {
	int nai;
	double ki;
	static int cnt;          // 정적멤버 변수
public :
	nike(int x, double y) {
		nai = x, ki = y;
	}
	void print( ) {
		cout << "nai=" << nai << ", ki=" << ki << endl;
	}
	int recnt( ) {  return cnt;     }
	void incnt(int x)   { cnt = x;   }
	static void setcnt(int x){        // 정적 멤버 변수
		cnt = x; 
	}
	static int callcnt( ) { return cnt; }      // 정적멤버함수
};
int nike::cnt=0;             // 정적멤버 변수의 초기화

void main( ) {
	nike::setcnt(5);
	cout << "cnt = " << nike::callcnt << endl;
	nike ob(1, 1.5), pb(2, 2.5), qb(3, 3.5);
	ob.print( );    pb.print( );   qb.print( );
	cout << ob.recnt() << pb.recnt() << qb.recnt() << endl;
	ob.incnt(10);
	cout << ob.recnt() << pb.recnt() << qb.recnt() << endl;
}
*/