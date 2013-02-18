//
//  HelloWorldLayer.h
//  DolphinRider
//
//  Created by Carlos Vargas on 16/08/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "CCMenuItemSpriteHoldable.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
    
    CCSprite *mario,*flipper;//,*jumb,*runb;
    CCMenuItemSpriteHoldable *runb,*jumpb,*gobackb;
    CCAnimation *correr;
    BOOL jump,riding;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
