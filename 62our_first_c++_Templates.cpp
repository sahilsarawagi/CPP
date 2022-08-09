# include<iostream>
using namespace std;
template <class T>
class Vector{
    public:
    T *arr;
    int size;
        Vector(int m){
            size=m;
            arr=new T [size];
        }
        T dotproduct(Vector &v){
            T d=0;
            for (int i = 0; i < size; i++)
            {
                  d+=this->arr[i]*v.arr[i];                       
             }
            return d;
}
};
int main(){
        Vector <int>v1(3);
        v1.arr[0]=5;
        v1.arr[1]=9;
        v1.arr[2]=4;
        Vector <int>v2(3);
        v2.arr[0]=7;
        v2.arr[1]=5;
        v2.arr[2]=2;
        int a=v1.dotproduct(v2);
        cout<<a<<endl;

        Vector <float>v3(3);
        v3.arr[0]=5.4;
        v3.arr[1]=9.55;
        v3.arr[2]=4.3;
        Vector <float>v4(3);
        v4.arr[0]=7.5;
        v4.arr[1]=5.4;
        v4.arr[2]=2.8;
        float b=v3.dotproduct(v4);
        cout<<b<<endl;

    return 0 ;
}
// Template me hum data type ko hi variable bna ke send kar dete h 
//  jese class me int/float/char ki T likh diya ,now this T will act as variable and we can put value of T=int /float /char