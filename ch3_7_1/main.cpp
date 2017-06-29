#include <list>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

struct Entry 
{
    string name;
    int number;
};

// Entry phone_book[1000];
vector<Entry> phone_book(1000); // vector из 1000 элементов
vector<Entry> thousand_phone_books[1000]; // 1000 пустых векторов

void print_entry(int i) 
{
    cout << phone_book[i].name << ' ' << phone_book[i].number << '\n'; //  синтаксис адресации по индексу такой же, как и в массиве
}

void add_entries(int n) 
{
    phone_book.resize(phone_book.size() + n);
}

void f(vector<Entry>& v) 
{
    vector<Entry> v2 = phone_book; // при присваивании все элементы копируются
    v = v2;  // v и v2 содержат независимые копии объектов типа Entry
}

int main() 
{
    cout << phone_book.size() << endl;
    
    // sizeof(Entry) != sum of its members
    // This is because of padding added to satisfy alignment constraints.
    // s. https://en.wikipedia.org/wiki/Data_structure_alignment
    cout << sizeof(thousand_phone_books) / sizeof(Entry) << endl;  // 600
    
    print_entry(1);
}