/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVRebootWaitController, ATVSWUpdateEngine;

__attribute__((visibility("hidden")))
@interface ATVSWUpdateDirector : BRSingleton {
	ATVSWUpdateEngine *_engine;	// 4 = 0x4
	ATVRebootWaitController *_dialog;	// 8 = 0x8
	BOOL _airPlayEnabledBeforeUpdate;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x253b99
+ (id)singleton;	// 0x253b89
- (id)init;	// 0x253bbd
- (void).cxx_destruct;	// 0x254449
- (id)_errorWithTextForError:(id)error;	// 0x2556b9
- (void)_playbackInitiated:(id)initiated;	// 0x255381
- (id)_readMAAssetServerURL;	// 0x255ca5
- (BOOL)_setAdvancedOptions;	// 0x256d09
- (BOOL)_setAppleConnectID;	// 0x2564bd
- (BOOL)_setAssetServerURL;	// 0x255de5
- (BOOL)_setPersonalizationServerURL;	// 0x2560e1
- (void)_setStep2ImagePath;	// 0x255069
- (void)_showDownloadAndApplyConfirmationDialog:(BOOL)dialog;	// 0x255451
- (void)_showNoUpdatesDialog:(BOOL)dialog;	// 0x2555b1
- (void)_stopBackgroundProcessing:(id)processing;	// 0x2553e9
- (void)_updateAppleSucceeded:(id)succeeded;	// 0x2552d9
- (void)_updateApplyFailed:(id)failed;	// 0x2550d1
- (void)_updateApplyStarted:(id)started;	// 0x254de9
- (void)_updateCheckFinished:(id)finished;	// 0x25447d
- (void)_updateDownloadFinished:(id)finished;	// 0x254795
- (void)_writeMAAssetServerURL:(id)url;	// 0x255d09
- (void)cancelUpdates;	// 0x2543d5
- (void)dealloc;	// 0x253e29
- (BOOL)isUpdateCheckInProgress;	// 0x254401
- (BOOL)isUpdateDownloadInProgress;	// 0x254425
- (void)startAutomaticUpdateCheck;	// 0x254351
- (void)startDownloadAndApply;	// 0x2543a9
- (void)startManualUpdateCheck:(BOOL)check;	// 0x253e95
- (void)startRestore;	// 0x25437d
@end

