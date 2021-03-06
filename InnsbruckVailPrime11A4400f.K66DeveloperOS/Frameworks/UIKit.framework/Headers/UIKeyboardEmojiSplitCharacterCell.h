/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class NSString, NSArray, UIKeyboardEmojiInputController;
@protocol UIKeyboardEmojiPressIndicationDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCharacterCell : UITableViewCell {
	NSArray *_characters;	// 360 = 0x168
	NSString *_emojiString;	// 364 = 0x16c
	UIKeyboardEmojiInputController *_inputController;	// 368 = 0x170
	UIView<UIKeyboardEmojiPressIndicationDelegate> *_delegate;	// 372 = 0x174
}
@property(retain) NSArray *characters;	// G=0x2f705015; S=0x2f705025; 
@property(retain) UIView<UIKeyboardEmojiPressIndicationDelegate> *delegate;	// G=0x2f70574d; S=0x2f705761; @synthesize=_delegate
@property(assign) UIKeyboardEmojiInputController *inputController;	// G=0x2f705771; S=0x2f705785; @synthesize=_inputController
+ (id)emojiFontAttributes;	// 0x2f704dc1
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x2f704ecd
// declared property getter: - (id)characters;	// 0x2f705015
- (void)dealloc;	// 0x2f704f8d
// declared property getter: - (id)delegate;	// 0x2f70574d
- (void)drawRect:(CGRect)rect;	// 0x2f705161
// declared property getter: - (id)inputController;	// 0x2f705771
// declared property setter: - (void)setCharacters:(id)characters;	// 0x2f705025
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f705761
// declared property setter: - (void)setInputController:(id)controller;	// 0x2f705785
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f7052b5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f7055a1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f7055d9
@end

