//
// Created by Nero Sparda on 11/01/24.
//

#include "Trie.h"

TrieNode::TrieNode() {
    this->isEndWord = false;
    for (auto & i : this->children) {
        i = nullptr;
    }
}

void TrieNode::markAsLeaf() {
    this->isEndWord = true;
}

void TrieNode::unmarkAsLeaf() {
    this->isEndWord = false;
}

Trie::Trie() {
    root = new TrieNode();
}

// get index of character t
[[nodiscard("Why the heck are you calling a pure function without using its value?")]]
int Trie::getIndex(char t) {
    return t - 'a';
}

void Trie::insertNode(const std::string& key) {}

bool Trie::deleteNode(const std::string& key) {return false;}

bool Trie::searchNode(const std::string& key) {return false;}