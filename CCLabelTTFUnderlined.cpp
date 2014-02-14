//
//  CCLabelTTFUnderlined.cpp
//  PawMe
//
//  Created by Sound Blaster on 14.02.14.
//
//

#include "CCLabelTTFUnderlined.h"

USING_NS_CC;

CCLabelTTFUnderlined * CCLabelTTFUnderlined::create(const char *string, const char *fontName, float fontSize)
{
    return CCLabelTTFUnderlined::create(string, fontName, fontSize,
                              CCSizeZero, kCCTextAlignmentCenter, kCCVerticalTextAlignmentTop);
}

CCLabelTTFUnderlined * CCLabelTTFUnderlined::create(const char *string, const char *fontName, float fontSize,
                                const CCSize& dimensions, CCTextAlignment hAlignment)
{
    return CCLabelTTFUnderlined::create(string, fontName, fontSize, dimensions, hAlignment, kCCVerticalTextAlignmentTop);
}

CCLabelTTFUnderlined* CCLabelTTFUnderlined::create(const char *string, const char *fontName, float fontSize,
                               const CCSize &dimensions, CCTextAlignment hAlignment,
                               CCVerticalTextAlignment vAlignment)
{
    CCLabelTTFUnderlined *pRet = new CCLabelTTFUnderlined();
    if(pRet && pRet->initWithString(string, fontName, fontSize, dimensions, hAlignment, vAlignment))
    {
        pRet->autorelease();
        return pRet;
    }
    CC_SAFE_DELETE(pRet);
    return NULL;
}


void CCLabelTTFUnderlined::draw()
{
    CCLabelTTF::draw();
    ccColor3B textColor = this->getColor();
    cocos2d::ccDrawColor4F( textColor.r, textColor.g, textColor.b, this->getOpacity() );
    cocos2d::ccDrawLine(ccp(0,0), ccp(this->getContentSize().width, 0));
}