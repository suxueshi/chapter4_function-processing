//#include<iostream>
//using namespace std;
//int f(int a) {
//	int b = 0;				//aoto变量每次调用候内存都会释放掉  静态局部变量的内存在程序运行期间都不会被释放
//	static int c = 3;        //c是静态变量 每次改变后c的值都会保存着  并不会重新赋值为3   
//	b = b + 1;
//	c = c + 1;
//	return a + b + c;
//}
//
//int main() {
//	int a = 2, i;
//	for (i = 0; i < 3; i++)     //每次调用时 b=0+1都是1   c是4   5    6
//		cout << f(a) << ' ';
//	cout << endl;
//	return 0;
//}