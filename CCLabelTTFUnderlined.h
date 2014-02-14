//
//  CCLabelTTFUnderlined.h
//  PawMe
//
//  Created by Sound Blaster on 14.02.14.
//
//

#ifndef PawMe_CCLabelTTFUnderlined_h
#define PawMe_CCLabelTTFUnderlined_h

#include "cocos2d.h"

class CCLabelTTFUnderlined : public cocos2d::CCLabelTTF {
public:
    CREATE_FUNC(CCLabelTTFUnderlined);
    
    static CCLabelTTFUnderlined* create(const char *string, const char *fontName, float fontSize);
    
    static CCLabelTTFUnderlined* create(const char *string, const char *fontName, float fontSize,
                                 const cocos2d::CCSize& dimensions, cocos2d::CCTextAlignment hAlignment);
    
    static CCLabelTTFUnderlined* create(const char *string, const char *fontName, float fontSize,
                                 const cocos2d::CCSize &dimensions, cocos2d::CCTextAlignment hAlignment,
                                 cocos2d::CCVerticalTextAlignment vAlignment);

    void draw();
    
};

#endif
