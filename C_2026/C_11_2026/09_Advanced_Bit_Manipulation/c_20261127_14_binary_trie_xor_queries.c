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

    uint32_t queryMaximumXOR(uint32_t num)
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
    vector<uint32_t> arr = { 5, 10, 15, 25 };

    BinaryTrie trie;

    for (uint32_t num : arr)
        trie.insert(num);

    uint32_t query = 10;

    cout << "Query value: " << query << '\n';

    cout << "Maximum XOR result: "
        << trie.queryMaximumXOR(query) << '\n';

    return 0;
}


//--------------------------------------------------
/*
Output:

Query value : 10
Maximum XOR result : 31

//--------------------------------------------------


//--------------------------------------------------
compilation and running steps:

gcc -std=c11 -Wall -Wextra -Wpedantic \
c_20261127_14_binary_trie_xor_queries.c -o o_binary_trie_xor_queries

./o_binary_trie_xor_queries

*/
//--------------------------------------------------


