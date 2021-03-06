/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSMutableArray, UIColor, UIImage;

@interface UIPageControl : UIControl {
	NSMutableArray *_indicators;	// 108 = 0x6c
	int _currentPage;	// 112 = 0x70
	int _displayedPage;	// 116 = 0x74
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pageControlFlags;	// 120 = 0x78
	UIImage *_currentPageImage;	// 124 = 0x7c
	UIImage *_pageImage;	// 128 = 0x80
	UIColor *_currentPageIndicatorTintColor;	// 132 = 0x84
	UIColor *_pageIndicatorTintColor;	// 136 = 0x88
}
@property(assign, nonatomic) int currentPage;	// G=0x32efbfb9; S=0x32efbf89; @dynamic
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor;	// G=0x32efca8d; S=0x32efbb39; @synthesize=_currentPageIndicatorTintColor
@property(assign, nonatomic) BOOL defersCurrentPageDisplay;	// G=0x32efc079; S=0x32efc049; @dynamic
@property(assign, nonatomic) BOOL hidesForSinglePage;	// G=0x32efc035; S=0x32efbfc9; @dynamic
@property(assign, nonatomic) int numberOfPages;	// G=0x32efbf69; S=0x32efbc71; @dynamic
@property(retain, nonatomic) UIColor *pageIndicatorTintColor;	// G=0x32efca9d; S=0x32efba01; @synthesize=_pageIndicatorTintColor
- (id)initWithCoder:(id)coder;	// 0x32efb4bd
- (id)initWithFrame:(CGRect)frame;	// 0x32efb45d
- (void)_commonPageControlInit;	// 0x32efb42d
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x32efc1f9
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x32efc1f5
- (int)_displayedPage;	// 0x32efcba5
- (id)_pageIndicatorCurrentImageForPage:(int)page;	// 0x32efbc4d
- (id)_pageIndicatorImageForPage:(int)page;	// 0x32efbc29
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32efb6d5
- (void)_setCurrentPage:(int)page;	// 0x32efcbb5
- (void)_setDisplayedPage:(int)page;	// 0x32efcaad
- (void)_updateCurrentPageDisplay;	// 0x32efcbf9
// declared property getter: - (int)currentPage;	// 0x32efbfb9
// declared property getter: - (id)currentPageIndicatorTintColor;	// 0x32efca8d
- (void)dealloc;	// 0x32efb8f9
// declared property getter: - (BOOL)defersCurrentPageDisplay;	// 0x32efc079
- (void)encodeWithCoder:(id)coder;	// 0x32efb7bd
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32efc5a1
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32efc711
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x32efc9f5
// declared property getter: - (BOOL)hidesForSinglePage;	// 0x32efc035
- (CGSize)intrinsicContentSize;	// 0x32efc1fd
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f272b5
- (void)layoutSubviews;	// 0x32efc349
// declared property getter: - (int)numberOfPages;	// 0x32efbf69
// declared property getter: - (id)pageIndicatorTintColor;	// 0x32efca9d
// declared property setter: - (void)setCurrentPage:(int)page;	// 0x32efbf89
// declared property setter: - (void)setCurrentPageIndicatorTintColor:(id)color;	// 0x32efbb39
// declared property setter: - (void)setDefersCurrentPageDisplay:(BOOL)display;	// 0x32efc049
// declared property setter: - (void)setHidesForSinglePage:(BOOL)singlePage;	// 0x32efbfc9
// declared property setter: - (void)setNumberOfPages:(int)pages;	// 0x32efbc71
// declared property setter: - (void)setPageIndicatorTintColor:(id)color;	// 0x32efba01
- (CGSize)sizeForNumberOfPages:(int)pages;	// 0x32efc8d9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32efc08d
- (void)updateCurrentPageDisplay;	// 0x32efc8b1
@end

