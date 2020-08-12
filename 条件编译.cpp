//#include<iostream>
//using namespace std;
//#define RUN
//int main() {		//条件编译可以使某一些程序段在满足条件的时候才会编译
//	int x = 1, y = 2, z = 3;
//	#ifdef RUN   //如果有上面的define 则输出第一句cout  否则输出第二句   #ifndef的话就是如果没有上述define 输出第一句
//	cout << "x=" << x << ' ' << "y=" << y << ' ' << "z=" << z << endl;
//
//	#else  
//	cout << "x*y*z" << x * y * z << endl;
//	#endif  // 这个是条件编译结束的标志  也就是说下面这个cout肯定会执行
//	cout <<"end";
//}