/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "BRController.h"

@class NSDictionary, BRWaitPromptControl;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreAcquisitionController : BRController <BRSecureResource> {
	NSDictionary *_offer;	// 100 = 0x64
	BRWaitPromptControl *_waitPrompt;	// 104 = 0x68
}
- (id)initWithOffer:(id)offer;	// 0x1dae71
- (void)_acquire;	// 0x1db261
- (void)_acquisitionFailed:(id)failed;	// 0x1db579
- (BOOL)_attemptPlaybackInsteadOfAcquistion;	// 0x1db8ed
- (void)_dismiss:(id)dismiss;	// 0x1db721
- (void)_dismissAfterPlayerIsPushed;	// 0x1db79d
- (void)_enablePrompt:(id)prompt;	// 0x1db475
- (void)_mediaPlayerControllerPushed:(id)pushed;	// 0x1db815
- (void)_purchaseAcquired:(id)acquired;	// 0x1db565
- (void)_rentalAcquired:(id)acquired;	// 0x1db4c9
- (void)_startPlaybackForForAcquisition:(id)acquisition;	// 0x1db871
- (void)dealloc;	// 0x1db069
- (id)secureResourceAuthenticator;	// 0x1db0e5
- (void)wasPopped;	// 0x1db205
- (void)wasPushed;	// 0x1db1d5
@end

