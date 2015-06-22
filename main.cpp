#include <iostream>
using namespace std;

// Параметр функции-ссылка со значением по умолчанию

// 1
int foo1(int a, int b = 5);

// 2
int foo2(int a, const int &b = 111);

// 3
static int d = 222;
int foo3(int a, int &b = d);



int main(int argc, char *argv[]){
	// 1
	cout<< "foo1:" << foo1(1, 2) << endl;
	cout<< "foo1:" << foo1(1) << endl;
	// 2
	int a = 10;
	cout<< "foo2:" << foo2(1, a) << endl;
	cout<< "a:" << a << endl;
	cout<< "foo2:" << foo2(1) << endl;
	// 3
	int aa = 55;
	cout<< "foo3:" << foo3(1, aa) << endl;
	cout<< "aa:" << aa << endl;
	cout<< "foo3:" << foo3(1) << endl; 	// Дает возможность параметка ссылки со значением по умолчанию.

	cout<<"========================="<<endl;

	// Логические операции (ИЛИ)
	if(0 || 0){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}

	// Логические операции (И)
	if(0 && 1){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}

	cout<<"========================="<<endl;

	// Логика While (0-9), работает пока true
	int i = 0;
	while(i < 10){
		cout << "i:"<< i << endl;
		i++;
	}

	cout<<"========================="<<endl;

	// Тип Typedef в for()

	for(size_t i = 0; i < 10; i++)
		cout<<"i:"<< i << endl;
	return 0;
}

int foo1(int a, int b){
	return a+b;
}

// Константа (недает изменять)
int foo2(int a, const int &b){

	return a + b;
}

int foo3(int a, int &b){
	b = b + 4;
	return a + b;
}
