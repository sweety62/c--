#include<iostream>
#include<unordered_set>
using namespace std;
//it contain only unique element 
//search,insert and removal  operation have average time complexity of O(1)
//generally implemented using hash table
//insert() - adds an element to the unordered_set
//erase() - removes an element from the unordered_set
//find() - searches for an element in the unordered_set
//size() - returns the number of elements in the unordered_set
//empty() - returns whether the unordered_set is empty
//clear() - removes all the elements of the unordered_set
int main(){
  
  //unordered_set<int> s;
  unordered_multiset<int> s;
  //insert() - adds an element to the unordered_set
  s.insert(10);
  s.insert(20);
  s.insert(30);
  s.insert(15);
  s.insert(11);
  s.insert(10);
  s.insert(70);
  s.insert(80);

  for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
  }
}