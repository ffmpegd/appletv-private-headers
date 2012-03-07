/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrintingMessageView : UIView {
@private
	UILabel *_title;	// 48 = 0x30
	UILabel *_message;	// 52 = 0x34
	UIImageView *_icon;	// 56 = 0x38
}
- (id)initInView:(id)view title:(id)title;	// 0x3039063d
- (void)dealloc;	// 0x30390a45
- (void)layoutSubviews;	// 0x30390ab9
- (void)setMessage:(id)message;	// 0x30390d5d
@end
