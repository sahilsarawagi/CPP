# include <iostream>
using namespace std;
class c1;
class c2;
class c1{
    int val;
        friend void exchange(c1 &,c2 &);
    public:
        void intdata(int a){
                val=a;
        }
        void display(void){
            cout<<val<<endl;
        }
};
class c2{
    int val2;
    public:
        friend void exchange(c1 &,c2 &);

        void intdata(int a){
                val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};
void exchange(c1 &a,c2 &b){
    int temp;
    temp= a.val;
    a.val=b.val2;
    b.val2= temp;
}
int main(){
    c1 m;
    m.intdata(3);
cout<<"THe value before swap of m is "<<endl;
    m.display();
    c2 n;
    n.intdata(4);
cout<<"THe value before swap of n is "<<endl;
    n.display();
exchange(m,n);
cout<<"THe value after swap of m is "<<endl;
m.display();
cout<<"THe value after swap of n is "<<endl;
n.display();



    return 0;
}