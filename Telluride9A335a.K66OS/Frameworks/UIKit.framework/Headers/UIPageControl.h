/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class NSMutableArray;

@interface UIPageControl : UIControl {
@private
	NSMutableArray *_indicators;	// 72 = 0x48
	int _currentPage;	// 76 = 0x4c
	int _displayedPage;	// 80 = 0x50
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pageControlFlags;	// 84 = 0x54
}
@property(assign, nonatomic) int currentPage;	// G=0x33bd74e9; S=0x33bd74b9; @dynamic
@property(assign, nonatomic) BOOL defersCurrentPageDisplay;	// G=0x33bd75a1; S=0x33bd7575; @dynamic
@property(assign, nonatomic) BOOL hidesForSinglePage;	// G=0x33bd7561; S=0x33bd74f9; @dynamic
@property(assign, nonatomic) int numberOfPages;	// G=0x33bd7499; S=0x33bd71b5; @dynamic
- (id)initWithCoder:(id)coder;	// 0x33bd6e11
- (id)initWithFrame:(CGRect)frame;	// 0x33bd6db1
- (void)_commonPageControlInit;	// 0x33bd6d81
- (int)_displayedPage;	// 0x33bd7f4d
- (id)_pageIndicatorCurrentImageForPage:(int)page;	// 0x33bd71a5
- (id)_pageIndicatorImageForPage:(int)page;	// 0x33bd7195
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33bd6f95
- (void)_setCurrentPage:(int)page;	// 0x33bd7f5d
- (void)_setDisplayedPage:(int)page;	// 0x33bd7e5d
- (void)_updateCurrentPageDisplay;	// 0x33bd7fa1
// declared property getter: - (int)currentPage;	// 0x33bd74e9
- (void)dealloc;	// 0x33bd7149
// declared property getter: - (BOOL)defersCurrentPageDisplay;	// 0x33bd75a1
- (void)encodeWithCoder:(id)coder;	// 0x33bd7061
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x33bd7969
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33bd7b25
// declared property getter: - (BOOL)hidesForSinglePage;	// 0x33bd7561
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c06605
- (void)layoutSubviews;	// 0x33bd7709
// declared property getter: - (int)numberOfPages;	// 0x33bd7499
// declared property setter: - (void)setCurrentPage:(int)page;	// 0x33bd74b9
// declared property setter: - (void)setDefersCurrentPageDisplay:(BOOL)display;	// 0x33bd7575
// declared property setter: - (void)setHidesForSinglePage:(BOOL)singlePage;	// 0x33bd74f9
// declared property setter: - (void)setNumberOfPages:(int)pages;	// 0x33bd71b5
- (CGSize)sizeForNumberOfPages:(int)pages;	// 0x33bd7d4d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33bd75b5
- (void)updateCurrentPageDisplay;	// 0x33bd7d21
@end

