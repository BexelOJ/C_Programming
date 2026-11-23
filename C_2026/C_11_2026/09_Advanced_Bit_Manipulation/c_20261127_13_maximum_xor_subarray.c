#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

class BinaryTrie {
private:
    struct Node {
        Node* child[2] = { nullptr, nullptr };
    };

    Node* root;

public:
    BinaryTrie()
    {
        root = new Node();
    }

    void insert(uint32_t num)
    {
        Node* current = root;

        for (int bit = 31; bit >= 0; bit--)
        {
            unsigned int value = (num >> bit) & 1U;

            if (current->child[value] == nullptr)
                current->child[value] = new Node();

            current = current->child[value];
        }
    }

    uint32_t maximumXOR(uint32_t num)
    {
        Node* current = root;
        uint32_t result = 0;

        for (int bit = 31; bit >= 0; bit--)
        {
            unsigned int value = (num >> bit) & 1U;
            unsigned int opposite = value ^ 1U;

            if (current->child[opposite] != nullptr)
            {
                result |= (1U << bit);
                current = current->child[opposite];
            }
            else
            {
                current = current->child[value];
            }
        }

        return result;
    }

    ~BinaryTrie()
    {
        destroy(root);
    }

private:
    void destroy(Node* node)
    {
        if (node == nullptr)
            return;

        destroy(node->child[0]);
        destroy(node->child[1]);
        delete node;
    }
};

int main()
{
    vector<uint32_t> arr = { 8, 1, 2, 12 };

    BinaryTrie trie;

    trie.insert(0);

    uint32_t prefixXOR = 0;
    uint32_t maximum = 0;

    for (uint32_t num : arr)
    {
        prefixXOR ^= num;

        uint32_t current = trie.maximumXOR(prefixXOR);

        if (current > maximum)
            maximum = current;

        trie.insert(prefixXOR);
    }

    cout << "Maximum subarray XOR: " << maximum << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Maximum subarray XOR : 15

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261123_12_detect_overflow_in_addition.c -o o_detect_overflow_in_addition

./o_detect_overflow_in_addition

*/
//--------------------------------------------------


