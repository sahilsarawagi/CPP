/*Why use templates
--> help for DRY  (donot repeat yourself)
-->generic programming(we have to define class only one time now we can use for any data type)
syntax for template
template <class T>   T can be int,float,char etc
class vector{
    T* arr;
    public:
    vector(T*arr)
            {
                //code      
            }
            //many other method
}
int main(){
    vector<int>myvec(ptr);
    vector<float>myvec(ptr);
}
*/