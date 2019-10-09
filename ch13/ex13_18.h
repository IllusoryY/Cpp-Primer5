#ifndef EX_13_18_H
#define EX_13_18_H

#include<string>

class Emploee
{
public:
    Emploee() { emploee_id = id_++; }
    Emploee(std::string const& s) : name(s) { emploee_id = id_++; }

    const int id() const { return emploee_id; }
private:
    std::string name;
    int emploee_id;
    static int id_;
};

int Emploee::id = 111;

#endif
