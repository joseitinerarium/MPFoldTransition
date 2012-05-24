//
//  MPFoldSegue.h
//  MPFoldTransition (v 1.0.0)
//
//  Created by Mark Pospesel on 4/18/12.
//  Copyright (c) 2012 Mark Pospesel. All rights reserved.
//

// You must subclass this class, it performs no segue on its own

#import <UIKit/UIKit.h>
#import "MPFoldEnumerations.h"

@interface MPFoldSegue : UIStoryboardSegue

- (void) doInit;

@property (assign, nonatomic) MPFoldStyle style;
@property (assign, nonatomic) MPFoldStyle defaultStyle;

@end
