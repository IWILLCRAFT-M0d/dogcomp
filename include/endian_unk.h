// NOTE: This file is temporary until the proper headers and whatnot are created
#ifndef ENDIAN_UNK_H
#define ENDIAN_UNK_H

class Endian {
    public:
        virtual ~Endian();
        virtual void func_002D7980();
        // virtual ? = 0
        // virtual ? 002D7F70
};

class Endian_Mem : public Endian {
    public:
        virtual ~Endian_Mem();
        // virtual base function (002D7980)
        // virtual ? func_002D8750
};

class Endian_File : public Endian {

};

class Endian_ExpandMem : public Endian_Mem {

};


#endif /* ENDIAN_UNK_H */
