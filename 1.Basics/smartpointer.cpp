// a class that behaves like a pointer but automatically manages memory
// it automatically destroy memory when no longer needed
//we have three types of smart pointer:
//1.unique_ptr(unique one owner only  )
#include<iostream>
#include<memory>
using namespace std;
void uni_ptr(){
    unique_ptr<int> ptr=make_unique<int>(10);
    cout<<*ptr;
    cout<<ptr.get()<<endl;
    *ptr=50;
    cout<<"Modified value"<<*ptr<<endl;
      unique_ptr<int> ptr2=move(ptr);
      cout<<"\n after move: \n";

      if(ptr==nullptr){
        cout<<"ptr is now full"<<endl;
      }
      cout<<"ptr2 value"<<*ptr2<<endl;
}

//2.shared_ptr(shared ownership: multipointer can share the same resource use reference counting - delete when count hits 0)
void sha_ptr(){
    shared_ptr<int> p1=make_shared<int>(100);
    shared_ptr<int> p2=p1;
    cout<<p1.use_count();
    p1.reset();
    p2.reset();
    //use whenmultiple parts of code share a resource
}
//3.weak_ptr
void we_ptr(){
    shared_ptr<int> sp=make_shared<int>(50);
    weak_ptr<int> wp=sp;
    cout<<wp.use_count();
    if(auto locked=wp.lock()){
        cout<<*locked;
    }
}

int main(){
    uni_ptr();
    sha_ptr();
    we_ptr();
    return 0;
}