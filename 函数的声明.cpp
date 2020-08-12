//#include<iostream>
//using namespace std;
//int max(int x, int y) { //不管后面形参的数据类型如何，以函数类型为准 ，如2.5变成2返回main
//	int z;					// 括号中形参已经定义了（int x, int y）, 函数体里面就不需要重新定义了
//	z = x > y ? x : y;
//	return(z);//也可以直接  return (x > y ? x : y);
//}
//int main() {
//	int a, b, c;
//	cout << "please enter two integer numbers: ";
//	cin >> a >> b;
//	c = max(a, b);
//	cout << "max=" << c << endl;
//	return 0;
//}