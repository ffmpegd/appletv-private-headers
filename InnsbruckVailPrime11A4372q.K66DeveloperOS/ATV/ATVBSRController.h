/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class BRDisplayMode, NSTimer, NSString, CADisplay, ATVBSRLayer, NSArray;

__attribute__((visibility("hidden")))
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider> {
	id _completionBlock;	// 144 = 0x90
	ATVBSRLayer *_bsrControl;	// 148 = 0x94
	int _selectionKind;	// 152 = 0x98
	BRDisplayMode *_originalMode;	// 156 = 0x9c
	BRDisplayMode *_failedMode;	// 160 = 0xa0
	BOOL _originalModeWasAuto;	// 164 = 0xa4
	CADisplay *_mainDisplay;	// 168 = 0xa8
	NSString *_mainDisplayUniqueID;	// 172 = 0xac
	NSArray *_listOfResolutionsToTry;	// 176 = 0xb0
	NSTimer *_modeTimer;	// 180 = 0xb4
	int _secondsLeftBeforeNextDisplayMode;	// 184 = 0xb8
	int _attemptedModeNumber;	// 188 = 0xbc
	int _numberOfBSRAttempts;	// 192 = 0xc0
	BOOL _isBSRController;	// 196 = 0xc4
	int _result;	// 200 = 0xc8
}
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0x1017a5
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0x101829
- (id)init;	// 0x101881
- (void)_availableModesChanged;	// 0x102ca5
- (id)_countdownString;	// 0x102769
- (BOOL)_executeDisplayChangeEvent;	// 0x102831
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0x1021c5
- (id)_nextModeToTry;	// 0x10265d
- (void)_playResolutionSwitchFailedSound;	// 0x102c21
- (void)_restoreOriginalModeAndPopController;	// 0x102b41
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0x102511
- (void)_timerCallback:(id)callback;	// 0x1027cd
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0x102485
- (BOOL)brEventAction:(id)action;	// 0x101cd5
- (void)dealloc;	// 0x101889
- (float)heightForRow:(long)row;	// 0x10204d
- (long)itemCount;	// 0x102011
- (id)itemForRow:(long)row;	// 0x101f35
- (void)itemSelected:(long)selected;	// 0x101d75
- (void)layoutSubcontrols;	// 0x101965
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x102055
- (BOOL)rowSelectable:(long)selectable;	// 0x102051
- (id)titleForRow:(long)row;	// 0x101e61
- (void)wasPopped;	// 0x101c11
- (void)wasPushed;	// 0x101a7d
@end
