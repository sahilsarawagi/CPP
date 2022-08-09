# include <iostream>
using namespace std;
int fibbo(int x){
      if (x==1 || x==2){
          return 1;
      }
      else if (x==0)
      {
          return 0;
      }
      
      else
      {
          return x=fibbo(x-2)+fibbo(x-1);
      }
    

}
int factorial(int x){
    if (x==0 || x==1)
    {
        return 1 ;
    }
    else
    {
       return x*factorial(x-1);
    }

}

int main(){
    int n;
    cout<<"Enter the value for its factorial"<<endl;
    cin>>n;
    cout<<"the factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<fibbo(n)<<endl;
    return 0 ;
}