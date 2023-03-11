
#include"MyVector.h"


int main(){
    MyVector<int> v1;
    MyVector<int> v2;
    MyVector<int> v3;
    v3.add(1);
    v3.add(5);
    v3.add(66);
    v3.add(55);
    v3.add(77);
    v3.add(99);
    v3.add(33);
    v3.add(69);

    cout<<"print vector1:";
    for(int i = 0; i < 10; i++){
        v1.add(i);
    }
    // print vector 1
    for(int i = 0; i < v1.getSize(); i++){
        cout<<v1.getItem(i)<<" ";
    }
    cout<<"\n";
    cout<<"print vector2:";
    for(int i = 1; i < 10; i++){
        v2.add(i);
    }
   
    // print vector
    for(int i = 0; i < v1.getSize(); i++){
        cout<<v2.getItem(i)<<" ";
    }





    //add addrange
    cout<<"\n";
    cout<<"add addrange:";
    //v1.addRange(v2);

    //constains
    cout<<"\n";
    cout<<"constains:";
    cout<<v1.contains(5);


    // test functions to array
    int arr[10];
    int n=0;
    cout<<"\n";
    cout<<"to array: \t";
    v1.toArray(arr,n);
    //euqal
    cout<<"\n";
    cout<<"equal: \t";
    if(v1.equals(v2)){
        cout<<"true";
    }else{  
        cout<<"false";
    }
    
    //index of
    cout<<"\n";
    cout<<"Index of: ";
    cout<<v3.indexOf(5);
    // lasst index of
    cout<<"\n";
    cout<<"last index of: ";
    cout<<v3.lastIndexOf(5);
    
    //insert
    cout<<"\n";
    cout<<"insert: ";
    v1.insert(5, 2);
    for(int i = 0; i < v1.getSize(); i++){
        cout<<v1.getItem(i)<<" ";
    }

    //remove
    cout<<"\n";
    cout<<"remove:  ";
    v1.remove(5);
    for(int i = 0; i < v1.getSize(); i++){
        cout<<v1.getItem(i)<<" ";
    }
    //remove at
    cout<<"\n";
    cout<<"remove at: ";
    v1.removeAt(2);
     for(int i = 0; i < v1.getSize(); i++){
        cout<<v1.getItem(i)<<" ";
    }

    //reverse
    cout<<"\n";
    cout<<"reverse: ";
    v1.reverse();
    for(int i = 0; i < v1.getSize(); i++){
        cout<<v1.getItem(i)<<" ";
    }

    //to string
    cout<<"\n";
    cout<<"to string: ";
    cout<<v1.toString();
    //sort asc
    cout<<"\n";
    cout<<"sort asc: ";
    v3.sortAsc();
    for(int i = 0; i < v3.getSize(); i++){
        cout<<v3.getItem(i)<<" ";
    }
    //sort desc
    cout<<"\n";
    cout<<"sort desc: ";
    v3.sortDesc();
    for(int i = 0; i < v3.getSize(); i++){
        cout<<v3.getItem(i)<<" ";
    }
}