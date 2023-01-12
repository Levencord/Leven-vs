////////////#include<iostream>
////////////int main()
////////////{
////////////	std::cout << "hello world\n" << std::endl;
////////////}
////////////#include<iostream>
////////////using namespace std;
////////////void Fun(int a = 10, int b = 20, int c = 30)
////////////{
////////////	cout << a << " " << b << " " << c << endl;
////////////}
////////////int main()
////////////{
////////////	Fun(1,2);
////////////	return 0;
////////////}
//////////#include<iostream>
//////////using namespace std;
//////////void fun(char a, int b)
//////////{
//////////	cout << a << " " << b << endl;
//////////
//////////}
//////////void fun(int a, char b)
//////////{
//////////	cout << a << "" << b << endl;
//////////}
//////////
//////////int main()
//////////{
//////////
//////////	int a = 10;
//////////	char b = 'a';
//////////	fun(b, a);
//////////	return 0;
//////////}
////////#include<iostream>
////////using namespace std;
////////void my_Swap(int& r1, int& r2)
////////{
////////	int temp = r1;
////////	r1 = r2;
////////	r2 = temp;
////////}
////////int Count1()
////////{
////////	static int n = 1;
////////	n++;
////////	return n;
////////}
////////int& Count2()
////////{
////////	static int n = 0;
////////	n++;
////////	return n;
////////}
////////int& Add(int x, int y)
////////{
////////	static int n = x + y;
////////	return n;
////////}
////////int main()
////////{
////////	int& ret = Add(1, 2);
////////	int& rett = Add(3, 4);
////////	printf("hello world");
////////	cout << ret <<" " << rett << endl;
////////	/*const int& a = Count1();
////////	int& b = Count2();
////////	cout << a << b << endl;*/
////////	/*int a = 1;
////////	int b = 0;
////////	my_Swap(a, b);*/
////////	/*const int a = 10;
////////	const int& b = a;
////////	int b = 10;
////////	double c = b;
////////	const double& c = b;*/
////////
////////	/*int a = 10;
////////	int& ra = a;
////////	int& rra = ra;
////////	int& rrra = rra;
////////	int b = 2;
////////	rrra = b;
////////	cout << a << endl;*/
////////
////////	return 0;
////////}
//////#include<time.h>
//////#include<iostream>
//////struct A
//////{
//////	int a[100000];
//////};
//////A a;
//////A TestFunc1() { return a; };
//////A& TestFunc2() { return a; };
//////void main()
//////{
//////	size_t begin1 = clock();
//////	for (size_t i = 0; i < 100000; i++)
//////	{
//////		TestFunc1();
//////	}
//////	size_t end1 = clock();
//////	size_t begin2 = clock();
//////	for (size_t i = 0; i < 100000; i++)
//////	{
//////		TestFunc2();
//////	}
//////	size_t end2 = clock();
//////	std::cout << end1 - begin1 <<std::endl;
//////	std::cout << end2 - begin2;
//////}     
////#include<iostream>
////using namespace std;
////inline void Swap(int& x1, int& x2)
////{
////	int temp = x1;
////	x1 = x2;
////	x2 = temp;
////}
////int main()
////{
////	int a = 2;
////	int b = 0;
////	Swap(a, b);
////
////	return 0;
////}
//#include<iostream>
//using namespace std;
//void Fun(int x)
//{
//	cout << "整形" << endl;
//}
//void Fun(int* x)
//{
//	cout<< "整形指针" << endl;
//}
//int main()
//{
//	int* p1 = NULL;
//	int* p2 = nullptr;
//	Fun(0);
//	Fun(NULL);
//	Fun(nullptr);
//	
//	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//for (auto& e : arr)
//	//{
//	//	e *= 2;
//	//}
//	//for (auto e : arr)
//	//{
//	//	cout << e << " ";
//
//	//}
//	//cout << endl;
//	///*int a = 10;
//	//auto b = a;
//	//int& c = a;
//	//auto& d = a;
//	//auto e = &a;
//	//cout << typeid(a).name() << endl;
//	//cout << typeid(b).name() << endl;
//	//cout << typeid(c).name() << endl;
//	//cout << typeid(d).name() << endl;
//	//cout << typeid(e).name() << endl;
//	//cout << sizeof(e) << endl;*/
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	cout << "***********************" << endl;

	return 0;
}
