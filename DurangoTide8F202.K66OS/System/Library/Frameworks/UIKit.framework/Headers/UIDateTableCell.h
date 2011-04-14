/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageAndTextTableCell.h"


__attribute__((visibility("hidden")))
@interface UIDateTableCell : UIImageAndTextTableCell {
@private
	float _horizontalOffset;	// 68 = 0x44
	float _verticalOffset;	// 72 = 0x48
}
- (id)initWithFrame:(CGRect)frame;	// 0x30653b6d
- (CGRect)contentBounds;	// 0x30656dd9
- (void)layoutSubviews;	// 0x306567bd
- (void)setHorizontalOffset:(float)offset;	// 0x306e4a0d
- (void)setVerticalOffset:(float)offset;	// 0x30654989
- (id)shadowColor;	// 0x30653ead
@end
