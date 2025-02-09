#include <iostream.h>
struct node {				// �ڱ����� ����ü SRS
	int data;
	struct node *link;		
};
node *L = NULL;				// ����Ʈ�� ���� ����Ʈ ������(����Ʈ�� �̸�)
void print ( ) {	// ���Ḯ��Ʈ�� �ִ� ��� ����� data�� ����ϴ� �Լ� 
	cout << "L = ";
	node *p = L;	// ����Ʈ�� ��ȸ�� ������ p�� ����� ù��° ��带 
					// ����Ű�� �Ѵ�.
	while( p != NULL ) {	// p�� ����Ű�� �ִ� ��尡 �ִٸ�
		cout << "[" << p->data << "]";	// p�� ����Ű�� ����� data�� ���
		p = p->link;			// p�� ������ ���� �̵�
	}
	cout << endl;
}
void InsertFirst( int x ) {	// �Ű������� �޾ƿ°��� ������ ��带 ����Ʈ��
							// �Ǿտ� �������ִ� �Լ�
	node *p = new node;		// �����޸��Ҵ����� ��带 ����� p�� ����Ű�� �Ѵ�.
	p->data = x;		// ���θ��� ����� data�� x�� �ִ´�.
	p->link = L;		// ���θ��� ����� link�� ���� ù��° ����� �ּҸ� 
						// �ִ´�.
	L = p;				// ����Ʈ�������� L�� ���θ��� ��带 ����Ű�� �Ѵ�.
}
void DeleteFirst ( ) {	// ���Ḯ��Ʈ�� �ִ� ù��° ��带 �������ִ� �Լ�
	if(L==NULL) {		// ���Ḯ��Ʈ�� ��尡 �ϳ��� ���ٸ�
		cout << "��尡 �ϳ��� ����!" << endl;
	}
	else {				// ���Ḯ��Ʈ�� ��尡 �ִٸ�
		node *p = L;		// ������ p�� ����Ʈ�� ù��° ��带 ����Ű�� �Ѵ�.
		L = L->link;		// L�� �ι�° ��带 ����Ű�� �Ѵ�.
		delete p;			// ù��° ��带 �����Ѵ�.
	}
}
void InsertLast ( int x )  {// ���Ḯ��Ʈ�� ���������� ��带 �����ϴ� �Լ� 
	node *p = new node;		// �����޸��Ҵ����� ��带 ����� p�� 
							// ����Ű�� �Ѵ�.
	p->data = x;		// ���θ��� ����� data�� x�� �ִ´�.
	p->link = NULL;		// ���θ��� ����� link�� NULL�� �ִ´�.
	if( L==NULL ) {		// ����Ʈ�� �����̶��
		L = p;			// ����Ʈ �����Ͱ� ���θ��� ��带 ����Ű�� �Ѵ�.
	}
	else {				// ����Ʈ�� ������ �ƴ϶��
		node *q = L;	// q�� ����Ʈ�� ù��° ��带 ����Ű�� �Ѵ�.
		while( q->link != NULL ) {	// q�� ����Ű�� ��尡 ������ ��尡 �ƴ϶�� 
			q = q->link;	// q�� ���� ���� �̵���Ų��.
		}
		q->link = p;	// ã�Ƴ� ������ ����� link�� ���θ��� ����� 
	}					// �ּҸ� �ִ´�.
}
void DeleteLast ( ) {	// ���Ḯ��Ʈ�� ������ ��带 ������ �ִ� �Լ�
	if( L==NULL) {		// ����Ʈ�� ��尡 �ϳ��� ���ٸ�
		cout << "��尡 �ϳ��� ����!" << endl;
	}
	else if( L->link == NULL ) {	// ���Ḯ��Ʈ�� ��尡 �ϳ����
		delete L;		// �ϳ����� ��带 �����Ѵ�.
		L=NULL;			// L�� NULL�� �ʱ�ȭ �Ѵ�.
	}
	else {				// ����Ʈ�� ��尡 �ΰ� �̻��̶��
		node *p = L;	// p�� ����Ʈ�� ù��° ��带 ����Ű�� �Ѵ�.
		while(p->link->link !=NULL) {	// p�� ����Ű�� ����� ������ 
								// ����� ��ũ�� NULL�� �ƴ϶�� 
				// ��, p�� ������ ����� �ճ�带 ����Ű�� ���� �ʴٸ�
			p = p->link;	// p�� ������ ���� �̵� ��Ų��.
		}
		delete p->link;		// ������ ��带 �����Ѵ�.
		p->link = NULL;		// p�� ����Ű�� ����� link�� NULL�� �ִ´�.
	}

}

// �Ʒ��� �Լ����� �����ϼ���
int len ( ) { }	// ����Ʈ�� �ִ� ����� ������ �������ִ� �Լ�
void search(int x) { }	// �Ű������� �޾ƿ� x�� ���� data�� ������ ��尡 
	// �� ��° ������� ã�� ������ִ� �Լ�. ���ٸ� �ȳ����� ���
void Alldelete( ) { }	// ���Ḯ��Ʈ�� ��� ��带 �������ִ� �Լ�
void SearchDelete( int x ) { }	// ����Ʈ�� ����� data�� x�� ���� ��带 
	// �������ִ� �Լ�. �� x�� ���� ���� ������ ��尡 ���ٸ� �������� �ʴ´�.
void InsertNum (int x, int num) { } // �Ű������� �޾ư� x���� ������ ��带
	// ����Ʈ�� num��° ���� �������ִ� �Լ�. ��, ����Ʈ�� ���̰� num����
	// �۴ٸ� ������ ���� ����
void DeleteNum (int num) { }	// ����Ʈ�� num��° ��带 ã�� �������ִ� 
	// �Լ�. ��, ����Ʈ�� ���̰� num���� �۴ٸ� ������ ��带 ����
void MinDelete( ) { } // ����Ʈ�� ����� ���� ���� ���� ������ ��带 ã��
	// �������ִ� �Լ�    
void Rev ( ) { }	// ���Ḯ��Ʈ�� ��带 �������� �������ִ� �Լ�
	// �� : 10->20->30  ������ 30->20->10
void sort( ) { }// ����Ʈ�� �ִ� node�� data�� ũ������� �������ִ� �Լ� 
void SortedInsert(int x) { } // x�� data�� �ϴ� ��带 ����Ʈ�� ������ �ִ� 
	// �Լ� ��, ���� �� �ڽ��� ũ�⿡ �°� ���ĵǾ� ���Եǰ� �Ѵ�.
	// ���� ������ sort( )�Լ��� ������ �ϸ� �ȵȴ�.


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
struct node {				// �ڱ����� ����ü SRS
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
	cout << a.link << endl;				// b�� �ּҰ� 
	cout << (*a.link).data << endl;		// 20
	cout << a.link->data << endl;		// 20
	cout << a.link->link << endl;		// C�� �ּҰ�

	cout << a.link->link->data << endl;	// 30;
	cout << a.link->link->link << endl;	// NULL;

	node *L;					// ����Ʈ ������
	L = &a;

	cout << L->data << endl;				// 10
	cout << L->link->data << endl;			// 20
	cout << L->link->link->data << endl;	// 30
}

*/













/*
int fibo1 ( int n ) {	// �Ǻ���ġ ������ n��° ���� ���� �������ִ� �Լ�
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

int fibo2 ( int n ) {	// �Ǻ���ġ ������ n��° ���� ���� �������ִ� �Լ�
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
