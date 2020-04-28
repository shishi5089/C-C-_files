#include <iostream>
#include <set>
#include <functional>

using namespace std;

template <class T>
void print(T start,T end){
    while(start != end){
        cout<< *start << " " ; ++start;

    }
}

int main()
{
    int t [] = {1,4,8,10,8,9,5,6,7,2};
    //1. std initialization - default constructor
    set <int> s1;
    //2. iterator constructor
    set<int>s2(t,t+10);
    print(s2.begin(),s2.end()); cout<<endl;
    //3. copy constructor
    set <int> s3(s2);
    print(s3.begin(),s3.end()); cout<<endl;
    //4. providing different comparator
    set<int, greater<int> >s4(t,t+10);
    print(s4.begin(),s4.end()); cout<<endl;
    //5. not allowed - source and target object are not of the same type
    //set<int, greater<int>>s5(s3);

    //6.assignment
    set<int>s6;
    s6 = s3;    //move semantics
    print(s6.begin(),s6.end()); cout<<endl;

    //7. not allowed - assignment of incompatible set objects
    //s6 = s4

    return 0;
}
