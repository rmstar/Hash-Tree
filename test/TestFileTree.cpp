// @(#)TestFileTree.cpp
// Time-stamp: <Julian Qian 2011-03-17 16:21:23>
// Copyright 2011 Julian Qian
// Version: $Id: TestFileTree.cpp,v 0.0 2011/03/11 07:52:10 jqian Exp $

#include <string>
#include <stdio.h>
#include "FileHashTree.h"

int main(int argc, char *argv[]){
    if(argc != 2){
        printf("usage:\n\t./testft <filename>\n");
        return -1;
    }
    const char* file = argv[1];
    if(access(file, R_OK)){
        printf("file %s existed?\n", file);
        return -1;
    }
    FileHashTree ht;
    ht.build(file);
    printf("root digest is %s.\n", ht.rootDigest().toString().c_str());
    return 0;
}

