struct NoDefault
{
    NoDefault(int) {}
};

struct C
{
public:
    C():no_(0) {}
private:
    NoDefault no_;
};
