#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,int> m;
  //insert() - adds an element to the map
  m.insert(make_pair(1,20));
  m.insert(make_pair(2,30));
  m.insert(make_pair(3,40));
  m.insert(make_pair(4,50));
  m.insert(make_pair(5,60));

  //erase() - removes an element from the map
  m.erase(3);

  //search for an element in the map

  //find() - searches for an element in the map
  auto it = m.find(3);
  if(it != m.end()){
    cout << "Element found: " << it->first << " " << it->second << endl;
  } else {
    cout << "Element not found" << endl;
  }

  //count() - returns the number of elements that are equal to a given value
  int count = m.count(3);
  cout << "Count of key 3: " << count << endl;




  for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
  }
}