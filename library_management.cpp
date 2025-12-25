#include <iostream>
#include <string>
#include <memory>
#include <vector>

class LibraryItem{
protected:
    int id;
    std::string title;
public:
        LibraryItem(int i, std::string t) : id(i), title(t) {}
        virtual void display() const = 0;
        virtual float calculateFine(int days) const = 0;
        virtual ~LibraryItem(){}
};

class Book : public LibraryItem{
public:
    Book(int i, std::string t) : LibraryItem(i,t) {}
    void display() const override {
        std::cout << "Book ID: " << id << ", Title: " << title << "\n";
    }
    float calculateFine(int days) const override {
        return days * 2; // $2 per day
    }
};

class Magazine : public LibraryItem{
public:
    Magazine(int i, std::string t) : LibraryItem(i,t) {}
    void display() const override {
        std::cout << "Magazine ID: " << id << ", Title: " << title << "\n";
    }
    float calculateFine(int days) const override {
        return days * 5; // $5 per day
    }
};

class ResearchPaper : public LibraryItem{
public:
    ResearchPaper(int i, std::string t) : LibraryItem(i,t) {}
    void display() const override {
        std::cout << "ResearchPaper ID: " << id << ", Title: " << title << "\n";
    }
    float calculateFine(int days) const override {
        return days * 10; // higher prices
    }
};

int main(){
    
    std::vector<std::unique_ptr<LibraryItem>>items;
    items.push_back(std::make_unique<Book>(101,"C++ Programming"));
    items.push_back(std::make_unique<Magazine>(202,"Tech Monthly"));
    items.push_back(std::make_unique<ResearchPaper>(303,"AI Research Paper"));

    for(const auto& item : items){
        item->display();
        std::cout << "Fine: "<< item->calculateFine(3) << "\n";
        std::cout << "-------------------------------------\n";
    }
    return 0;
}
