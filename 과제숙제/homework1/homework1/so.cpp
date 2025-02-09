#include <iostream>
using namespace std;

void main( ) {
	int *ip;
	int su;
	cout << "몇개의 문자열을 입력 하시겠습니까? ";
	cin >> su;
	ip= new int[su];
	cout << "문자열을 입력해 주세요 : ";
	cin >> ip[0];
	cout << "문자열을 입력해 주세요 : ";
	cin >> ip[1];
	cout << "문자열을 입력해 주세요 : ";
	cin >> ip[2]