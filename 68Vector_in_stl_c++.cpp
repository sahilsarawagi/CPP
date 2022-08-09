# include <iostream>
# include <vector>
using namespace std;
template <class T>
void display(vector <T> &v){
    
    for (int i = 0; i < v.size(); i++)
    {

        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    // vector <int> vec1;    //zero length integer vector
    // int element;
    // int size ;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // // vec1.pop_back();  // deletes the last element
    // vector <int>:: iterator iter=vec1.begin();    // THis is making of  iter which is pointing to the begin
    // // vec1.insert(iter,52);  // this will insert 52 at beginning (first place)
    // // vec1.insert(iter+1,95);  // this will insert 95 at (second place)
    // vec1.insert(iter+1,5,95);  // if we want to  insert 5 copies of  95 at (second place)
    // display(vec1);
    // second method to create vector 
    vector <char> vec2(4);  // 4 element character vector
    vec2.push_back('a');
    vec2.push_back('8');
    vec2.push_back('5');
    display(vec2);
    vector <char> vec3(vec2);  // 4 element character vector from vec2
    display(vec3);
    vector <int> vec4(6,3);       // 6 elements  vector of 3s
    display(vec4);
    cout<<vec4.size()<<endl;
    


    return 0;}


//  cplusplus.com mast site h 