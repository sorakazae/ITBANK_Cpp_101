#include <iostream>
using namespace std;

class nike {
	int nai;
	double ki;
public :
	void set(int x, double y) {   //������ �ϸ�  void set(nike *this, int x, double y);  �� �ٲ�
		this->nai = x, this->ki = y;
	}
	void print( ) {   //         void print(nike *this) {
		cout << "nai=" << nai << ", ki=" << ki << endl;
	}
	friend void reset(nike &temp);   // ������ �Լ��� ����
};
void reset(nike &temp) {    // ������ �Լ��� ����
	temp.nai = temp.ki = 0;
}
void main( ) {
	nike ob, pb;
	ob.set(10, 100.5);  // ������ �ϸ�  ob.set(&ob, 10, 100.5);  �� �ٲ�
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
	str(str &temp) {   // ����ڰ� ������ ���������
		len = temp.len;
		data = new char[len+1];
		strcpy(data, temp.data);
	}
	void print( ) {
		cout << data << "(" << len << ")" << endl;
	}
	~str( ) {     // ����ڰ� ������ �Ҹ��� �Լ�
		cout << data << "�� �����Ҵ� ����" << endl;
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
	nike(nike &temp) {                   // �����Ϸ��� ������� ���������
		cout << "���� ���� ���� ������" << endl;
		nai=temp.nai, ki=temp.ki;
	}
	nike(int x, double y) {   // ����ڰ� ������ ������ �Լ�
		cout << "������ �Լ��� ����ȴ�." << endl;
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
	~str( ) {     // ����ڰ� ������ �Ҹ��� �Լ�
		cout << data << "�� �����Ҵ� ����" << endl;
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
		cout << "�� �Ű������� ���� ������" << endl;
		nai = ki = 1;
	}
	nike(int x, double y) {   // ����ڰ� ������ ������ �Լ�
		cout << "������ �Լ��� ����ȴ�." << endl;
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
	nike ob(20, 200.5);   // ��ü������ �����ڿ� �Ű����� �ִ¹�
	nike pb;
	ob.print( );
	ob.set(10, 100.5);
	ob.print( );
	// ob.nike( );      // ������ �Լ��� ���� ȣ�� �Ұ�

	nike a[3]={nike(1,1.5),nike(2, 2.5),nike(3,3.5)};   // �迭�� ����� ����
	a[0].print( );
	a[1].print( );
	a[2].print( );

	nike *np = new nike(77, 707.5);       // �����Ҵ����� ����� ��
}
*/