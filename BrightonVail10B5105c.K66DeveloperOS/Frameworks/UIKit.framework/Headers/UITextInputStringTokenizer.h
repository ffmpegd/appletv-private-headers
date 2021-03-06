/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputTokenizer.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIResponder;
@protocol UITextInput;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {
	UIResponder<UITextInput> *_textInput;	// 4 = 0x4
}
- (id)initWithTextInput:(id)textInput;	// 0x34848e31
- (NSRange)_getClosestTokenRangeForPosition:(id)position granularity:(int)granularity downstream:(BOOL)downstream;	// 0x34848e75
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x34848fd5
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x348490fd
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x34849051
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x3484917d
@end

