# include <iostream>
using namespace std;
template <class T>
class Sahil{
    public :
    T data;
    Sahil(T a){
            data=a;
    }
    // void dispaly(){
    //     cout<<data;
    // }
    void dispaly();
};
template <class T>
void Sahil <T>::  dispaly(){
    cout<<data<<endl;
}
void func(int b){
    cout<<"I am func 1 "<<b<<endl;
}
template <class T>
void func(T a){
    cout<<"I am templatise func 1 "<<a<<endl;
}
int main(){
    Sahil <float> h(5.5236);
    cout<<h.data<<endl;
    h.dispaly();
    func(4);          // Exact match takes the  higher priority
    func('c');
    return 0;
} 