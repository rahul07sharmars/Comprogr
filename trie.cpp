// https://www.codingninjas.com/codestudio/problems/implement-trie_631356?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_tries_videos&leftPanelTab=1
// https://www.youtube.com/watch?v=dBGUmUQhjaM&t=243s

struct Node{
    Node* links[26];
    bool flag=false;
    bool containChar(char c){
        return links[c-'a']!=NULL;
    }
    void put(char c, Node* node){
        links[c-'a']=node;
    }
    Node* get(char c){
        return links[c-'a'];}
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};

class Trie {

public:
    Node* root;

    /** Initialize your data structure here. */
    Trie() {
		root=new Node();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
		Node* node=root;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(!node->containChar(word[i])){
                node->put(word[i], new Node());
            }
            node=node->get(word[i]);
        }
        node->setEnd();
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node* node=root;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(!node->containChar(word[i]))
                return false;
            node=node->get(word[i]);            
        }
        return node->isEnd();

    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
		Node* node=root;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(!node->containChar(word[i]))
                	return false;
            node=node->get(word[i]);
        }
        return true;
    }
};
