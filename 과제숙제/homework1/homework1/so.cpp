#include <iostream>
using namespace std;

void main( ) {
	int *ip;
	int su;
	cout << "��� ���ڿ��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> su;
	ip= new int[su];
	cout << "���ڿ��� �Է��� �ּ��� : ";
	cin >> ip[0];
	cout << "���ڿ��� �Է��� �ּ��� : ";
	cin >> ip[1];
	cout << "���ڿ��� �Է��� �ּ��� : ";
	cin >> ip[2]