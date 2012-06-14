/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSecureResource.h"
#import "BRController.h"

@class BRWaitPromptControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreAcquisitionController : BRController <BRSecureResource> {
@private
	NSDictionary *_offer;	// 84 = 0x54
	BRWaitPromptControl *_waitPrompt;	// 88 = 0x58
}
- (id)initWithOffer:(id)offer;	// 0x365db975
- (void)_acquire;	// 0x365dbd05
- (void)_acquisitionFailed:(id)failed;	// 0x365dc01d
- (BOOL)_attemptPlaybackInsteadOfAcquistion;	// 0x365dc27d
- (void)_dismiss:(id)dismiss;	// 0x365dc1a1
- (void)_enablePrompt:(id)prompt;	// 0x365dbf15
- (void)_purchaseAcquired:(id)acquired;	// 0x365dc009
- (void)_rentalAcquired:(id)acquired;	// 0x365dbf65
- (void)_startPlaybackForForAcquisition:(id)acquisition;	// 0x365dc219
- (void)controlWasActivated;	// 0x365dbc5d
- (void)controlWasDeactivated;	// 0x365dbcb1
- (void)dealloc;	// 0x365dbb59
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x365dbbd5
@end
