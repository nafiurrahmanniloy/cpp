#include <iostream>
using namespace std;
class Book
{
   protected:
         string isbn;
         string bookTitle;
         string authorName;
         double price;
         int    availableQuantity;
    public :
         Book()
         {

         }
         Book(string isbn,string bookTitle, string authorName,double price,int availableQuantity )
         {
             this -> isbn=isbn;
             this ->bookTitle=bookTitle;
             this ->authorName=authorName;
             this ->price=price;
             this ->availableQuantity=availableQuantity;
         }

         void setIsbn(string  isbn)
         {
             this-> isbn=isbn;
         }
         void setBookTitle(string  bookTitle)
         {
             this-> bookTitle=bookTitle;
         }

         void setAuthorName(string  authorName)
         {
             this-> authorName=authorName;
         }

          void setPrice(double  price)
         {
             this-> price=price;
         }
          void setAvailableQuantity(int  availableQuantity)
         {
             this-> availableQuantity=availableQuantity;
         }

         string getIsbn()
         {
             return isbn;
         }
          string getBookTitle()
         {
             return bookTitle;
         }

          string getAuthorName()
         {
             return authorName;
         }

          double getPrice()
         {
             return 0;
         }

          int getAvailableQuantity()
         {
             return availableQuantity;
         }

         void showDetails()
         {
             cout <<" The isbn no                 : "<<isbn<<endl;
             cout <<"The book title               : "<<bookTitle<<endl;
             cout <<"The author name              : "<<authorName<<endl;
             cout <<"The books price              : "<<price<<endl;
             cout <<"Total available quantity     : "<<availableQuantity<<endl;

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
    private:
        StoryBook()
        {

        }

        StoryBook(string isbn,string bookTitle, string authorName,double price,int availableQuantity,string category)
        :Book(isbn,bookTitle,authorName,price,availableQuantity)
        {
            this ->category=category;
        }
        void setCategory(string category )
        {
            this-> category=category;
        }
        string getCategory()
        {
            return category;
        }

        void showDetails()
        {
            cout << " the category of the book is : "<<category<<endl;
        }

};
class TextBook: public Book
{
    private:
         int standard;




    public:

       TextBook()
       {

       }
       TextBook(string isbn,string bookTitle, string authorName,double price,int availableQuantity,int standard)
       :Book(isbn,bookTitle,authorName,price,availableQuantity)
       {
           this -> standard=standard;
       }
       void setStandard(int standard)
       {
           this->standard=standard;
       }
       int getStandard()
       {
           return 0;
       }


       void showDetails()
       {
           cout <<" the standard of the book    : "<<standard<<endl;

       }
};
int main()
{
   /*StoryBook obj1("0D1","LIFE IS HARD","TUHIN",50.55,30,"lifelessons");
   obj1.Book::showDetails();
   obj1.showDetails();
   StoryBook ob;
   ob.setIsbn("0e2");
   ob.setBookTitle("A MAN");
   ob.setAuthorName("NILOY");
   ob.setPrice(50.55);
   ob.setAvailableQuantity(55);
   ob.addQuantity(30);
   ob.sellQuantity(23);
   ob.setCategory("lesson");
   ob.Book::showDetails();
   ob.showDetails();
   TextBook tx("0D1","LIFE IS HARD","TUHIN",50.55,30,7);
   tx.Book::showDetails();
   tx.showDetails();*/
  TextBook TextBook;
   TextBook.setIsbn("&^Y");
   TextBook.setBookTitle( "bsdk");
   TextBook.setAuthorName("NILOY");
   TextBook.setPrice(30.44);
   TextBook.setAvailableQuantity(9);
   TextBook.addQuantity(60);
   TextBook.sellQuantity(40);
   TextBook.setStandard(9);
   //TextBook.Book::showDetails();
   //TextBook.showDetails();
   cout<<"the book name is : "<<TextBook.getStandard();




}


