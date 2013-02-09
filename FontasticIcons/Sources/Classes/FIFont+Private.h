//
//  FIFont+Private.h
//  FontasticIcons
//
//  Created by Alex Denisov on 29.10.12.
//  Copyright (c) 2012 Alex Denisov. All rights reserved.
//

#import <CoreText/CoreText.h>
#import "FIFont.h"

@interface FIFont ()

+ (instancetype)fontWithName:(NSString *)aName ofType:(NSString *)aType;
- (id)initWithFontName:(NSString *)aName ofType:(NSString *)aType;
- (CTFontRef)fontRef;

@end