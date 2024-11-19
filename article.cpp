#include <iostream>
#include <string>
#include "author.cpp"

class Article
{
private:
    std::string title;
    Author author;
    int publicationYear;
    std::string journal;

public:
    Article() {};
    Article(std::string articleTitle, Author articleAuthor, int year, std::string journalName)
        : title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {};
    Article(Article &other)
        : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal) {};

    std::string getTitle()
    {
        return title;
    }
    Author getAuthor()
    {
        return author;
    }
    int getPublicationYear()
    {
        return publicationYear;
    }
    std::string getJournal()
    {
        return journal;
    }

    void displayInfo()
    {
        return;
    }
};