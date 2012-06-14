/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {
@private
	UIPrintPageRenderer *_printPageRenderer;	// 4 = 0x4
	float _maximumContentHeight;	// 8 = 0x8
	float _maximumContentWidth;	// 12 = 0xc
	UIEdgeInsets _contentInsets;	// 16 = 0x10
	int _startPage;	// 32 = 0x20
	int _pageCount;	// 36 = 0x24
	BOOL _needsRecalc;	// 40 = 0x28
}
@property(assign, nonatomic) UIEdgeInsets contentInsets;	// G=0x30374925; S=0x30374551; @synthesize=_contentInsets
@property(assign, nonatomic) float maximumContentHeight;	// G=0x30374905; S=0x30374515; @synthesize=_maximumContentHeight
@property(assign, nonatomic) float maximumContentWidth;	// G=0x30374915; S=0x303744d9; @synthesize=_maximumContentWidth
@property(readonly, assign, nonatomic) int pageCount;	// G=0x3037465d; @synthesize=_pageCount
@property(assign, nonatomic) UIPrintPageRenderer *printPageRenderer;	// G=0x303748f5; S=0x303745dd; @synthesize=_printPageRenderer
@property(assign, nonatomic) int startPage;	// G=0x30374949; S=0x30374959; @synthesize=_startPage
- (id)init;	// 0x303743d5
- (CGRect)_pageContentRect:(BOOL)rect;	// 0x30374689
- (void)_recalcIfNecessary;	// 0x3037461d
- (int)_recalcPageCount;	// 0x30374685
- (void)_setNeedsRecalc;	// 0x30374609
// declared property getter: - (UIEdgeInsets)contentInsets;	// 0x30374925
- (id)copyWithZone:(NSZone *)zone;	// 0x30374451
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x303748f1
// declared property getter: - (float)maximumContentHeight;	// 0x30374905
// declared property getter: - (float)maximumContentWidth;	// 0x30374915
// declared property getter: - (int)pageCount;	// 0x3037465d
// declared property getter: - (id)printPageRenderer;	// 0x303748f5
- (CGRect)rectForPageAtIndex:(int)index;	// 0x30374839
- (void)removeFromPrintPageRenderer;	// 0x30374489
// declared property setter: - (void)setContentInsets:(UIEdgeInsets)insets;	// 0x30374551
// declared property setter: - (void)setMaximumContentHeight:(float)height;	// 0x30374515
// declared property setter: - (void)setMaximumContentWidth:(float)width;	// 0x303744d9
// declared property setter: - (void)setPrintPageRenderer:(id)renderer;	// 0x303745dd
// declared property setter: - (void)setStartPage:(int)page;	// 0x30374959
// declared property getter: - (int)startPage;	// 0x30374949
@end
