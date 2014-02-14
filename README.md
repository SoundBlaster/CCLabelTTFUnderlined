Use like this

    float fontSize = 18;
    CCLabelTTFUnderlined *siteLabel = CCLabelTTFUnderlined::create("my text line", "Arial", fontSize, cocos2d::CCSize(0.0, fontSize), cocos2d::kCCTextAlignmentCenter);
    siteLabel->setColor(ccBLACK);
    this->addChild(siteLabel);
    
It creates an underlined text label with 1px line that will be colored with text's color.

VERY IMPORTANT!
Use zero width for dimention size.
