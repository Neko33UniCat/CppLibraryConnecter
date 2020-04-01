#include <iostream>
#include <vector>
using namespace std;
// using StringMap = std::vector<std::vector<char>> map(h+2,vector<char>(w+2,'#'));
namespace tmp {
    template <typename T> bool inArry(T x,vector<T> v);
    template <typename T> void input(int n,vector<T> &v);

    template <typename T> bool inArry(T x,vector<T> v){
        int l = v.size();
        for(int i=0;i<l;i++){
            if(x==v[i]){
                return true;
            }
        }
        return false;
    }
    
    template <typename T> void input(int n,vector<T> &v){
        for(int i=0;i<n;i++){
            cin >> v.at(i);
        }
    }
    
}
