#include <iostream>
#include <string>
using namespace std;
void main( ) {
	int (*ip)[3];
	ip=new int[2][3];      // ���� �Է¹��� ������ ����� ������  

	char (*cp)[7];
	cp = new char[5][7];   // ���� �������� ���ƾ� �ϹǷ�

	double (*dp)[3];
	dp = new double[15][3]; // �Է¹��� ������ �� �� ����.

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
	short **ip2=&ip;  // short�� ��ø ������ ip2

	short arr[2][3]={10,20,30,40,50,60};
	// ip=arr;     //����

	short (*sp)[3];   // short[3]�� ���� ������ sp   // �迭�� ������
	sp=arr;
}

/*
char *input( ) {
	char *temp;
	char data[1000];
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> data;
	temp = new char[strlen(data)+1];       // strlen ���ڿ� ���� �����ϴ� �Լ�
	strcpy(temp, data);                    // strcpy ���ڿ� ���� ���ִ� �Լ�
	return temp;
}
void main( ) {
	char *name;
	name = input( ) ;
	cout << "�̸� : " << name << endl;
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
	cout << "�̸��� �ѱ۷� ����� �Դϱ�? ";
	cin >> size;
	name = new char[size*2+1];     // �Է¹��� ũ��� �����Ҵ�
	cout << "�̸��� �Է��ϼ��� : ";
	cin >> name;
	cout << "�̸� : " << name << endl;
	delete []name;                 // �����Ҵ� ����
}

/*
void main( ) {
	int *ip;
	ip = new int;  // int �� �� ��ŭ �����޸� �Ҵ�
	*ip = 10;
	cout << "*ip=" << *ip << ", " << ip << endl;
	delete ip;     // ip�� ����Ű�� ���� �����Ҵ� ����

	ip = new int;  // int �� �� ��ŭ �����޸� �Ҵ�
	*ip = 20;
	cout << "*ip=" << *ip << ", " << ip << endl;
	delete ip;     // ip�� ����Ű�� ���� �����Ҵ� ����

	ip = new int[3];  // int �� �� ��ŭ �����޸� �Ҵ�
	ip[0]=11, ip[1]=22, ip[2]=33;
	cout << ip[0] << ip[1] << ip[2] << endl;
	delete []ip;     // �迭�� �Ҵ�� ������ �����Ҵ� ����
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
	cout << "swap�� a=" << a << ", b=" << b << endl;
	myswap1(a, b);
	cout << "myswap1 �� a=" << a << ", b=" << b << endl;
	myswap2(&a, &b);
	cout << "myswap2 �� a=" << a << ", b=" << b << endl;
	myswap3(a, b);
	cout << "myswap3 �� a=" << a << ", b=" << b << endl;
}

/*
void main ( ) {
	short a=10;   // short�� ���� a
	short &b=a;   // short�� ���� a�� ���� b

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
struct myst {      // ����ڰ� ���� ����ü myst
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