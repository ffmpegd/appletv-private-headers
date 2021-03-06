/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiImageView : UIView {
	NSString *_emojiString;	// 96 = 0x60
}
@property(retain, nonatomic) NSString *emojiString;	// G=0x2f6e3ee9; S=0x2f6e3ef9; 
- (id)initWithFrame:(CGRect)frame emojiString:(id)string;	// 0x2f6e3e35
- (void)dealloc;	// 0x2f6e3ea5
- (void)drawRect:(CGRect)rect;	// 0x2f6e3f49
// declared property getter: - (id)emojiString;	// 0x2f6e3ee9
// declared property setter: - (void)setEmojiString:(id)string;	// 0x2f6e3ef9
@end

