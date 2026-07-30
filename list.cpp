#include<iostream>
#include<list>
using namespace std;

//push_back() - adds an element at the end of the list
//push_front() - adds an element at the beginning of the list
//front() - returns the first element of the list
//back() - returns the last element of the list
//pop_back() - removes the last element of the list
//pop_front() - removes the first element of the list
//size() - returns the number of elements in the list
//empty() - returns whether the list is empty
//clear() - removes all the elements of the list
//sort() - sorts the list in ascending order
//iterator - an object that points to an element in the list
//15 20 30 40 80

int main(){
  list<int>l;

  l.push_back(10);
  l.push_back(20);
  l.push_back(30);
  l.push_back(40);
  l.push_back(68);
  l. push_front(15);
  //cout<<l.front()<<""<<l.back()<<endl;
  //cout<<l.size()<<endl;
  for(auto it=l.begin();it!=l.end();it++){
    cout<<*it<<" ";
  }
//reverse order
  for(auto it=l.rbegin();it!=l.rend();it++){
    cout<<*it<<" ";
  }
  
}