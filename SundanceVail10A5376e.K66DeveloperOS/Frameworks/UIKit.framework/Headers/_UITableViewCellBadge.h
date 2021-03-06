/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView {
	BOOL _isSelected;	// 84 = 0x54
	NSString *_text;	// 88 = 0x58
	CGSize _textSize;	// 92 = 0x5c
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x30674db5; S=0x30674da5; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x306750fd; S=0x3067510d; @synthesize=_isSelected
@property(copy, nonatomic) NSString *text;	// G=0x302fcbf5; S=0x30674d2d; @synthesize=_text
- (id)initWithFrame:(CGRect)frame;	// 0x302fcabd
- (void)_sizeToFit;	// 0x30674bcd
- (void)drawRect:(CGRect)rect;	// 0x30674df1
// converted property getter: - (BOOL)isHighlighted;	// 0x30674db5
// declared property getter: - (BOOL)isSelected;	// 0x306750fd
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30674da5
- (void)setIsSelected:(BOOL)selected;	// 0x30674dc5
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x3067510d
// declared property setter: - (void)setText:(id)text;	// 0x30674d2d
// declared property getter: - (id)text;	// 0x302fcbf5
@end

