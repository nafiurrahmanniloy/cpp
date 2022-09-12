#include<iostream>
using namespace std;

class Book
{
protected:
    string isbn;
    string bookTitle;
    string authorName;
    double price;
    int availableQuantity;

public:
    Book(){}
    Book(string isbn, string bookTitle, string authorName, double price, int availableQuantity )
    {
        this-> isbn = isbn;
        this-> bookTitle = bookTitle;
        this-> authorName = authorName;
        this-> price = price;
        this-> availableQuantity = availableQuantity;
    }

    void setIsbn(string isbn){this->isbn=isbn;}
    void setBookTitle(string bookTitle){this->bookTitle=bookTitle;}
    void setAuthorName(string authorName){this->authorName=authorName;}
    void setPrice(double price){this->price=price;}
    void setAvailableQuantity(int availableQuantity){this->availableQuantity=availableQuantity;}

    string getIsbn(){return isbn;}
    string getBookTitle(){return bookTitle;}
    string getAuthorName(){return authorName;}
    double getPrice(){return price;}
    int getAvailableQuantity(){return availableQuantity;}

    void showDetails()
    {
        cout <<"The isbn no             : "<<isbn<<endl;
        cout <<"The book title          : "<<bookTitle<<endl;
        cout <<"The author name         : "<<authorName<<endl;
        cout <<"The books price         : "<<price<<endl;
        cout <<"Total available quantity: "<<availableQuantity<<endl;
    }
    void addQuantity(int amount)
        {
            availableQuantity=availableQuantity+amount;

        }
    void sellQuantity(int amount)
        {
            availableQuantity=availableQuantity-amount;

        }
};

class StoryBook: public Book
{
protected:
    string category;
public:
    StoryBook(){}
    StoryBook(string isbn,string bookTitle, string authorName,double price,int availableQuantity,string category):Book(isbn,bookTitle,authorName,price,availableQuantity)
    {
        this->category=category;
    }

    void setCategory(string category){this->category=category;}
    string getCategory(){return category;}

    void showDetails()
    {
        cout<< "The Category of the book is: " << category <<endl;
    }
};

class TextBook: public StoryBook
{
protected:
    int standard;

public:
    TextBook(){}
    TextBook(string isbn,string bookTitle, string authorName,double price,int availableQuantity, string category, int standard): StoryBook(isbn,bookTitle,authorName,price,availableQuantity, category)
    {
        this->standard=standard;
    }

    void setStandard(int standard){this->standard=standard;}
    int getStandard(){return standard;}

    void showDetails()
    {
        cout<< "The standard of the book: "<< standard <<endl;
    }
};



int main()
{
    Book obj("3213", "I am kaushik", "Shankar", 6.55, 40);
    obj.showDetails();

    cout<< "===================================================="<<endl;

    StoryBook obj1("0D1","Life is Hard", "Kaushik", 50.55, 30, "Lifelessons");
    obj1.Book::showDetails();
    obj1.showDetails();

    cout<< "===================================================="<<endl;

     TextBook obj2("sldakfj", "I am kaushik", "Shankar", 6.55, 40, "Thiller" ,5);
     obj2.Book::showDetails();
     obj2.StoryBook::showDetails();
     obj2.showDetails();

}
