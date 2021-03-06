/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class NSArray, UIKeyboardEmojiInputController, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPickerCharacterCell : UITableViewCell {
	NSArray *_characters;	// 300 = 0x12c
	NSString *_emojiString;	// 304 = 0x130
	UIKeyboardEmojiInputController *_inputController;	// 308 = 0x134
	UIView *_pressIndicator;	// 312 = 0x138
}
@property(retain) NSArray *characters;	// G=0x330d03f5; S=0x330d0405; 
@property(assign) UIKeyboardEmojiInputController *inputController;	// G=0x330d0aad; S=0x330d0ac1; @synthesize=_inputController
@property(retain) UIView *pressIndicator;	// G=0x330d0ad9; S=0x330d0aed; @synthesize=_pressIndicator
+ (CFDictionaryRef)emojiFontAttributes;	// 0x330d01a9
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x330d02ad
// declared property getter: - (id)characters;	// 0x330d03f5
- (void)dealloc;	// 0x330d036d
- (void)drawRect:(CGRect)rect;	// 0x330d0541
// declared property getter: - (id)inputController;	// 0x330d0aad
// declared property getter: - (id)pressIndicator;	// 0x330d0ad9
// declared property setter: - (void)setCharacters:(id)characters;	// 0x330d0405
// declared property setter: - (void)setInputController:(id)controller;	// 0x330d0ac1
// declared property setter: - (void)setPressIndicator:(id)indicator;	// 0x330d0aed
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x330d0665
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x330d093d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x330d0999
@end

