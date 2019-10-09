#ifndef EX13_34_H__
#define EX13_34_H__

#include<set>
#include<string>

class Folder;

//ex13_34
class Message
{
    friend void swap(Message&, Message&)
    friend class Folder;
public:
    explicit Message(const std::string& str = ""):
        contents(str) { }
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();

    void save(Folder&);
    void remove(Folder&);
private:
    std:string contents;
    std::set<Folder*> folders;
    void add_to_Folders(const Message&);
    void remove_from_Folders();
};

#endif
