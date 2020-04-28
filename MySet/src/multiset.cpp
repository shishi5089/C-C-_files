//#include "multiset.h"
#include <iostream>
#include <functional>
#include <set>


using namespace std;

template <class T>
void print(T start, T end){
    for(start != end; ++start;){
        cout<< *start<<" ";
    }
}

int main(){
    int t[] = {1, 10, 8, 4, 6, 5, 3, 9, 7, 2};
    multiset <int> s1(t, t+10);
    multiset <int, greater <int>> s2(s1.begin(),s1.end());
    cout<<"Standard iterator:\n"
    multiset<int> :: iterator it1 = s1.begin();
    for(it1 != s2.end(); ++it1){
        cout<< *it1 <<" \n";

    }
    cout<<"Reverse iterators: \n";
    print(s1.rbegin(),s1.rend()); cout<<endl;
   print(s2.rbegin(),s2.rend()); cout<<endl;

   cout<<"Const iterators: \n";
   print(s1.cbegin(), s1.cend()); cout<<endl;
   print(s2.cbegin(), s2.cend()); cout<<endl;

    cout<<"Const iterators - reverse: \n";
   print(s1.crbegin(), s1.crend()); cout<<endl;
   print(s2.crbegin(), s2.crend()); cout<<endl;


}
