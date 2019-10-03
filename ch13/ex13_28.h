#include<string>

class TreeNode
{
public:
    TreeNode() : value(std::string()), count(new int(1)), left(nullptr), right(nullptr) {}
    TreeNode(TreeNode const& rhs) : value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) { ++*count; }
    TreeNode& operator=(TreeNode const& rhs)
    {
        ++*rhs.count;
        if(--*count == 0)
        {
            delete count;
            delete left;
            delete right;
        }
        value = rhs.value;
        count = rhs.count;
        left = rhs.left;
        right = rhs.right;
        return *this;
    }

    ~TreeNode()
    {
        if(++*count == 0)
        {
            delete count;
            delete left;
            delete right;
        }
    }
private:
    std::string value;
    int* count; //为实现引用计数，count应该为指针
    TreeNode* left;
    TreeNode* right;
};

class BinStrTree
{
public:
    BinStrTree() : root(new TreeNode()) {}
    BinStrTree(BinStrTree const& rhs) : root(new TreeNode(*rhs.root)) {}
    BinStrTree& operator=(BinStrTree const& rhs)
    {
        auto tmp = new TreeNode(*rhs.root);
        delete root;
        
        root = tmp;
        return *this;
    }

    ~BinStrTree() { delete root; }
private:
    TreeNode* root;
};
