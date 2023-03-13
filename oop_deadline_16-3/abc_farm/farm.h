#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DairyCow{
    private:
        int Identifier;
        float weight;
        float Age;
    public:
    DairyCow();
    DairyCow(int id, float w, float a);
    DairyCow(const DairyCow &c);
    ~DairyCow();
    friend istream& operator>>(istream &is, DairyCow &c);
    friend ostream& operator<<(ostream &os, const DairyCow &c);
    string ToString();
    float getAge();

    DairyCow operator=(const DairyCow &c);
    bool checkAge(float a);
    bool checkWeight(float w);
};

class Goat{
    private:
        int Identifier;
        float weight;
        float Age;
    public:
        Goat();
        Goat(int id, float w, float a);
        Goat(const Goat &g);
        ~Goat();
        friend istream& operator>>(istream &is, Goat &g);
        friend ostream& operator<<(ostream &os, const Goat &g);
        string ToString();

        
        float getAge();
        Goat operator=(const Goat &g);
        bool checkWeight(float w);
        bool chechAge(float a);
};
class ABCFarm{
    private:
    vector<DairyCow> cows;
    vector<Goat> goats;
    public:
    ABCFarm();
    ABCFarm(vector<DairyCow> c, vector<Goat> g);
    ABCFarm(const ABCFarm &f);
    ~ABCFarm();
    friend istream& operator>>(istream &is, ABCFarm &f);
    friend ostream& operator<<(ostream &os, const ABCFarm &f);
    string ToString();
    void input();
    void output();
    void outputByAge(int min, int max);
};