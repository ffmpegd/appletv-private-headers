/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIHighlightView, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface UIWebPDFLabelView : UIView {
@private
	UILabel *_label;	// 48 = 0x30
	UIHighlightView *_highlight;	// 52 = 0x34
	NSTimer *_timer;	// 56 = 0x38
	unsigned currentPageIndex;	// 60 = 0x3c
}
@property(assign, nonatomic) unsigned currentPageIndex;	// G=0x3327b10d; S=0x3327b11d; @synthesize
@property(readonly, assign, nonatomic, getter=isTimerInstalled) BOOL timerInstalled;	// G=0x3327ade9; 
- (id)initWithFrame:(CGRect)frame;	// 0x3327a9bd
- (void)_fadeOutAnimationDidStop:(id)_fadeOutAnimation finished:(id)finished;	// 0x3327aff5
- (double)_fadeOutDelay;	// 0x3327ae01
- (double)_fadeOutDuration;	// 0x3327ae0d
- (void)clearTimer;	// 0x3327abe9
// declared property getter: - (unsigned)currentPageIndex;	// 0x3327b10d
- (void)dealloc;	// 0x3327ac29
- (void)fadeOut;	// 0x3327b025
// declared property getter: - (BOOL)isTimerInstalled;	// 0x3327ade9
// declared property setter: - (void)setCurrentPageIndex:(unsigned)index;	// 0x3327b11d
- (void)setText:(id)text;	// 0x3327adad
- (void)showNowInSuperView:(id)superView atOrigin:(CGPoint)origin withText:(id)text animated:(BOOL)animated;	// 0x3327ae19
- (void)sizeToFit;	// 0x3327ac9d
@end
