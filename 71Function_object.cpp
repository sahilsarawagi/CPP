# include <iostream>
# include <functional>
# include <algorithm>
using namespace std;

int main(){
        // function object(functor): FUnction wrapped in class so that it is available like an object 
    int arr[]={1,6,3,8,9,6,4,54};
    // sort(arr,arr+5);  // it will sort in increasing order the arr form 0th postiion to 5th position
    sort(arr,arr+5,greater<int>());  // it will sort in decreasing order the arr form 0th postiion to 5th position
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<endl;
    }
    


    return 0;
}