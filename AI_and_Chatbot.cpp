#include<iostream>
#include<string>

using namespace std;

struct bookrec{
string title_book;
string author_name;
string publisher;
int price;
};

bookrec b;

int main(){
    
for (int i = 0; i < 2; i++){
cout << "Enter the title of " << i + 1 << " book: ";
getline(cin, b.title_book);
cout << "Enter the Author's name of " << i + 1 << " book: ";
getline(cin, b.author_name);
cout << "Enter the Publisher's name of " << i + 1 << " book: ";
getline(cin, b.publisher);
cout << "Enter the price of " << i + 1 << " book: ";
cin >> b.price;
cout << "\n\n";
cin.ignore();
}

for (int i = 0; i < 2; i++){
cout << "The Title of " << i + 1 << " book is: " << b.title_book <<
endl;
cout << "The Author's name of " << i + 1 << " book is: " <<
b.author_name << endl;
cout << "The Publisher of " << i + 1 << " book is: " << b.publisher <<
endl;
cout << "The Price of " << i + 1 << " book is: " << b.price << endl <<
endl;
}

return 0;
}