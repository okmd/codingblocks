/*
Note:
    -> stores key value pairs.
    -> don't maintain the order.
    -> key should be unique.

Operations:
    -> insert.
    -> search.
    -> erase/delete.
    -> all should have constant time O(1).

Hash function:
    -> a function which convert a key to address(int) to store in the memory.
    -> when more than one key give same address(index) the collision occurs.
    -> should be fast.
    -> should be uniform.

Hash table:
    -> array of fixed size.
    -> key is mapped to array index.
    -> index = value % array size.(for integers, key=values)

Handling collision:
    -> separate chaining (STL uses): make a linked list and insert either at head or tail. When same index is given by hash function.
    -> linked list should be of constant size for constant time operation.
    -> by making table size as prime number.(It is observed that it reduces the collision).

Making HF:
    -> Take N chars as N-digits as base K(prime number > numbers in N i.e 29, 37 etc.).
        h(s) = [sum(s[L-i-1]*K^i)]% table-size.
    -> by taking prime number the distribution becomes uniform.

Hashing types:
    -> open hashing - separate chaining.
    -> closed hashing - open addressing.
        -> linear probling.
        -> quadratic probing.
    -> double hashing.

TODO: rehashing
*/