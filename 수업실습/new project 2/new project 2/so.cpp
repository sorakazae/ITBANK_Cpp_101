#include <iostream>
#include <string>
using namespace std;
void main( ) {
	int (*ip)[3];
	ip=new int[2][3];      // 행은 입력받은 값으로 만들수 있지만  

	char (*cp)[7];
	cp = new char[5][7];   // 열은 위에꺼와 같아야 하므로

	double (*dp)[3];
	dp = new double[15][3]; // 입력받은 값으로 할 수 없다.

	char **jp;
	jp = new char *[2];
	jp[0] = new char[3];
	jp[1] = new char[3];

	delete []jp[0];
	delete []jp[1];
	delete []jp;
}

/*
void main( ) {
	short a=10;
	short *ip=&a;
	short **ip2=&ip;  // short형 중첩 포인터 ip2

	short arr[2][3]={10,20,30,40,50,60};
	// ip=arr;     //에러

	short (*sp)[3];   // short[3]에 대한 포인터 sp   // 배열형 포인터
	sp=arr;
}

/*
char *input( ) {
	char *temp;
	char data[1000];
	cout << "이름을 입력하세요 : ";
	cin >> data;
	temp = new char[strlen(data)+1];       // strlen 문자열 길이 측정하는 함수
	strcpy(temp, data);                    // strcpy 문자열 복사 해주는 함수
	return temp;
}
void main( ) {
	char *name;
	name = input( ) ;
	cout << "이름 : " << name << endl;
	delete []name;
}
/*
char *f1( ) {
	char name[ ] = "kor";
	return name;
}
char *f2( ) {
	char *name = new char[4];
	strcpy(name, "kor");
	return name;
}
void main( ) {
	char *cp;
	cp = f1( );
	cout << cp[0] << endl;
	cout << cp[1] << endl;
	cout << cp[2] << endl;
	cp = f2( );
	cout << cp[0] << endl;
	cout << cp[1] << endl;
	cout << cp[2] << endl;
	delete []cp;
}

/*
void main( ) {
	char *name;
	int size;
	cout << "이름이 한글로 몇글자 입니까? ";
	cin >> size;
	name = new char[size*2+1];     // 입력받은 크기로 동적할당
	cout << "이름을 입력하세요 : ";
	cin >> name;
	cout << "이름 : " << name << endl;
	delete []name;                 // 동적할당 해제
}

/*
void main( ) {
	int *ip;
	ip = new int;  // int 한 개 만큼 동적메모리 할당
	*ip = 10;
	cout << "*ip=" << *ip << ", " << ip << endl;
	delete ip;     // ip가 가리키는 곳의 동적할당 해제

	ip = new int;  // int 한 개 만큼 동적메모리 할당
	*ip = 20;
	cout << "*ip=" << *ip << ", " << ip << endl;
	delete ip;     // ip가 가리키는 곳의 동적할당 해제

	ip = new int[3];  // int 세 개 만큼 동적메모리 할당
	ip[0]=11, ip[1]=22, ip[2]=33;
	cout << ip[0] << ip[1] << ip[2] << endl;
	delete []ip;     // 배열로 할당된 공간의 동적할당 해제
}

/*
void myswap1(int x, int y) {    // call by value
	int temp = x;
	x = y;
	y = temp;
}
void myswap2(int *x, int *y) {   // call by pointer
	int temp = *x;
	*x = *y;
	*y = temp;
}
void myswap3(int &x, int &y) {   // call by referance
	int temp = x;
	x = y;
	y = temp;
}
void main( ) {
	int a=10, b=20;
	cout << "swap전 a=" << a << ", b=" << b << endl;
	myswap1(a, b);
	cout << "myswap1 후 a=" << a << ", b=" << b << endl;
	myswap2(&a, &b);
	cout << "myswap2 후 a=" << a << ", b=" << b << endl;
	myswap3(a, b);
	cout << "myswap3 후 a=" << a << ", b=" << b << endl;
}

/*
void main ( ) {
	short a=10;   // short형 변수 a
	short &b=a;   // short형 변수 a의 별명 b

	cout << "&a=" << &a << endl;
	cout << "&b=" << &b << endl;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	a=20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b=30;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

/*
struct myst {      // 사용자가 만든 구조체 myst
	int nai;
	float ki;
}
myst func(myst temp) {
	temp.nai = 20;
	temp.ki = 180.5;
	return temp;
}
void main {
	myst ob = {10,100.5};
	ob = func(ob);
}
*/