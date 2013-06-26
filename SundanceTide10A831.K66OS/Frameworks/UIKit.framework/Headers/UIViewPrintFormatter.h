/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPrintFormatter.h"
#import "UIKit-Structs.h"

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {
	UIView *_view;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) UIView *view;	// G=0x31f40079; @synthesize=_view
- (id)_initWithView:(id)view;	// 0x31f3fc89
- (int)_recalcPageCount;	// 0x31f3fd7d
- (id)copyWithZone:(NSZone *)zone;	// 0x31f3fcdd
- (void)dealloc;	// 0x31f3fd31
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x31f3ff65
- (CGRect)rectForPageAtIndex:(int)index;	// 0x31f3fe59
// declared property getter: - (id)view;	// 0x31f40079
@end
