# include <iostream>
using namespace std;
class complex;      //forward decleartion
class Calculator{
    public:
        int add(int a ,int b){
            return a+b ;
        }
        int sumReal(complex ,complex );
        int sumImaginary(complex ,complex );
};
class complex{
    int a,b;
    // Individully declearing function as friend
    // friend int Calculator:: sumReal(complex o1,complex o2);
    // friend int Calculator:: sumImaginary(complex o1,complex o2);
    // we can do as above are simply can make whole class friend
    friend class Calculator;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        void getPrint(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};
int Calculator:: sumReal(complex o1,complex o2){
                return (o1.a+o2.a);
        }
int Calculator:: sumImaginary(complex o1,complex o2){
                return (o1.b+o2.b);
        }

int main(){
    complex o1,o2,o3;
    o1.setNumber(4,6);
    o1.getPrint();
    o2.setNumber(8,9);
    o2.getPrint();
    Calculator r1;
   int k=r1.sumReal(o1,o2);
   int n=r1.sumImaginary(o1,o2);
   cout<<"THe sum of real part of o1 and o2 is "<<k<<endl;
   cout<<"THe sum of imaginary part of o1 and o2 is "<<n<<endl;
   o3.setNumber(k,n);
   o3.getPrint();



    return 0;
}