# include <iostream>
using namespace std;
template <class T1=int,class T2=float>
class Sahil{
        public:
        T1 a;
        T2 b;
        Sahil(T1 x,T2 y){
            a=x;
            b=y;
        }
        void display(){
            cout<<"THe vlaue of a is "<<a<<endl;
            cout<<"THe vlaue of b is "<<b<<endl;
        }
};
int main(){
    Sahil <>h(4,4.5);
    h.display();

    Sahil <float,char> c(4.6,'g');
    c.display();


    return 0;
}