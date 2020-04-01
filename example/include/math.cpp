#include "include.cpp"

using namespace std;
namespace math
{
	double PI = 3.14159265359;
	int step(int n);
	int ncr(int n,int r);
	int npr(int n,int r);
	int gcm(int a,int b);
	int lcm(int a,int b);

	int step(int n){
		if(n<=1){
			return 1;
		}else{
			return n * step(n-1);
		}
	}
	int ncr(int n,int r){
		for(int i=1;i<r;i++){
			n *= n-i;
		}
		for(int i=1;i<r;i++){
			r *= r-1;
		}
		return n/r;
	}
	int npr(int n,int r){
		for (int i = 1; i < r; ++i)
		{
			n *= n-1;
		}
		return n;
	}
	int gcm(int a,int b){
		int p=max(a,b);
		int q=min(a,b);
		int r;
		while(true){
			if(p%q==0){
				return q;
			}
			r = p%q;
			p=q;
			q=r;
		}
	}
}

