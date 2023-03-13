#include "farm.h"

int main(){ 
    vector<DairyCow> cows;
    vector<Goat> goats;
    
    DairyCow c1(1, 2.5, 3.5);
    DairyCow c2(2, 3.5, 3.6);
    DairyCow c3(3, 4.5, 3.7);
    DairyCow c4(4, 5.5, 3.8);
    Goat g1(5, 5.5, 4.1);
    Goat g2(6, 4.5, 4.2);
    Goat g3(7, 3.5, 4.3);
    Goat g4(8, 2.5, 4.4);

    cows.push_back(c1);
    cows.push_back(c2);
    cows.push_back(c3);
    cows.push_back(c4);

    goats.push_back(g1);
    goats.push_back(g2);
    goats.push_back(g3);
    goats.push_back(g4);

    ABCFarm f(cows, goats);

    f.ToString();
    cout<<"\n  INPUT :";
    f.input();
    f.output();
    cout<<"\n  OUTPUT BY AGE :";
    f.outputByAge(3, 4);



}
