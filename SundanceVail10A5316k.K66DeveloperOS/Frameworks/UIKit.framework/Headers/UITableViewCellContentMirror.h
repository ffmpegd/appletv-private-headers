/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellContentMirror : UIView {
@private
	unsigned _selected : 1;	// 84 = 0x54
}
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x30301ac9; S=0x301a3fb9; 
- (id)initWithFrame:(CGRect)frame;	// 0x301a3f25
- (id)cell;	// 0x301a587d
- (void)drawRect:(CGRect)rect;	// 0x301a5829
// declared property getter: - (BOOL)isSelected;	// 0x30301ac9
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x301a3fb9
@end

