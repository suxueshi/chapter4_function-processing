//#include<iostream>
//using namespace std;
//int main() {  //用一个函数名字max定义了多个函数，根据调用函数时给出的信息例如实参的类型和个数去找对应的函数（参数类型，参数个数，参数顺序至少需要一个不同）	
//	int max(int a, int b, int c);
//	int max(int a, int b);
//	int a = 8, b = -12, c = 27;
//	cout << "max(a,b,c)=" << max(a, b, c) << endl;
//	cout << "max(a,b)=" << max(a, b) << endl;
//	return 0;
//}
//int max(int a, int b, int c) {
//	if (b > a) a = b;
//	if (c > a) a = c;
//	return a;
//}
//int max(int a, int b) {
//	if (b > a) a = b;
//	return a;
//}