#include <iostream>
#include <string>

enum class Status {Available, CheckedOut, Lost};

struct Book{
    std::string name;
    std::string author;
    Status status;
};

void availableBooks(Book books[], int book_size){
    for (int i =0; i < book_size; i++){

        if (books[i].status == Status::Available){
            std::cout << books[i].name << std::endl;
        }
    }
}

void checksOutBooks(std::string name, Book books[], int book_size){
    for (int i =0; i < book_size; i++){

        if (books[i].name == name){
            books[i].status = Status::CheckedOut;
        }
    }
}

std::string statusStr(Status status){
    switch (status)
    {
    case Status::Available:
        return "Available";
    case Status::CheckedOut:
        return "CheckedOut";
    case Status::Lost:
        return "Lost";
    default:
        return "Invalid";
    }
}

int main(){

    Book books[4] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", Status::Available},
        {"To Kill a Mockingbird", "Harper Lee", Status::CheckedOut},
        {"1984", "George Orwell", Status::Lost},
        {"Pride and Prejudice", "Jane Austen", Status::Available}
    };

    int book_size = sizeof(books)/sizeof(books[0]);

    std::cout << "=================================" << std::endl;
    std::cout << "Available Books:" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    availableBooks(books, book_size);
    std::cout << "=================================" << std::endl;
    std::cout << "Status of Book \"The Great Gatsby\" before checkout: " << statusStr(books[0].status) << std::endl;
    checksOutBooks("The Great Gatsby", books, book_size);
    std::cout << "Status of Book \"The Great Gatsby\" after checkout: " << statusStr(books[0].status) << std::endl;
    




    return 0;
}