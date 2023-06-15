
class Tree
{
    public:
    bool end;
    Tree *children[26];
    Tree(bool end)
    {
        this->end = end;
        for (int i = 0; i < 26; i++)
        {
            this->children[i] = NULL;
        }
    }
};

class Trie {
    Tree *root;
public:
    Trie() 
    {
        root = new Tree(0); 
    }
    
    void insertRec(string word, Tree *root)
    {
        if (word.length() == 1)
        {
            if (!root->children[word[0] - 'a']) root->children[word[0] - 'a'] = new Tree(1);
            else                                root->children[word[0] - 'a']->end = 1;
            return;
        }
        if (!root->children[word[0] - 'a']) root->children[word[0] - 'a'] = new Tree(0);
        insertRec(word.substr(1), root->children[word[0] - 'a']);
    }

    void insert(string word) 
    {
        insertRec(word, root);   
    }
    
    bool searchRec(string word, Tree *root) 
    {
        if (word.length() == 1)
        {
            if (root->children[word[0] - 'a'] && root->children[word[0] - 'a']->end) return 1;
            return 0;
        }
        if (root->children[word[0] - 'a'])
            return searchRec(word.substr(1), root->children[word[0] - 'a']);
        return 0;
    }

    bool startsWithRec(string word, Tree *root)
    {
        if (!word.length()) return 1;
        if (root->children[word[0] - 'a'])
            return startsWithRec(word.substr(1), root->children[word[0] - 'a']);
        return 0;
    }

    bool search(string word) 
    {
        return searchRec(word, root);
    }
    
    bool startsWith(string prefix) 
    {
        return startsWithRec(prefix, root);
    }
};
