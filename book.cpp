#include <iostream>
#include <string>
#include <vector>
#include "chapter.cpp"

class Book {
private:
    std::string title;
    Author author;
    int publicationYear;
    std::vector<Chapter> chapters;

public:
    Book() : title(""), author(Author()), publicationYear(0), chapters({}) {}
    Book(const std::string &bookTitle, const Author &bookAuthor, int year, const std::vector<Chapter> &bookChapters)
        : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {}

    void addChapter(const Chapter &chapter) {
        chapters.push_back(chapter);
    }

    std::string getTitle() {
        return title;
    }

    Author getAuthor() {
        return author;
    }

    int getPublicationYear() {
        return publicationYear;
    }

    std::vector<Chapter> getChapters() {
        return chapters;
    }
};
