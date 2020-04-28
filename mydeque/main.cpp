#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int sum = 0;
    deque<int>mydeq;
    //adding elements to deque
    mydeq.push_front(4);
    mydeq.push_front(5);
    mydeq.push_front(6);
    mydeq.push_front(7);
    mydeq.push_front(8);
    mydeq.push_front(9);

    //forming new deque qith elements of mydeq
    while(!mydeq.empty()){
       // newdeq.push_back(mydeq.back());
        sum = sum + mydeq.front();
        mydeq.pop_front();
    }

    //for(auto it = newdeq.begin();it != newdeq.end();++it){
        cout<< sum;
    //}

    return 0;
}
