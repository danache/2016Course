//
//  trie.cpp
//  findString
//
//  Created by dan on 16/9/24.
//  Copyright © 2016年 dan. All rights reserved.
//

#include "trie.h"


void getRes(){
    
    typedef trie::trie_map<char, int> TestMap;
    TestMap tmap;
    
    tmap.insert("10.0.0.1",    1);
    tmap.insert("10.0.17.8",   2);
    tmap.insert("192.168.0.1", 3);
    tmap.insert("192.168.0.2", 4);
    
    for (auto it = tmap.begin(); it != tmap.end(); ++it) {
        std::cout << *it << " ";
    }
    
    for (auto it = tmap.begin(); it != tmap.end(); ++it) {
        std::cout << it.key() << " ";
    }
}
