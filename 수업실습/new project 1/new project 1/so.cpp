#include <iostream>
using namespace std;

void my (int a, int b, int c=99) {
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl << endl;
}
void main( ) {
	my(10,20);
	my(5,6,7);
}


/*
int a=10;         // �������� a    data������ �������
void main( ) {
	cout << "a=" << a << endl;   //10
	int *ip = &a;
	int a=20;       // �������� a   stack������ �������
	cout << "a=" << a << endl;       //20    �������� ���� ���������� ����
	cout << "a=" << *ip << endl;     //10
	cout << "::a=" << ::a << endl;   //10
}

/*
#include <iostream>           // c++�� ��������
#include <iomanip>            // �������ڰ� ��� �ִ� �������
using namespace std;   // �� ���� ���� ��� ��

/
/*
void main( ) {
	cout << "##" << setw(5) << 12 << "##\n";
	cout << setiosflags(ios::left);
	cout << "##" << setw(5) << 12 << "##\n";
	cout << resetiosflags(ios::left);
	cout << "##" << setw(5) << 12 << "##\n";

	cout << hex << 12 << endl;
	cout << setiosflags(ios::uppercase);
	cout << hex << 12 << endl;

	cout << 12.3 << endl;
	cout << setiosflags(ios::fixed);
	cout << 12.3 << endl;
	cout << setprecision(3) << 12.3 << endl;
	cout << 12.3 << endl;
	cout << setprecision(9) << 12.3 << endl;
}

/*
void main( ) {
	cout << 12 << endl;    // cout << 12 << "\n";
	cout << oct << 12 << endl;   // oct : ������ 8������
	cout << 12 << endl;     // endline�� ����,�ٹٲ�
	cout << hex << 12 << endl;   // hex : ������ 16������
	cout << 12 << endl;
	cout << dec << 12 << endl;   // dec : ������ 10������

	cout << "##" << 12 << "##\n";
	cout << "##" << setw(5) << 12 << "##\n";     // setw(5);  ���� 5ĭȮ��
	cout << setfill('z');                        // setfill('z') ������ z�� ä��
	cout << "##" << setw(5) << 12 << "##\n";
	cout << setfill(' ');
	cout << "##" << setw(5) << 12 << "##\n";
}
/*
void main ( ) {
	int a;
	char b;
	double c;
	float d;
	char name[11];
	cout << "���� �Է� : ";
	cin >> a;        // scanf("%d", &a);
	cout << "a=" << a << "\n";

	cout << "���� �Է� : ";
	cin >> b;         // fflush(stdin); scanf("%c", &b);
	cout << "b=" << b << "\n";

	cout << "double �Է� : ";
	cin >> c;         // scanf("%lf", &c);
	cout << "c=" << c << "\n";

	cout << "float �Է� : ";
	cin >> d;         // scanf("%f", &d);
	cout << "d=" << d << "\n";

	cin >> name;      // scanf("%s", name);

	cin >> a >> b >> c >> d;
}
/*
void main( ) {
	int a=5;
	char b='G';
	double c=12.3;
	float d=3.14;
	char name[]="korea";

	cout << "�ȳ�";     // printf("�ȳ�");
	cout << "�氡\n";   // printf("�氡\n");
	cout << 7;         // printf("%d", 7);
	cout << a;         // printf("%d", a);
	cout << b;         // printf("%c", b);
	cout << c;         // printf("%f", c);
	cout << d;         // printf("%f", d);
	cout << name;      // printf("%s", name);
	cout << &a;        // printf("%p", &a);
	cout << "\n";      // printf("\n");
	cout << "a=" << a << "�Դϴ�.\n";   // printf("a=%d�Դϴ�.\n",a);

	cout << "b=" << b << ",c=" << c << "��.\n";  // printf("b=%c, c=%f��.\n",b,c);

	a=65;
	cout << (char)a;      //���� ����ȯ //printf("%c",a);
}
*/