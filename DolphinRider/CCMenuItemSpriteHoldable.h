//
//  CCMenuItemSpriteHoldable.h
//  DolphinRider
//
//  Created by Carlos Vargas on 20/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface CCMenuItemSpriteHoldable : CCMenuItemSprite
{
    bool buttonHeld;
}

@property (readonly, nonatomic) bool buttonHeld;

@end
