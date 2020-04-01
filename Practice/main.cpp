#include "include.cpp"
#include "include/math.cpp"
#include "include/tmp.cpp"

using namespace std;

signed main (){
	string s;
	cin >> s;
	rap(i,s.size()){
		if(s[i]==','){
			s[i] = ' ';
		}
	}
	cout<<s<<endl;
	return 0;
}