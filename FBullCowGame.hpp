//
//  FBullCowGame.hpp
//  bulls and cows
//
//  Created by Ryan Bond on 1/16/17.
//  Copyright © 2017 Ryan Bond. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>

class FBullCowGame{
public:
    void Reset();
    int GetMaxTries();
    
    
private:
    int MyCurrentTry;
    int MyMaxTries;
};


#endif /* FBullCowGame_hpp */
