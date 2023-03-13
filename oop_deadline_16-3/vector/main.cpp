
#include"MyVector.h"
#include "Fraction.h"

int main(){

    cout<<"===========================\n";
    cout<<"Test MyVector with int\n";
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

    cout<<endl;
    cout<<endl;
    cout<<"\n===========================\n";
    cout<<"===========================\n";
    cout<<"===========================\n";
    cout<<"Test MyVector with Fraction\n";



    
    MyVector<Fraction> f1;
    MyVector<Fraction> f2;
    MyVector<Fraction> f3;

    f3.add(Fraction(1,2));
    f3.add(Fraction(5,2));
    f3.add(Fraction(66,2));
    f3.add(Fraction(55,2));
    f3.add(Fraction(77,2));
    f3.add(Fraction(99,2));
    f3.add(Fraction(33,2));
    f3.add(Fraction(69,2));

    cout<<"print vector1:\n";
    for(int i = 0; i < 10; i++){
        f1.add(Fraction(i,2));
    }
    // print vector 1
    for(int i = 0; i < f1.getSize(); i++){
        cout<<f1.getItem(i) << ", ";
    }
    cout<<"\n";
    cout<<"print vector2: \n";
    for(int i = 1; i < 10; i++){
        f2.add(Fraction(i,2));
    }
   
    // print vector
    for(int i = 0; i < f1.getSize(); i++){
       cout<<f2.getItem(i)<<",";
    }

    // print vector 3
    cout<<"\n";
    cout<<"print vector3: \n";
    for(int i = 0; i < f3.getSize(); i++){
        cout<<f3.getItem(i)<<", ";
    }
    //add addrange
    Fraction f[]={Fraction(1,2),Fraction(2,2),Fraction(3,2),Fraction(4,2),Fraction(5,2)};
    cout<<"\n";
    cout<<"add addrange: ";
    f1.addRange(f,5);
    for(int i = 0; i < f1.getSize(); i++){
        cout<<f1.getItem(i)<<", ";
    }

    //constains
    cout<<"\n";
    cout<<"constains: ";
    if(f1.contains(Fraction(5,2))){
        cout<<"true";
    }else{ 
        cout<<"false";
    }
    // test functions to array
    Fraction arrF[10];
    int m=0;
    cout<<"\n";
    cout<<"to array: \t";
    f2.toArray(arrF,m);
    for(int i = 0; i < f2.getSize(); i++){
        cout<<f2.getItem(i)<<", ";
    }
    //euqal
    cout<<"\n";
    cout<<"equal: \t";
    if(f1.equals(f2)){
        cout<<"true";
    }else{
        cout<<"false";
    }

    //index of
    cout<<"\n";
    cout<<"Index of: ";
    cout<<f3.indexOf(Fraction(5,2));
    // lasst index of
    cout<<"\n";
    cout<<"last index of: ";
    cout<<f3.lastIndexOf(Fraction(5,2));

    //insert
    cout<<"\n";
    cout<<"insert: ";
    f1.insert(Fraction(5,2), 2);
    for(int i = 0; i < f1.getSize(); i++){
        cout<<f1.getItem(i)<<", ";
    }
    //remove
    cout<<"\n";
    cout<<"remove:  ";
    f1.remove(Fraction(5,2));
    for(int i = 0; i < f1.getSize(); i++){
        cout<<f1.getItem(i)<<", ";
    }
    //remove at
    cout<<"\n";
    cout<<"remove at: ";
    f1.removeAt(2);
    for(int i = 0; i < f1.getSize(); i++){
        cout<<f1.getItem(i)<<", ";
    }

    //reverse
    cout<<"\n";
    cout<<"reverse: ";
    f1.reverse();
    for(int i = 0; i < f1.getSize(); i++){
        cout<<f1.getItem(i)<<", ";
    }

    // //to string
    // cout<<"\n";
    // cout<<"to string: ";
    // f1.toString();
    //sort asc
    cout<<"\n";
    cout<<"sort asc: ";
    f3.sortAsc();
    for(int i = 0; i < f3.getSize(); i++){
        cout<<f3.getItem(i)<<", ";
    }
    //sort desc
    cout<<"\n";
    cout<<"sort desc: ";
    f3.sortDesc();
    for(int i = 0; i < f3.getSize(); i++){
        cout<<f3.getItem(i)<<", ";
    }
    
}