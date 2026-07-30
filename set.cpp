#include<iostream>
#include<set>
using namespace std;


//only unique value will be stored
//store in sorted order(ascending order)
//insertion,deletion,and search operation have  logarithmictime complexity of O(log n)
//generally implemented using self balancing binary search tree
//generally implemented using red black tree
//we can sort it in descending order by using greater<int> as a second parameter in set declaration
//insert() - adds an element to the set
//erase() - removes an element from the set
//find() - searches for an element in the set
//size() - returns the number of elements in the set
//empty() - returns whether the set is empty
//clear() - removes all the elements of the set
//iterator - an object that points to an element in the set
//begin() - returns an iterator to the first element of the set
//end() - returns an iterator to the last element of the set
//rbegin() - returns a reverse iterator to the last element of the set
//rend() - returns a reverse iterator to the first element of the set
//lower_bound() - returns an iterator to the first element that is not less than a given value
//upper_bound() - returns an iterator to the first element that is greater than a given value
//count() - returns the number of elements that are equal to a given value
//equal_range() - returns a pair of iterators that represent the range of elements that are equal to a given value
//

int main(){
  set<int, greater<int> > s;
  //insert() - adds an element to the set
  s.insert(10);
  s.insert(20);
  s.insert(30);
  s.insert(40);
  s.insert(50);
  s.insert(60);
  s.insert(70);
  s.insert(80);

  //search for an element in the set

  //find() - searches for an element in the set
  auto it = s.find(30);
  if(it != s.end()){
    cout << "Element found: " << *it << endl;
  } else {
    cout << "Element not found" << endl;
  }
  /*for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
  }*/
}