//
//  wrapper.cpp
//  c++withIos
//
//  Created by Soha Ahmed on 06/04/2020.
//  Copyright © 2020 Soha Ahmed. All rights reserved.
//

#include <stdio.h>
#include "junk.h"
// extern "C" will cause the C++ compiler
// (remember, this is still C++ code!) to
// compile the function in such a way that
// it can be called from C
// (and Swift).
extern "C" int getIntFromCPP()
{
    // Create an instance of A, defined in
    // the library, and call getInt() on it:
    return A(1234).getInt();
}
