# include<iostream>
#include <list>
using namespace std;
void display(list<int>&lst){
     list<int>::iterator it;
     for (it=lst.begin(); it !=lst.end(); it++)
     {
         cout<<*it<<" ";
     }
     cout<<endl;
     

}
int main(){
    list <int> list1;  //list of zero length
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(12);

    // list<int>:: iterator iter;
    // iter=list1.begin();    //this iter will point to first element 
    // // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    display(list1);
    list1.pop_back();   //this will delete element from back
    list1.pop_front();  //this will delete element from front
    list1.remove(9);    // thsi will remove the element which we want to remove , if we have two 9 in the list then  it will remove all 9 from list
    display(list1);
    list<int> list2(3); // Empty list of lenght 7
    list<int>:: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=5;
    iter++;
    *iter=4;
    iter++;
    display(list2);
    // list2.sort();   // sorting of list
    display(list2);
    // Making a list which merges lists
    list1.merge(list2);
    cout<<"list 1 after merging list2"<<endl;
    display(list1);
    list1.reverse();    // reversing the list
    display(list1);     
    
    return 0;
}

 