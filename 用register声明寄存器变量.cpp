//#include<iostream>
//using namespace std;
//long fac(int);
//int main() {			//�ԼĴ����Ĵ�ȡ�ٶ�Զ�����ڴ�Ĵ�ȡ�ٶ� 
//	int n;
//	long y;
//	cout << "plesae enter an integer: ";
//	cin >> n;
//	y = fac(n);
//	cout << n << "!=" << y << endl;
//	return 0;
//}
//	
//long fac(int n) {								//�����һЩ����ʹ��Ƶ�� ���Խ��ֲ�������ֵ����CPU�ļĴ����� �����Ͳ���Ҫ����ȥ�ڴ�ȡ�ˣ�ʵ�����ǲ���Ҫ�� �Ż���ϵͳ���Զ�ʶ��
//	register int i,f = 1;						
//	for (i = 1; i <= n; i++) f = f * i;			//���n��ֵ��  ���Խ�ʡ�ܶ�ʱ��
//	return f;
//}