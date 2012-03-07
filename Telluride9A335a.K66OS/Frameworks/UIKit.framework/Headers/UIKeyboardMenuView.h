/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIView.h"

@class UITableView, NSTimer;

__attribute__((visibility("hidden")))
@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate> {
@private
	UITableView *m_table;	// 48 = 0x30
	UIView *m_shadowView;	// 52 = 0x34
	UIView *m_selExtraView;	// 56 = 0x38
	CGRect m_referenceRect;	// 60 = 0x3c
	float m_pointerOffset;	// 76 = 0x4c
	BOOL m_scrollable;	// 80 = 0x50
	BOOL m_scrolling;	// 81 = 0x51
	BOOL m_shouldFade;	// 82 = 0x52
	CGPoint m_point;	// 84 = 0x54
	double m_scrollStartTime;	// 92 = 0x5c
	int m_scrollDirection;	// 100 = 0x64
	NSTimer *m_scrollTimer;	// 104 = 0x68
	int m_visibleRows;	// 108 = 0x6c
	int m_firstVisibleRow;	// 112 = 0x70
	int m_mode;	// 116 = 0x74
	double dismissDelay;	// 120 = 0x78
	double _dismissDelay;	// 128 = 0x80
}
@property(assign) double dismissDelay;	// G=0x33d36ea5; S=0x33d36ed9; @synthesize=_dismissDelay
@property(readonly, assign, nonatomic) int mode;	// G=0x33d36e95; @synthesize=m_mode
- (id)initWithFrame:(CGRect)frame;	// 0x33d34fed
- (void)_delayedFade;	// 0x33d35c1d
- (void)applicationWillSuspend:(id)application;	// 0x33d352f9
- (void)autoscrollTimerFired:(id)fired;	// 0x33d36089
- (void)dealloc;	// 0x33d35255
- (int)defaultSelectedIndex;	// 0x33d36e69
- (void)didSelectItemAtIndex:(int)index;	// 0x33d36e91
// declared property getter: - (double)dismissDelay;	// 0x33d36ea5
- (void)endScrolling:(id)scrolling;	// 0x33d35f35
- (void)fade;	// 0x33d35d1d
- (void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished context:(void *)context;	// 0x33d35e39
- (void)fadeWithDelay:(double)delay;	// 0x33d35d65
- (id)font;	// 0x33d35309
- (void)hide;	// 0x33d35dd9
- (void)highlightRow:(int)row;	// 0x33d367a5
- (int)indexForIndexPath:(id)indexPath;	// 0x33d368fd
- (BOOL)isVisible;	// 0x33d35521
// declared property getter: - (int)mode;	// 0x33d36e95
- (int)numberOfItems;	// 0x33d36e65
- (CGSize)preferredSize;	// 0x33d36e6d
- (void)removeFromSuperview;	// 0x33d35d99
- (void)selectItemAtPoint:(CGPoint)point;	// 0x33d3688d
// declared property setter: - (void)setDismissDelay:(double)delay;	// 0x33d36ed9
- (void)setFrame:(CGRect)frame;	// 0x33d3532d
- (void)setNeedsDisplayForCell:(id)cell;	// 0x33d35e6d
- (void)setNeedsDisplayForTopBottomCells;	// 0x33d35eb1
- (void)show;	// 0x33d35541
- (void)showAsHUD;	// 0x33d35b29
- (void)showAsPopupFromRect:(CGRect)rect inView:(id)view;	// 0x33d35b81
- (void)stopAnyAutoscrolling;	// 0x33d35fe1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33d36921
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33d36c5d
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x33d36c55
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33d36911
- (id)titleForItemAtIndex:(int)index;	// 0x33d36e85
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33d36c91
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33d36e55
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33d36d71
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33d36d01
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x33d363c1
@end

