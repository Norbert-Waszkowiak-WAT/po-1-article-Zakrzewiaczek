#include <iostream>
#include <string>
#include "article.cpp"

class Chapter
{
private:
    std::string title;
    Author author;
    int chapterNumber = 1;

public:
    Chapter() {};
    Chapter(std::string chapterTitle, Author chapterAuthor, int number)
        : title(chapterTitle), author(chapterAuthor), chapterNumber(number) {};
    Chapter(Chapter const &other)
        : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {};
    Chapter(Article &article)
        : title(article.getTitle()), author(article.getAuthor()) {};
    
    std::string getTitle()
    {
        return title;
    }
    Author getAuthor()
    {
        return author;
    }
    int getChapterNumber()
    {
        return chapterNumber;
    }
    void displayInfo()
    {
        std::string output = "Chapter " + std::to_string(chapterNumber) + ": " + title + " by " + author.getName() + " " + author.getSurname() + "\n";
        std::cout << output;
    }
};