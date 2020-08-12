//#include<iostream>
//using namespace std;
//inline int max(int, int, int);   //inline为内置（内嵌）函数声明，将所调用的函数代码直接嵌入到主调函数中，不将流程转移出去 可以都声明  或者一处声明也可
//int main() {					//只适用于规模较小且经常调用的简单函数，才适合用inline声明
//	int i = 10, j = 20, k = 30, m;
//	m = max(i, j, k);
//	cout << "max=" << m << endl;
//	return 0;
//}
//inline int max(int a, int b, int c) {
//	if (b > a) a = b;
//	if (c > a) a = c;
//	return a;
//}