#include <bits/stdc++.h>
#include <string>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word) {
        // Base case
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }

        // Assumption: The word will be in uppercase
        int index = word[0] - 'A';
        TrieNode* child;

        // Present
        if (root->children[index] != nullptr) {
            child = root->children[index];
        } else {
            // Absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        transform(word.begin(), word.end(), word.begin(), ::toupper); // Convert to uppercase
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        // Base case
        if (word.length() == 0) {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        // Present
        if (root->children[index] != nullptr) {
            child = root->children[index];
        } else {
            // Absent
            return false;
        }

        // Recursive call
        return searchUtil(child, word.substr(1));
    }

    bool search(string word) {
        transform(word.begin(), word.end(), word.begin(), ::toupper); // Convert to uppercase
        return searchUtil(root, word);
    }
};

int main() {
    Trie t;
    t.insertWord("ABC");
    t.insertWord("AB");
    cout << (t.search("AB") ? "Found" : "Not Found") << endl;
    return 0;
}
