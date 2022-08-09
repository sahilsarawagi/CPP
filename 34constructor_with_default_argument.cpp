# include <iostream>
using namespace std;
class Simple{
    int data1,data2 ;
    public:
    Simple(int a, int b=44){
        data1=a;
        data2=b;
    }
    void printdata();
};
void Simple :: printdata(){
    cout<<"THe value of data1 and data2 are "<<data1<<" and "<<data2<<endl;
}
int main(){
    Simple a(4,6);
    a.printdata();
    Simple m(4);
    m.printdata();
    return 0;
}