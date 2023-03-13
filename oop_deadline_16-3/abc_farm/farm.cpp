#include "farm.h"

DairyCow::DairyCow(){
    Identifier = 0;
    weight = 0;
    Age = 0;
}
DairyCow::DairyCow(int id, float w, float a){
    Identifier = id;
    weight = w;
    Age = a;
}
DairyCow::DairyCow(const DairyCow &c){
    Identifier = c.Identifier;
    weight = c.weight;
    Age = c.Age;
}
DairyCow::~DairyCow(){
    
}

istream& operator>>(istream &is, DairyCow &c){
    cout<<"Enter Identifier: ";
    is>>c.Identifier;
    cout<<"Enter weight: ";
    is>>c.weight;
    cout<<"Enter Age: ";
    is>>c.Age;
    return is;
}

ostream& operator<<(ostream &os, const DairyCow &c){
    os<<"Identifier: "<<c.Identifier<<endl;
    os<<"weight: "<<c.weight<<endl;
    os<<"Age: "<<c.Age<<endl;
    return os;
}
string DairyCow::ToString(){
    string s = "Identifier: " + to_string(Identifier) + "\n";
    s += "weight: " + to_string(weight) + "\n";
    s += "Age: " + to_string(Age) + "\n";
    return s;
}
//operator
DairyCow DairyCow::operator=(const DairyCow &c){
    Identifier = c.Identifier;
    weight = c.weight;
    Age = c.Age;
    return *this;
}

float DairyCow::getAge(){
    return Age;
}
bool DairyCow::checkAge(float a){
    if(a == Age){
        return true;
    }
    return false;
}
bool DairyCow::checkWeight(float w){
    if(w == weight){
        return true;
    }
    return false;
}

//goat
/////////////////////////////////
Goat::Goat(){
    Identifier = 0;
    weight = 0;
    Age = 0;
}
Goat::Goat(int id, float w, float a){
    Identifier = id;
    weight = w;
    Age = a;
}

Goat::Goat(const Goat &g){
    Identifier = g.Identifier;
    weight = g.weight;
    Age = g.Age;
}
Goat::~Goat(){

}


istream& operator>>(istream &is, Goat &g){
    cout<<"Enter Identifier: ";
    is>>g.Identifier;
    cout<<"Enter weight: ";
    is>>g.weight;
    cout<<"Enter Age: ";
    is>>g.Age;
    return is;
}
ostream& operator<<(ostream &os, const Goat &g){
    os<<"Identifier: "<<g.Identifier<<endl;
    os<<"weight: "<<g.weight<<endl;
    os<<"Age: "<<g.Age<<endl;
  
    return os;
}
string Goat::ToString(){
    string s = "Identifier: " + to_string(Identifier) + "\n";
    s += "weight: " + to_string(weight) + "\n";
    s += "Age: " + to_string(Age) + "\n";
    return s;
}

Goat Goat::operator=(const Goat &g){
    Identifier = g.Identifier;
    weight = g.weight;
    Age = g.Age;
    return *this;
}
bool Goat::checkWeight(float w){
    if(w == weight){
        return true;
    }
    return false;
}
bool Goat::chechAge(float a){
    if(a == Age){
        return true;
    }
    return false;
}

float Goat::getAge(){
    return Age;
}



//////////////////////////
ABCFarm::ABCFarm(){
    vector<DairyCow> cows;
    vector<Goat> goats;
}
ABCFarm::ABCFarm(vector<DairyCow> c, vector<Goat> g){
    cows = c;
    goats = g;
}

ABCFarm::ABCFarm(const ABCFarm &f){
    cows = f.cows;
    goats = f.goats;
}

ABCFarm::~ABCFarm(){

}
// cin class vector
istream& operator>>(istream &is, ABCFarm &f){
    int n;
    cout<<"Enter number of cows: ";
    is>>n;
    for(int i = 0; i < n; i++){
        DairyCow c;
        is>>c;
        f.cows.push_back(c);
    }
    cout<<"Enter number of goats: ";
    is>>n;
    for(int i = 0; i < n; i++){
        Goat g;
        is>>g;
        f.goats.push_back(g);
    }
    return is;
}
ostream& operator<<(ostream &os, const ABCFarm &f){
    os<<"Cows: "<<endl;
    for(int i = 0; i < f.cows.size(); i++){
        os<<f.cows[i];
    }
    os<<"Goats: "<<endl;
    for(int i = 0; i < f.goats.size(); i++){
        os<<f.goats[i];
    }
    return os;
}

void ABCFarm::input(){
    int n;
    cout<<"Enter number of cows: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        DairyCow c;
        cin>>c;
        cows.push_back(c);
    }
    cout<<"Enter number of goats: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        Goat g;
        cin>>g;
        goats.push_back(g);
    }
}

void ABCFarm::output(){
    cout<<"Cows: "<<endl;
    for(int i = 0; i < cows.size(); i++){
        cout<<cows[i];
    }
    cout<<endl;
    cout<<"Goats: "<<endl;
    for(int i = 0; i < goats.size(); i++){
        cout<<goats[i];
    }
}


string ABCFarm::ToString(){
    string s = "Cows: \n";
    for(int i = 0; i < cows.size(); i++){
        s += cows[i].ToString();
    }
    s += "Goats: \n";
    for(int i = 0; i < goats.size(); i++){
        s += goats[i].ToString();
    }
    return s;
}

void ABCFarm::outputByAge(int min, int max){
    cout<<"Cows: "<<endl;
    for(int i = 0; i < cows.size(); i++){
        if(cows[i].getAge() >= min && cows[i].getAge() <= max){
            cout<<cows[i];
        }
    }
    cout<<endl;
    cout<<"Goats: "<<endl;
    for(int i = 0; i < goats.size(); i++){
        if(goats[i].getAge() >= min && goats[i].getAge() <= max){
            cout<<goats[i];
        }
    }
}

