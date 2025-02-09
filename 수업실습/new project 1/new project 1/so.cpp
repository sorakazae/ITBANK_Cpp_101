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
int a=10;         // 전역변수 a    data영역에 만들어짐
void main( ) {
	cout << "a=" << a << endl;   //10
	int *ip = &a;
	int a=20;       // 지역변수 a   stack영역에 만들어짐
	cout << "a=" << a << endl;       //20    사용범위가 좁은 지역변수가 나옴
	cout << "a=" << *ip << endl;     //10
	cout << "::a=" << ::a << endl;   //10
}

/*
#include <iostream>           // c++의 입출력헤더
#include <iomanip>            // 조정문자가 들어 있는 헤더파일
using namespace std;   // 두 문장 같이 써야 함

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
	cout << oct << 12 << endl;   // oct : 정수를 8진수로
	cout << 12 << endl;     // endline의 줄임,줄바꿈
	cout << hex << 12 << endl;   // hex : 정수를 16진수로
	cout << 12 << endl;
	cout << dec << 12 << endl;   // dec : 정수를 10진수로

	cout << "##" << 12 << "##\n";
	cout << "##" << setw(5) << 12 << "##\n";     // setw(5);  공간 5칸확보
	cout << setfill('z');                        // setfill('z') 공간을 z로 채움
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
	cout << "정수 입력 : ";
	cin >> a;        // scanf("%d", &a);
	cout << "a=" << a << "\n";

	cout << "문자 입력 : ";
	cin >> b;         // fflush(stdin); scanf("%c", &b);
	cout << "b=" << b << "\n";

	cout << "double 입력 : ";
	cin >> c;         // scanf("%lf", &c);
	cout << "c=" << c << "\n";

	cout << "float 입력 : ";
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

	cout << "안녕";     // printf("안녕");
	cout << "방가\n";   // printf("방가\n");
	cout << 7;         // printf("%d", 7);
	cout << a;         // printf("%d", a);
	cout << b;         // printf("%c", b);
	cout << c;         // printf("%f", c);
	cout << d;         // printf("%f", d);
	cout << name;      // printf("%s", name);
	cout << &a;        // printf("%p", &a);
	cout << "\n";      // printf("\n");
	cout << "a=" << a << "입니다.\n";   // printf("a=%d입니다.\n",a);

	cout << "b=" << b << ",c=" << c << "다.\n";  // printf("b=%c, c=%f다.\n",b,c);

	a=65;
	cout << (char)a;      //강제 형변환 //printf("%c",a);
}
*/