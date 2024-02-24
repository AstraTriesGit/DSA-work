//
// Created by Nero Sparda on 11/01/24.
//
#include <string>

#ifndef DSA_TRIE_H
#define DSA_TRIE_H
#define ALPHABET_SIZE 26

class TrieNode {
public:
    TrieNode* children[ALPHABET_SIZE];
    bool isEndWord;

    TrieNode();
    void markAsLeaf();
    void unmarkAsLeaf();
};

class Trie {
private:
    TrieNode* root;

public:
    Trie();
    static int getIndex(char t);
    void insertNode(const std::string& key);
    bool searchNode(const std::string& key);
    bool deleteNode(const std::string& key);
};

#endif //DSA_TRIE_H
