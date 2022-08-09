# include <iostream>
using namespace std;
class val{
    int a,b;
    public:
    val(void); 
    void data(){
        cout<<"THe value of a and b are "<<a<<" and "<<b<<" respectively"<<endl;
    }

};
val ::val(void){      
    a=1;
    b=8;
}
int main(){
    val s;
    s.data();

    return 0;
}
