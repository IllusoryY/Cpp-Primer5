#ifndef EX_13_6_H
#define EX_13_6_H

#include<memory>
#include<vector>
#include<string>
#include<exception>
#include<initializer_list>

class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    using spv = std::shared_ptr<std::vector<std::string>>;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);

    StrBlob(StrBlob const& rhs) : data(make_shared<std::vector<std::string>>(*rhs.data)) {};
    StrBlob& operator=(StrBlob const& rhs)
    {
        data = make_shared<std::vector<std::string>>(*rhs.data);
        return *this;
    }

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    //add and erase elements
    void push_back(std::string const& t) { data->push_back(t); }
    void pop_back();
    //find elements
    std::string& front();
    std::string& back();
    const std::string& front() const;
    const std::string& back() const;

private:
    spv data;
    void check(size_type i, std::string const& msg) const;
};

StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)) {}

void StrBlob::check(size_type i, std::string const& msg) const
{
    if(i >= data->size())
        throw std::out_of_range(msg);
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

std::string& StrBlob::front()
{
    check(0, "front on empty StrBlob");
    return data->front();
}

std::string& StrBlob::back()
{
    check(0, "back on empty StrBlob");
    return data->back();
}

const std::string& StrBlob::front() const
{
    check(0, "front on empty StrBlob");
    return data->front();
}

const std::string& StrBlob::back() const
{
    check(0, "back on empty StrBlob");
    return data->back();
}
#endif
