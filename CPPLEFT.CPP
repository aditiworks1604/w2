#include<iostream>
#include<string>
using namespace std;

class book //BASE CLASS //
{
    private:
    string title,author;
    float price;
    public:
    book(){ //DEFAULT CONSTRUCTOR//
        cout<<"I am a default constructor of class book."<<endl;
    }
    book(string title,string author,float price){ //parameterized constructor//
        this->title=title;
        this->author=author;
        this->price=price;
    }
    book(book &obj){ //copy constructor//
      title=obj.title;
      author=obj.author;
      price=obj.price;
    }
    virtual void display(){ //explicit function//
        cout<<"THE TITLE OF THE BOOK IS ---"<<title<<endl;
          cout<<"THE AUTHOR OF THE BOOK IS ---"<<author<<endl;
            cout<<"THE PRICE OF THE BOOK IS ---"<<price<<endl;
    }
    ~book(){ //destructor of class//
        cout<<"I AM THE DESTRUCTOR OF CLASS BOOK."<<endl;  
      }
};

class library:public book  //child class of book
{
    private:
    string libraryname;
int shelfnumber;
public:

//constructor calls base class constructor//
library(string title,string author, float price,string libraryname,int shelfnumber):book(title,author,price){
    this->libraryname=libraryname;
    this->shelfnumber=shelfnumber;
}
library(){ //default constructor of the child class//
    cout<<"I AM THE CONSTRUCTOR OF THE CLASS LIBRARY//"<<endl;
}
void display(){ //function overriding//
    book::display();
    cout<<"THE LIBRARY NAME IS ---"<<libraryname<<endl;
     cout<<"THE SHELFNUM;BER  IS ---"<<shelfnumber<<endl;
    }
    ~library(){ //destructor of child class//
        cout<<"I AM THE DESTRUCTOR OF THE CLASS LIBRARY"<<endl;
    }
};
int main(){
    library l;
    library l1("SHERLOCK HOLMES","SIR AUTHUR CANON DOYLE",499.99,"AMITY LIBRARY",78);
  l1.display();

    return 0;

}




