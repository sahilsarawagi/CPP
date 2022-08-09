# include<iostream>
using namespace std;

class Y;
class X{
    int data;
    friend void add(X,Y);
    public :
        void setValue(int Value){
            data=Value;
        }
};
class Y{
    int num;
    public:
    void setValue(int Value){
        num=Value;
    }
    friend void add(X,Y);
};
void add(X o1, Y o2){
    cout<<"Summing datas of X and Y object gives me "<<o1.data+o2.num<<endl;

}
int main(){
    X a;
    a.setValue(4);
    Y b;
    b.setValue(56);
    add(a,b);

    return 0;
}