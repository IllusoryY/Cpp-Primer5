#ifndef EX13_34_H__
#define EX13_34_H__

#include<set>
#include<string>

class Folder;

class Message
{
    friend void swap(Message&, Message&);
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
    std::string contents;
    std::set<Folder*> folders;

    void add_to_Folders(const Message&);
    void remove_from_Folders();

    void addFldr(Folder* f) { folders.insert(f); }
    void remFldr(Folder* f) { folders.erase(f); }
};

void swap(Message&, Message&);

class Folder
{
    friend class Message;
    friend void swap(Folder &, Folder &);
public:
    Folder() = default;
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
private:
    std::set<Message*> msgs;
    
    void add_to_Message(const Folder&);
    void remove_from_Message();

    void addMsg(Message* m) { msgs.insert(m); }
    void remMsg(Message* m) { msgs.erase(m); }
};

void swap(Folder&, Folder&);

#endif
