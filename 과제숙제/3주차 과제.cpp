#include <iostream.h>
struct node {				// 자기참조 구조체 SRS
	int data;
	struct node *link;		
};
node *L = NULL;				// 리스트를 위한 리스트 포인터(리스트의 이름)
void print ( ) {	// 연결리스트에 있는 모든 노드의 data를 출력하는 함수 
	cout << "L = ";
	node *p = L;	// 리스트를 순회할 포인터 p를 만들어 첫번째 노드를 
					// 가리키게 한다.
	while( p != NULL ) {	// p가 가리키고 있는 노드가 있다면
		cout << "[" << p->data << "]";	// p가 가리키는 노드의 data를 출력
		p = p->link;			// p를 다음번 노드로 이동
	}
	cout << endl;
}
void InsertFirst( int x ) {	// 매개변수로 받아온값을 가지는 노드를 리스트의
							// 맨앞에 삽입해주는 함수
	node *p = new node;		// 동적메모리할당으로 노드를 만들어 p가 가리키게 한다.
	p->data = x;		// 새로만든 노드의 data에 x를 넣는다.
	p->link = L;		// 새로만든 노드의 link에 현재 첫번째 노드의 주소를 
						// 넣는다.
	L = p;				// 리스트포인터인 L이 새로만든 노드를 가리키게 한다.
}
void DeleteFirst ( ) {	// 연결리스트에 있는 첫번째 노드를 삭제해주는 함수
	if(L==NULL) {		// 연결리스트에 노드가 하나도 없다면
		cout << "노드가 하나도 없다!" << endl;
	}
	else {				// 연결리스트에 노드가 있다면
		node *p = L;		// 포인터 p로 리스트의 첫번째 노드를 가리키게 한다.
		L = L->link;		// L이 두번째 노드를 가리키게 한다.
		delete p;			// 첫번째 노드를 삭제한다.
	}
}
void InsertLast ( int x )  {// 연결리스트의 마지막으로 노드를 삽입하는 함수 
	node *p = new node;		// 동적메모리할당으로 노드를 만들어 p가 
							// 가리키게 한다.
	p->data = x;		// 새로만든 노드의 data에 x를 넣는다.
	p->link = NULL;		// 새로만든 노드의 link에 NULL를 넣는다.
	if( L==NULL ) {		// 리스트가 공백이라면
		L = p;			// 리스트 포인터가 새로만든 노드를 가리키게 한다.
	}
	else {				// 리스트가 공백이 아니라면
		node *q = L;	// q가 리스트의 첫번째 노드를 가리키게 한다.
		while( q->link != NULL ) {	// q가 가리키는 노드가 마지막 노드가 아니라면 
			q = q->link;	// q를 다음 노드로 이동시킨다.
		}
		q->link = p;	// 찾아낸 마지막 노드의 link에 새로만든 노드의 
	}					// 주소를 넣는다.
}
void DeleteLast ( ) {	// 연결리스트의 마지막 노드를 삭제해 주는 함수
	if( L==NULL) {		// 리스트에 노드가 하나도 없다면
		cout << "노드가 하나도 없다!" << endl;
	}
	else if( L->link == NULL ) {	// 연결리스트에 노드가 하나라면
		delete L;		// 하나뿐인 노드를 삭제한다.
		L=NULL;			// L을 NULL로 초기화 한다.
	}
	else {				// 리스트의 노드가 두개 이상이라면
		node *p = L;	// p가 리스트의 첫번째 노드를 가리키게 한다.
		while(p->link->link !=NULL) {	// p가 가리키는 노드의 다음번 
								// 노드의 링크가 NULL이 아니라면 
				// 즉, p가 마지막 노드의 앞노드를 가리키고 있지 않다면
			p = p->link;	// p를 다음번 노드로 이동 시킨다.
		}
		delete p->link;		// 마지막 노드를 삭제한다.
		p->link = NULL;		// p가 가리키는 노드의 link에 NULL을 넣는다.
	}

}

// 아래의 함수들을 구현하세요
int len ( ) { }	// 리스트에 있는 노드의 갯수를 리턴해주는 함수
void search(int x) { }	// 매개변수로 받아온 x와 같은 data를 가지는 노드가 
	// 몇 번째 노드인지 찾아 출력해주는 함수. 없다면 안내문장 출력
void Alldelete( ) { }	// 연결리스트의 모든 노드를 삭제해주는 함수
void SearchDelete( int x ) { }	// 리스트의 노드중 data가 x와 같은 노드를 
	// 삭제해주는 함수. 단 x와 같은 값을 가지는 노드가 없다면 삭제하지 않는다.
void InsertNum (int x, int num) { } // 매개변수로 받아간 x값을 가지는 노드를
	// 리스트의 num번째 노드로 삽입해주는 함수. 단, 리스트의 길이가 num보다
	// 작다면 마지막 노드로 삽입
void DeleteNum (int num) { }	// 리스트의 num번째 노드를 찾아 삭제해주는 
	// 함수. 단, 리스트의 길이가 num보다 작다면 마지막 노드를 삭제
void MinDelete( ) { } // 리스트의 노드중 가장 작은 값을 가지는 노드를 찾아
	// 삭제해주는 함수    
void Rev ( ) { }	// 연결리스트의 노드를 역순으로 뒤집어주는 함수
	// 예 : 10->20->30  실행후 30->20->10
void sort( ) { }// 리스트에 있는 node의 data를 크기순으로 정렬해주는 함수 
void SortedInsert(int x) { } // x를 data로 하는 노드를 리스트에 삽입해 주는 
	// 함수 단, 삽입 시 자신의 크기에 맞게 정렬되어 삽입되게 한다.
	// 대충 삽입후 sort( )함수로 정렬을 하면 안된다.


void main ( ) {
	print( );
	InsertFirst( 10 ); 
	print( );
	InsertFirst( 20 ); 
	print( );
	InsertFirst( 30 ); 
	print( );
	DeleteFirst( );
	print( );
	DeleteFirst( );
	print( );
	DeleteFirst( );
	print( );
	DeleteFirst( );
	print( );

	InsertLast( 10 ); 
	print( );
	InsertLast( 20 ); 
	print( );
	InsertLast( 30 ); 
	print( );

	DeleteLast( );
	print( );
	DeleteLast( );
	print( );
	DeleteLast( );
	print( );
	DeleteLast( );
	print( );

}



/*
struct node {				// 자기참조 구조체 SRS
	int data;
	struct node *link;		
};
void main ( ) {
	node a, b, c;
	a.data = 10;
	a.link = &b;
	b.data = 20;
	b.link = &c;
	c.data = 30;
	c.link = NULL;

	cout << a.data << endl;				// 10
	cout << a.link << endl;				// b의 주소값 
	cout << (*a.link).data << endl;		// 20
	cout << a.link->data << endl;		// 20
	cout << a.link->link << endl;		// C의 주소값

	cout << a.link->link->data << endl;	// 30;
	cout << a.link->link->link << endl;	// NULL;

	node *L;					// 리스트 포인터
	L = &a;

	cout << L->data << endl;				// 10
	cout << L->link->data << endl;			// 20
	cout << L->link->link->data << endl;	// 30
}

*/













/*
int fibo1 ( int n ) {	// 피보나치 수열의 n번째 항을 구해 리턴해주는 함수
	if( n==1 || n==2 ) {
		return 1;
	}
	int i, n1=1, n2=1, n3;
	for( i=3; i<=n; i++ ) {
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
	}
	return n3;
}

int fibo2 ( int n ) {	// 피보나치 수열의 n번째 항을 구해 리턴해주는 함수
	if( n==1 || n==2 ) {
		return 1;
	}
	else {
		return fibo2(n-2) + fibo2(n-1);
	}
}

void main ( ) {
	cout << fibo1(42) << endl;
	cout << fibo2(42) << endl;
}
*/
