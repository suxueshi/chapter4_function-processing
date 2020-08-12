//#include<iostream>
//using namespace std;
//long fac(int);
//int main() {			//对寄存器的存取速度远高于内存的存取速度 
//	int n;
//	long y;
//	cout << "plesae enter an integer: ";
//	cin >> n;
//	y = fac(n);
//	cout << n << "!=" << y << endl;
//	return 0;
//}
//	
//long fac(int n) {								//如果有一些变量使用频繁 可以将局部变量的值放在CPU的寄存器中 这样就不需要重新去内存取了（实际上是不必要的 优化的系统能自动识别）
//	register int i,f = 1;						
//	for (i = 1; i <= n; i++) f = f * i;			//如果n的值大  可以节省很多时间
//	return f;
//}