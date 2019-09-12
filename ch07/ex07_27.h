#ifndef EX07_27_h
#define EX07_27_h

#include<string>
#include<iostream>

class Screen
{
public:
    typedef std::string::size_type pos;
    
    //constructors
    Screen() = default;
    Screen(pos h, pos w):height(h),width(w),contents(h * w, ' '){}
    Screen(pos h, pos w, char c):height(h),width(w),contents(h * w, c){}
    
    char get() const { return contents[cursor]; }
    char get(pos r,pos c) const { return contents[r * width + c]; }
    inline Screen& move(pos r, pos c);
    inline Screen& set(char c);
    inline Screen& set(pos r, pos c, char ch);

    const Screen& display(std::ostream& os) const { do_display(os); return *this; }
    Screen& display(std::ostream& os) { do_display(os); return *this; }

private:
    void do_display(std::ostream& os) const { os << contents; }

private:
    pos cursor = 0;
    pos height = 0,width = 0;
    std::string contents;
};

inline Screen& Screen::move(pos r, pos c)
{
    cursor = r*width + c;
    return *this;
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
    contents[r*width + c] = ch;
    return *this;   
}

#endif
