/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRControl, NSTimer, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface LTAirPlayPresentationController : BRController {
	BRControl *_presentationControl;	// 100 = 0x64
	BRWaitPromptControl *_waitPrompt;	// 104 = 0x68
	int _stopCount;	// 108 = 0x6c
	double _savedAutoPresentTimeout;	// 112 = 0x70
	NSTimer *_backgroundTaskHoldoffTimer;	// 120 = 0x78
	BOOL _suspended;	// 124 = 0x7c
}
- (id)init;	// 0x71c31
- (void).cxx_destruct;	// 0x723a5
- (void)_backgroundTaskHoldoffTimer:(id)timer;	// 0x72389
- (BOOL)brEventAction:(id)action;	// 0x72089
- (void)controlWasActivated;	// 0x71d69
- (void)controlWasDeactivated;	// 0x71ee9
- (void)dealloc;	// 0x71cd1
- (void)hideProgress;	// 0x72329
- (id)presentationLayer;	// 0x72221
- (void)resume;	// 0x72375
- (void)showProgress;	// 0x72291
- (void)stopPresentation;	// 0x72241
- (void)suspend;	// 0x72361
- (void)wasPopped;	// 0x72039
@end
