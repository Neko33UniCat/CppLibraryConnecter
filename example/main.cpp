#include "include.cpp"
#include "include/math.cpp"
#include "include/tmp.cpp"

using namespace std;

signed main (){
	//	Example
	//	ユークリッドの互除法を用いて二つの自然数の最大公約数を求める
	//	関数の詳細は./include/math.cpp
	
	int a,b;
	cin >> a >> b;
	cout<<math::gcm(a,b)<<endl;
	return 0;
}