#include <iostream>
#include <map>
#include <functional>
#include <iomanip>


using namespace std;
template <class T>
void print(T start,T end){
    while(start != end){
        cout<< start -> first <<":" << start -> second <<" ";
        start++;
    }

}
template<class T, class U>
void fillMap(map<T,T> &m, U start, U end){
    for(; start != end; ++start){
        m.insert(pair<T,T>(*start, *start));
    }

}

int main()
{
    int t[] = {1, 10, 8, 4, 6, 5, 3, 9, 7, 2};

    //1.standard initialization - default constructor
    map<int, int> m1;
    fillMap(m1, t,t+10);

    //2. iterator constructor
    map<int,int> m2(m1.begin(),m1.end());
    //2b. iterator constructor - wrong map
    //map<int,int> m2(t,t+10);

    //3.copy constructor
    map<int,int>m3(m2);
    print(m3.begin(),m3.end()); cout<<endl;

    //4.providing different comparator
    map<int,int, greater<int> > m4(m1.begin(),m1.end());
    print(m4.begin(),m4.end()); cout<<endl;

    //5. not allowed  source and target
    //object are not of the same type
    //map<int,int,greater<int>> m5(m3);

    //6. assignment
    map<int,int> m6;
    m6 = m3;
    print(m6.begin(),m6.end()); cout<<endl;

    //7. not allowed - assignment of incompatible  map objects
    //m6 = m4
    return 0;

    return 0;
}
