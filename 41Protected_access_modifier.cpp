# include <iostream>
using namespace std;
class Base{
    protected:
    int a;
    private:
    int b;
};
/*For a protected memeber:
                            Public derivation   Private derivation      Protected Derivation
   1. Private members       Not Inherited         Not Inherited             Not Inherited
   2. Protected members     Protected               Private                 Protected
   3. Public members        Public                  Private                 Protected
*/
class Derived: protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<b.a<<endl;        will not work since  a is protected in both Base as well as derived class   
    return 0;  
}