#include <iostream>
using namespace std;

//class Number {
//public:
//	static int n;
//	Number() {
//		cout << n++ << endl;
//	}
//	Number(int i) {
//		n = --i;
//		cout << n << endl;
//	}
//
//	static void somefunc() {
//		n = 7;
//	}
//
//	Number(Number const& otherNum) {
//		cout << otherNum.n++ << endl;
//	}
//
//	~Number() {
//		cout << ++n << " ";
//	}
//};
//
//void fun(Number n) {
//	cout << n.n << endl;
//	n.somefunc();
//}
//
//int Number::n = 6;

//class overLoading {
//private:
//	int num;
//public:
//	overLoading(int n = 0): num(n) 
//	{}
//
//	overLoading operator++(int) {
//		return (++num);
//	}
//
//	overLoading operator+(overLoading obj) {
//		return (num + obj.num);
//	}
//
//	friend ostream& operator<<(ostream& out, overLoading object) {
//		out << object.num << endl;
//		return out;
//	}
//	
//	friend istream& operator>>(istream& in, overLoading& object){
//		in >> object.num;
//		return in;
//	}
//
//	bool operator==(overLoading obj1){
//		return (num == obj1.num);
//	}
//
//	overLoading operator=(overLoading &obj) {
//		num = obj.num;
//		return *this;
//	}
//
//
//};
//
//
//
//int main() {
//	overLoading obj(5);
//	overLoading obj1(1);
//	
//	cout << obj1;
//
//
//
//
//
//
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//    char array[] = {'a','b','c','d','e','\0'};
//    cout << array;
//    int arr[] = { 1,2,3,4,5 };
//
//    int* ptr = arr;
//
//    // int x = *ptr++ + ++*ptr - *ptr-- + *ptr++;
//
//    return 0;
//}





//class kiloMeter {
//private:
//	
//public:
//	double kilo;
//	kiloMeter(double k = 0) {
//		kilo = k;
//	}
//};
//
//class mile {
//private:
//	int miles;
//public:
//	mile(int m = 0) {
//		miles = m;
//	}
//	operator kiloMeter();
//};
//
//mile::operator kiloMeter() {
//	return kiloMeter(miles * 1.609);
//}
//
//int main() {
//	mile obj1(30);
//	kiloMeter obj2 = kiloMeter(obj1);
//	cout << obj2.kilo;
//
//
//	return 0;
//}


//class test {
//private:
//	int a;
//public:
//	void* operator new(size_t t) {
//		void* p = :: operator new(t);
//		return p;
//	}
//	void operator delete(void* p) {
//		::operator delete(p);
//	}
//
//};
//int main() {
//	test *obj = new test();
//
//	return 0;
//}



//class Student {				//Base class
//	const char* name;
//public:
//	Student(const char* n = "Saad") : name(n) {
//		cout << "Constructor of student called!!!!\n";
//	}
//
//	void callTheStd() {
//		cout << "Student called\n";
//	}
//};
//
//class underGrad : public Student {				//Child class   
//	int classStd;									//CONSRUCTORS, DESTRUCTORS AND = OPERATORS CANNOT BE OVERLOADED	
//public:
//	underGrad(int c = 1) : classStd(c) {
//		cout << "Constructor of undergrad called!!!!\n";
//	}
//
//	void check() {
//		cout << "Check function checked!!!!\n";
//	}
//};
//
//
//int main() {
//	underGrad student1;
//	student1.check();
//	student1.callTheStd();
//
//
//
//	return 0;
//}


//11/04/2025

//class Student {				//Base class
//	const char* name;
//public:
//	Student(const char* n = "Saad") : name(n) {
//		cout << "Constructor of student called!!!!\n";
//	}
//
//	void callTheStd() {
//		cout << "Student called\n";
//	}
//};
//
//class underGrad : public Student {				//Child class   
//	int classStd;									//CONSRUCTORS, DESTRUCTORS AND = OPERATORS CANNOT BE OVERLOADED	
//public:
//	underGrad(int c = 1) : classStd(c) {
//		cout << "Constructor of undergrad called!!!!\n";
//	}
//
//	void check() {
//		cout << "Check function checked!!!!\n";
//	}
//};
//
//
//int main() {
//	underGrad student1;
//	student1.check();
//	student1.callTheStd();
//
//
//
//	return 0;
//}


//14/04/2025
//class A {
//public:
//	int func1(int a, double b) {
//		cout << "Fun1\n";
//		return a;
//	}
//};
//class B {
//public:
//	void func1() {
//		cout << "Fun2\n";
//	}
//};
//
//class derived : public A, public B {			//Doing virtual here doesnt work
//public:
//	void access(){
//		cout << "Hello!!!\n";
//	}
//};
//
//int main() {
//	derived obj;
//	obj.access();
//	obj.func1(5,5.5);		//Overloading shit doesn't work
//	//obj.func2();
//
//
//}


//class Base {
//public:
//    int pub = 1;
//
//protected:
//    int prot = 2;
//
//private:
//    int priv = 3;
//};
//class DerivedPublic : public Base {
//public:
//    void access() {
//        pub = 10;   // ? OK
//        prot = 20;  // ? OK
//        // priv = 30; // ? Error: private member not accessible
//    }
//};
//
//
//int main() {
//    DerivedPublic obj;
//    obj.pub = 100;     // ? OK
//    // obj.prot = 200;  // ? Error
//    // obj.priv = 300;  // ? Error
//}
//
//class DerivedProtected : protected Base {
//public:
//    void access() {
//        pub = 10;   // ? OK (becomes protected)
//        prot = 20;  // ? OK
//        // priv = 30; // ? Error
//    }
//};
//
//int main() {
//    DerivedProtected obj;
//    obj.access();
//    // obj.pub = 100;    // ? Error: now protected
//    // obj.prot = 200;   // ? Error
//}

//class DerivedPrivate : private Base {
//public:
//    void access() {
//        pub = 10;   // ? OK (becomes private)
//        prot = 20;  // ? OK
//        // priv = 30; // ? Error
//        cout << pub << " " << prot << endl;
//    }
//};
//
//int main() {
//    DerivedPrivate obj;
//    obj.access();
//    // obj.pub = 100;    // ? Error: now private
//    // obj.prot = 200;   // ? Error
//    return 0;
//}



//21/04/2025
//class a {//Parent class
//public:
//	void fun()
//	{
//		cout << "this is A!\n";
//	}
//};
//class b:public a {  //derived class
//public:
//		void fun()
//	{
//		cout << "this is B!\n";
//	}
//};
//class c:public a{ //derived class
//public:
//		void fun()
//	{
//		cout << "this is C!\n";
//	}
//};
//
//
//int main()
//{
//	c objc;
//	objc.fun();
//	objc.a::fun();
//}


//class check {
//public:
//	/*void func(int x) {
//		cout << "Single variable called(int)\n";
//	}*/
//	void func(int x, int y) {
//		cout << "Double variable called\n";
//	}
//	void func(float x) {
//		cout << "Single variable called(double)\n";
//	}
//};
//int main() {
//	check obj1;
//	obj1.func(1);
//	obj1.func(1.5);
//}

// class A {
//public:
//	A() {
//		cout << "A's constructor called!!!\n";
//	}
//	 virtual void show() {
//		cout << "class A's function called!!!!\n";
//	}
//	 ~A() {
//		cout << "A's destructor called!!!\n";				
//	}
//};
//
// class B :public A {
//public:
//	B() {
//		cout << "B's constructor called!!!\n";
//	}
//	void show() {
//		cout << "class B's function called!!!!\n";
//	}
//	~B() {
//		cout << "B's destructor called!!!\n";
//	}
//};
//
//int main() {
//	A* p1;
//	p1 = new B;
//	p1->show();
//	delete p1;
//}

//DYNAMIC POLYMORPHISM CAN'T DO FUNCTION OVERLOADING RATHER THE FUNCTION OVERRIDING
//ON THE CONTRARY, STATIC POLYMORPHISM CAN DO FUNCTION OVERLOADING AND OVERRIDING ASW



/*
//28/04/2025
class A {
public:
	A() {
		cout << "A\n";
	}
	void print() {
		cout << "A print\n";
	}
};

class B: public A {
public:
	B() {
		cout << "B\n";
	}
	void print() {
		cout << "B print\n";
	}
};

class C: public B {
public:
	C() {
		cout << "C\n";
	}
	void print(const C& obj) {
		cout << "C print\n";
	}
};

void print(C &obj) {
	cout << "Function out of line is called!!!\n";
}


int main() {
	A* p;
	p = new A;
	p->print();
	delete p;

	p = new B;
	p->print();

	delete p;
	p = new C;
	p->print();
	delete p;
	


	return 0;
}*/




//05/03/2025
//------------------------------Understanding of LinkedList----------------------------------------------------

struct Node {
	int data;
	Node* link;
};

class List {
public:
	Node* head;
	List() {
		head = NULL;
	}
	void insert(int v) {
		Node* temp = new Node;
		temp->data = v;
		temp->link = NULL;

		if (head == NULL) {
			head = temp;
		}
		else {
			temp->link = head;
			head = temp;
		}
	}
	void show() {
		while (head->link != NULL) {
			cout << head->data << endl;
		}
	}
};

int main() {
	List obj;
	obj.insert(5);
	obj.insert(10);
	obj.insert(15);

}
