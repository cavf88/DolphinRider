//
//  CCMenuItemSpriteHoldable.m
//  DolphinRider
//
//  Created by Carlos Vargas on 20/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "CCMenuItemSpriteHoldable.h"

@implementation CCMenuItemSpriteHoldable

@synthesize buttonHeld;

-(void) selected
{
	[super selected];
	buttonHeld = true;
	[self setOpacity:128];
}

-(void) unselected
{
	[super unselected];
	buttonHeld = false;
	[self setOpacity:64];
}

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

@end
