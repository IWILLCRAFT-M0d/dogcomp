// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef DATA_UNK_H
#define DATA_UNK_H

template<typename T>
struct Contents;

template<typename T> struct Contents {
    /* 0x00 */ int m_unk0;
    /* 0x04 */ unsigned int m_len;
    /* 0x08 */ unsigned int m_cap;
    /* 0x0C */ T *m_data;

    Contents();
    Contents(int size);
    Contents(const T* data);
    Contents(const T* data, unsigned int size);
    Contents(Contents<T> const &other, unsigned int size);
    void EnsureSpaceFor(unsigned int);

    ~Contents();
};

struct string_ascii {
    /* 0x00 */ mutable Contents<char> *m_cont;

    string_ascii();
    string_ascii(const string_ascii* other, const char* data, int size);
    string_ascii(int size);
    string_ascii(const char* d);
    string_ascii(const char* data, unsigned int size);
    string_ascii(unsigned int size, char c);
    ~string_ascii();
    // ~string_ascii() {
    //     if (--m_cont->m_unk0 == 0) {
    //         delete m_cont;
    //     }
    // }
    void EnsureSpaceFor(int) const;
    int compare(string_ascii const &) const;
    string_ascii Append(const char* other, unsigned int size) const;
    string_ascii Append(const string_ascii& other);
    // string_ascii Append(const string_ascii& other) {
    //     return Append(other.m_cont->m_data, other.m_cont->m_len);
    // }
    string_ascii operator+(const char* rhs) const;
};

class Tree34_Node {
    public:
        ///* 0x4 */ Tree34_Node
        //Tree34_Node(Tree34_Basic*, Tree34_Node*);
        void Empty();
};

class Tree34_Basic {
    public:
        ///* 0x4 */ Tree34_Node
        void Empty();
};

class Tree34_Unit {
    public:
        void* unk0;
        void* unk4;
        void* unk8;
        void Zero();
};

class Tree34_NodeAllocatorBasic {
    public:
        virtual ~Tree34_NodeAllocatorBasic();
        // virtual ? = 0
        // virtual ? = 0

};


class Tree34_NodeAllocator : public Tree34_NodeAllocatorBasic {
    public:
        // virtual ? func_00269598
        // virtual ? func_00269600
};

#endif /* DATA_UNK_H */
