class Trie {
public:
    struct node{
        int val;
        node* children[26] = {};
        bool isEnd;

        node(int value,bool end){
            val = value;
            isEnd = end;
        }
    };

    node *head = NULL;

    Trie() {
        head = new node(-1,true);
    }
    
    void insert(string word) {
        node* temp = head;
        for(int i=0;i<word.length();i++){
            int j = word[i]-'a';
            if(temp->children[j]==NULL){
                if(i==word.length()-1)
                    temp->children[j] = new node(-1,true);
                else
                    temp->children[j] = new node(-1,false);
            }else{
                if(i==word.length()-1)
                    temp->children[j]->isEnd = true;
            }
            temp = temp->children[j];
        }
    }
    
    bool search(string word) {
        node* temp = head;
        for(int i=0;i<word.length();i++){
            int j = word[i]-'a';

            if(temp->children[j]==NULL){
                return false;
            }
            if(i==word.length()-1){
                if(temp->children[j]->isEnd){
                    return true;
                }
                return false;
            }
            temp = temp->children[j];
        }

        return false;
    }
    
    bool startsWith(string prefix) {
        node* temp = head;
        for(int i=0;i<prefix.length();i++){
            int j = prefix[i]-'a';

            if(temp->children[j]==NULL){
                return false;
            }
            temp = temp->children[j];
        }

        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */