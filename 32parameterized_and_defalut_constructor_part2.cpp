# include <iostream>
using namespace std;

class Point{
    int x,y;
    public:
    friend int distane(Point,Point);
    Point(int a, int b ){
        x=a;
        y=b;
    }
    friend int distance(Point ,Point );
    void displayPoint(){
        cout<<"The point is {"<<x<<" , "<<y<<"}"<<endl;
    }
};
int distance(Point g,Point h){
    return g.x+h.y ;
}
int main(){
    Point p(1,1);
    p.displayPoint();
    Point q(2,4);
    q.displayPoint();
    cout<<distance(p,q)<<endl;
    
    return 0;
}