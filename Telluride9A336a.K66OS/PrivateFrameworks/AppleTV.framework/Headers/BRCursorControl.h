/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHorizontalSegmentedWidget, NSTimer, BRCursorLayer;

@interface BRCursorControl : BRControl {
@private
	BRControl *_trackedControl;	// 48 = 0x30
	BRControl *_previousTrackedControl;	// 52 = 0x34
	BRCursorLayer *_cursorLayer;	// 56 = 0x38
	int _style;	// 60 = 0x3c
	BOOL _cursorInactive;	// 64 = 0x40
	BRHorizontalSegmentedWidget *_previousBadge;	// 68 = 0x44
	BRHorizontalSegmentedWidget *_badge;	// 72 = 0x48
	NSTimer *_removePreviousBadgeTimer;	// 76 = 0x4c
	BOOL _cursorTrackingDisabledWhenAvoidsCursor;	// 80 = 0x50
}
@property(assign) BOOL cursorInactive;	// G=0x33a7ca99; S=0x33a7c9dd; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x33a7caa9; converted property
@property(assign) int cursorStyle;	// G=0x33a7c9cd; S=0x33a7c909; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x33a7cc89; S=0x33a7cc99; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x33a7c699
- (void)_addCursor;	// 0x33a7cca9
- (void)_cursorFrameChanged:(id)changed;	// 0x33a7d639
- (void)_focusChanged:(id)changed;	// 0x33a7d6a9
- (void)_removeCursor;	// 0x33a7cd99
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x33a7db29
- (void)_removePreviousTrackedControl;	// 0x33a7db89
- (void)_trackFocusedControl:(id)control;	// 0x33a7d401
- (void)_trackedBadgeUpdated:(id)updated;	// 0x33a7d649
- (void)_updateBadgeForTrackedControl;	// 0x33a7daf9
- (void)_updateCursorPositioning;	// 0x33a7ce0d
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x33a7d72d
- (void)_updatePreviousBadge;	// 0x33a7dac9
- (void)controlWasActivated;	// 0x33a7cab9
// converted property getter: - (BOOL)cursorInactive;	// 0x33a7ca99
// converted property getter: - (id)cursorLayer;	// 0x33a7caa9
// converted property getter: - (int)cursorStyle;	// 0x33a7c9cd
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x33a7cc89
- (void)dealloc;	// 0x33a7c7a5
- (void)layoutSubcontrols;	// 0x33a7cafd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33a7cb0d
- (id)preferredActionForKey:(id)key;	// 0x33a7cbb1
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x33a7c9dd
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x33a7c909
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x33a7cc99
- (void)setOpacity:(float)opacity;	// 0x33a7d295
@end

