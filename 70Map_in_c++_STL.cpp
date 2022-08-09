# include <iostream>
# include <map>
using namespace std;
// map is an associatice array
int main(){
    map<string,int>marksMap;
    marksMap["Zahil"]=98;
    marksMap["Sasuke"]=59;
    marksMap["Kakashi"]=99;
    marksMap.insert({{"Hashirama",101},{"Tobirama",100}});  //Insert element
    map<string,int>::iterator itr;
    for (itr=marksMap.begin(); itr!=marksMap.end(); itr++)
    {
        cout<<(*itr).first<<"  "<<(*itr).second<<"\n";
    }
    cout<<"The size is "<<marksMap.size()<<endl;
    cout<<"The max size is "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is "<<marksMap.empty()<<endl;


    return 0;
}