//#include<iostream>
//using namespace std;
//int fac(int);
//int main() {        //���Ϳɶ��ԣ���ռ�ڴ棬 �粻��Ҫ ��Ҫʹ�þ�̬�ֲ�����
//	int i;
//	for (i = 1; i <= 5; i++) {    
//		cout << i << "!=" << fac(i) << endl;    //ÿ�ε���һ��i ��������i�Ľ׳ˣ�ͬʱ�������Ա��´��ٳˣ�i+1)
//	}
//	return 0;
//}
//
//int fac(int n) {
//	static int y = 1; //yΪ��̬�ֲ���������������ʱyֵ���ͷ�
//	y = y * n;		// ����ÿ�ε���fac �����õ���һ��fac���ú��yֵ  Ҳ����˳�������׳��� ���ǲ��ܴ���˳��
//	return y;
//}