/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSError;

@interface MUMathExpressionBase : NSObject {
	NSMutableDictionary *_indicesForVariables;	// 4 = 0x4
	NSError *_lastError;	// 8 = 0x8
}
@property(readonly, retain) NSError *lastError;	// G=0x32533a1d; converted property
+ (id)parserErrorToString:(XXStruct_HETg$A *)string;	// 0x32533a2d
- (id)init;	// 0x325338f5
- (void)_cleanup;	// 0x32533959
- (void)dealloc;	// 0x3253399d
- (void)finalize;	// 0x325339dd
// converted property getter: - (id)lastError;	// 0x32533a1d
- (void)setLastError:(XXStruct_HETg$A *)error;	// 0x32533bb1
@end

