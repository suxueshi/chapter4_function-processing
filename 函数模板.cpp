//#include<iostream>
//using namespace std;
//template<typename T>   //模板声明，其中T为类型函数  
//T max(T a, T b, T c) {    //定义一个通用函数，用T作虚拟的类型名  这个适用于参数类型不同 但是个数相同且函数替也相同的情况
//	if (b > a) a = b;	//这样就不用一个一个敲函数体和参数个数相同的函数了
//	if (c > a) a = c;
//	return a;
//}
//int main() {
//	int i1 = 1, i2 = 2, i3 = 3, i;
//	double d1 = 56.87, d2 = 90.23, d3 = -3214.56, d;
//	long g1 = 559648, g2 = 2255552, g3 = -5545185, g;
//	i = max(i1, i2, i3);
//	d = max(d1, d2, d3);
//	g = max(g1, g2, g3);
//	cout << i << endl;
//	cout << g << endl;
//	cout << d << endl;
//	return 0;
//}