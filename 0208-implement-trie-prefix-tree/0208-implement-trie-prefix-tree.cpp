class TriNode{
    public:
    char data;
    TriNode * children[26];
    bool isTerminal;
    TriNode (char ch){
        data=ch;
        for (int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};
class Trie {
public:
    TriNode * root;
    Trie() {
        root=new TriNode('\0');
    }
    void insertUtil(TriNode * root,string word){
        // base case
        if (word.length()==0) {
            root->isTerminal=true;
            return ;
        }
        int index=word[0]-'a';
        TriNode * child;
        //present
        if (root->children[index] != NULL){
            child=root->children[index];
        }
        // notpresent
        else {
            child= new TriNode(word[0]);
            root->children[index]=child;
        }
        // recursion
        insertUtil(child,word.substr(1));
    }
    void insert(string word) {
        insertUtil(root,word);
    }
    bool searchUtil(TriNode * root,string word){
        // base case
        if (word.length()==0){
            return root->isTerminal;
        }
        
        int index=word[0]-'a';
        TriNode * child;
        // present
        if (root->children[index] != NULL){
            child=root->children[index];
        }
        // not present
        else {
            return false;
        }
        // recursion
        return searchUtil(child,word.substr(1));
    }
    bool search(string word) {
        return searchUtil(root,word);
    }
    bool prefixUtil(TriNode * root,string word){
        // base case
        if (word.length()==0){
            return true;
        }
        
        int index=word[0]-'a';
        TriNode * child;
        // present
        if (root->children[index] != NULL){
            child=root->children[index];
        }
        // not present
        else {
            return false;
        }
        // recursion
        return prefixUtil(child,word.substr(1));
    }
    bool startsWith(string prefix) {
        return prefixUtil(root,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */