# include <iostream>
# include <string>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r){
            title=s;
            rating =r;
        }
        virtual void display(){}
};
class CWHVideo: public CWH{
    int videolength;
    public :
    CWHVideo(string s,float r,int vl):CWH(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"THie is an amazing video "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5 star"<<endl;
        cout<<"Length of this video is "<<videolength<<endl;
    }
};
class CWHText: public CWH{
    int words;
    public :
    CWHText(string s,float r,int wc):CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"THie is an amazing video "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5 star"<<endl;
        cout<<"No. of words in this text tutoraial is "<<words<<endl;
    }
    
};
int main(){
    string title;
    float rating ,vlen;
    int words;
    // for Code with Harry Video
    title ="Django tutorial";
    vlen=4.56;
    rating=4.83;
    CWHVideo djVideo(title,rating,vlen);
    // djV1ideo.display();
    // for Code with Harry Text
    words=220;
    title ="Django tutorial Text";
    rating=4.88;
    CWHText djText(title,rating,words);
    // djText.display();

    CWH *Tuts[2];
    Tuts[0]=&djVideo;
    Tuts[1]=&djText;
    Tuts[0]->display();
    Tuts[1]->display();

    return 0;
}

/*Rules for Defining virtual function
1. They CAnnot be static 
2. They are accesed by object pointer 
3. Virtual function can be a friend of another class
4. a virtual function is base class might not be used.
5. a virtual funciton defined in the base class , there is no neccesity  of redifining it in derived class
*/
