#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
#include <iostream>
#include "Book.h"
#include "Member.h"
using namespace std;

class Library {
public:
    vector<Book> books;
    vector<Member> members;

    void search_book(const string& search_title) {
        for (auto& book : books) {
            if (book.title == search_title) {
                book.display_info();
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void register_member(Member& member) {
        members.push_back(member);
        cout << "Member '" << member.name << "' registered." <<endl;
    }

    void issue_book(Book& book, Member& member) {
        member.borrow_book(book);
    }

};

#endif //LIBRARY_H
