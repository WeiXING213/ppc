//Declaration and definition
#include <iostream>
#include <fstream>
#include <fstream>
#include <vector>
using namespace std;

extern int i;

//extern float f(float);

float b;
//
//float f(float a)
//{
//    return a + 1.0;
//};

int i;

int h(int x)
{
    return x + 1;
}

void main1()
{
    /*
    b = 1.0;
    i = 2;
    f(b);
    h(i);
    cout << b << std::endl;
    cout << i << std::endl;
    cout << f(b) << std::endl;
    cout << h(i) << std::endl;
    cout << oct << 15 << endl;
    cout << hex << 15 << endl;
    int number;
    cout << "Enter a decimal number";
    cin >> number;
    cout << "number is : " << number << endl;
     */
    
    //ifstream in("main.cpp");
    
    //ofstream out("main2.cpp");
    
//    string s;
//    while(getline(in, s))
//        cout << s << "\n";
//
//    string line;
//    vector<string> v;
//    while(getline(in, line))
//    {
//        v.push_back(line);
//    }
//
//    for(int i=0; i<v.size(); i++)
//    {
//        cout << i << ": " << v[i] << endl;
//    }
    
    vector<string> words;
    ifstream in("main.cpp");
    string word;
    while (in >> word)
        words.push_back(word);
    
    for (int i=0; i<words.size(); i++)
    {
        cout << words[i] << endl;
    }
    
};

//chapitre 3
//int dog, cat, bird, fish;
//
//void fox(int pet)
//{
//    cout << "xx" << pet << endl;
//}

//void f (int a){
//    cout << "a=" << a << endl;
//    a = 5;
//    cout << "a=" << a << endl;
//}

//void pf(int *p)
//{
//    cout << "p=" << (long)p  << endl;
//    cout << "*p=" << *p << endl;
//    *p = 5;
//    cout << "p=" << (long)p << endl;
//};

void pf(int& r)
{
    cout << "r=" << r  << endl;
    cout << "&r=" << &r << endl;
    r = 5;
    cout << "r=" << r << endl;
};


int main()
{
    
    int i = 99;
    void* vp = &i;
    *((int*)vp) = 3;
    
//    int x = 47;
//    cout << "x=" << x << endl;
//    cout << "&x=" << &x << endl;
//    pf(x);
//    cout << "x=" << x << endl;
//
    
//    int i =0;
//    int j= 0;
//    cout << ++i << endl;
//    cout << j++ << endl;
//    cout << --i << endl;
//    cout << j-- << endl;
//    int i, j, k;
//    cout << "f() :" << (long)&fox << endl;
//
//    cout << "dog :" << (long)&dog << endl;
//    cout << "cat :" << (long)&cat << endl;
//    cout << "bird :" << (long)&bird << endl;
//    cout << "fish :" << (long)&fish << endl;
//
//    cout << "i :" << (long)&i << endl;
//    cout << "j :" << (long)&j << endl;
//    cout << "k :" << (long)&k << endl;
    
//    int a = 47;
//    int* ipa = &a;
//
//    *ipa = 100;
//
//    cout << a << endl;
    
    
    
};
