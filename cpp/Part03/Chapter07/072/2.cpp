#include <iostream>
#include <cstring>

using namespace std;

class Book{
private:
    char *title;
    char *isbn;
    int price;
public:
    Book(const char* title, const char* isbn, int price)
    :price(price){
        this->title = new char[strlen(title)+1]; 
        this->isbn= new char[strlen(isbn)+1]; 
        strcpy(this->title, title);
        strcpy(this->isbn, isbn);
    }

    ~Book(){
        delete []title;
        delete []isbn;
    }
    void ShowBookInfo(){
        cout<<"Title : "<<title<<endl;
        cout<<"ISBN : "<<isbn<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

class EBook : public Book{
private:
    char *DRMKey;
public:
    EBook(const char* title, const char* isbn, int price, const char* DRMKey)
    :Book(title, isbn, price){
        this->DRMKey = new char[strlen(DRMKey)+1];
        strcpy(this->DRMKey, DRMKey);
    }
    ~EBook(){
        delete []DRMKey;
    }
    void ShowEBookInfo(){
        ShowBookInfo();
        cout<<"Key ID : "<<DRMKey<<endl;
    }
};

int main(void){
    Book Cbook("C programming", "555-12345-123-5", 25000);
    Cbook.ShowBookInfo();
    cout<<""<<endl;

    EBook Cebook("C programming", "555-12345-123-5", 20000, "standardEnergy");
    Cebook.ShowEBookInfo();

    return 0;
}