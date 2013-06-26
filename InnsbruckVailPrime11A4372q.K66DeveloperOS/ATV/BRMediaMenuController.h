/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "AppleTV-Structs.h"

@class BRControl, NSTimer, BRTextControl, NSString, BRFocusableImageControl, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRMediaMenuController : BRMenuController {
	BRControl *_previewControl;	// 144 = 0x90
	BRControl *_previewContainer;	// 148 = 0x94
	NSString *_previewControlItemHash;	// 152 = 0x98
	BRFocusableImageControl *_actionControl;	// 156 = 0x9c
	BRWaitSpinnerControl *_spinner;	// 160 = 0xa0
	float _controlDelay;	// 164 = 0xa4
	NSTimer *_controlDelayTimer;	// 168 = 0xa8
	BRTextControl *_noContentMessageControl;	// 172 = 0xac
}
@property(retain) id noContentMessage;	// G=0x2f66e5; S=0x2f65fd; converted property
@property(assign) BOOL showSpinner;	// G=0x2f5f71; S=0x2f5ec5; converted property
- (id)init;	// 0x2f5c55
- (void)_cleanupControlDelayTimer;	// 0x2f723d
- (void)_controlDelayTimerHandler:(id)handler;	// 0x2f7271
- (void)_playstateChanged;	// 0x2f7291
- (void)_scrollSelectionFinalized:(id)finalized;	// 0x2f718d
- (void)_scrollWillStart:(id)_scroll;	// 0x2f715d
- (void)_setDislaysActionControl:(BOOL)control;	// 0x2f6dfd
- (void)_updateActionControl;	// 0x2f7001
- (void)_updateControls;	// 0x2f6dcd
- (void)_updateControlsWithDelay;	// 0x2f719d
- (void)_updatePreview;	// 0x2f6b79
- (id)accessibilityScreenContent;	// 0x2f6a5d
- (id)actionItemAtIndex:(long)index;	// 0x2f65f9
- (id)actionSelectionHandlerForItemAtIndex:(long)index;	// 0x2f65f5
- (BOOL)allowUnplayedMark;	// 0x2f65a9
- (BOOL)brEventAction:(id)action;	// 0x2f6401
- (void)clearPreviewController;	// 0x2f6545
- (void)controlWasActivated;	// 0x2f6811
- (void)controlWasDeactivated;	// 0x2f6959
- (void)dealloc;	// 0x2f5de5
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x2f6315
- (void)layoutSubcontrols;	// 0x2f5f89
// converted property getter: - (id)noContentMessage;	// 0x2f66e5
- (id)previewControlForItem:(long)item;	// 0x2f6a7d
- (void)refreshControllerForModelUpdate;	// 0x2f671d
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x2f6761
- (void)resetPreviewController;	// 0x2f6505
// converted property setter: - (void)setNoContentMessage:(id)message;	// 0x2f65fd
// converted property setter: - (void)setShowSpinner:(BOOL)spinner;	// 0x2f5ec5
// converted property getter: - (BOOL)showSpinner;	// 0x2f5f71
- (void)updatePreviewController;	// 0x2f64f5
@end
