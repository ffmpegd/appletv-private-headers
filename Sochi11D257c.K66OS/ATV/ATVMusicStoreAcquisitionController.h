/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "ATVVideoCacheManagerDelegate.h"
#import "BRController.h"

@class BRWaitPromptControl, NSDictionary, BRMediaPlayerWaitControl;
@protocol ATVMusicStoreAcquisitionControllerDelegate;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreAcquisitionController : BRController <ATVVideoCacheManagerDelegate, BRSecureResource> {
	BOOL _initiatePlaybackOnCompletion;	// 100 = 0x64
	BOOL _shouldRemovePlayerOnPop;	// 101 = 0x65
	id<ATVMusicStoreAcquisitionControllerDelegate> _delegate;	// 104 = 0x68
	NSDictionary *_offer;	// 108 = 0x6c
	BRMediaPlayerWaitControl *_loadingControl;	// 112 = 0x70
	BRWaitPromptControl *_waitPrompt;	// 116 = 0x74
}
@property(assign, nonatomic) __weak id<ATVMusicStoreAcquisitionControllerDelegate> delegate;	// G=0x1e6ed5; S=0x1e6ef5; @synthesize=_delegate
@property(assign, nonatomic) BOOL initiatePlaybackOnCompletion;	// G=0x1e6fb1; S=0x1e6fc1; @synthesize=_initiatePlaybackOnCompletion
@property(retain, nonatomic) BRMediaPlayerWaitControl *loadingControl;	// G=0x1e6f41; S=0x1e6f51; @synthesize=_loadingControl
@property(retain, nonatomic) NSDictionary *offer;	// G=0x1e6f09; S=0x1e6f19; @synthesize=_offer
@property(assign, nonatomic) BOOL shouldRemovePlayerOnPop;	// G=0x1e6fd1; S=0x1e6fe1; @synthesize=_shouldRemovePlayerOnPop
@property(retain, nonatomic) BRWaitPromptControl *waitPrompt;	// G=0x1e6f79; S=0x1e6f89; @synthesize=_waitPrompt
+ (void)_acquireWithOffer:(id)offer initiatePlaybackOnCompletion:(BOOL)completion;	// 0x1e499d
- (id)initWithOffer:(id)offer;	// 0x1e54ad
- (id)initWithOffer:(id)offer initiatePlaybackOnCompletion:(BOOL)completion;	// 0x1e54c1
- (void).cxx_destruct;	// 0x1e6ff1
- (void)_acquire;	// 0x1e5b55
- (void)_acquisitionFailed:(id)failed;	// 0x1e6021
- (BOOL)_attemptPlaybackInsteadOfAcquistion;	// 0x1e64c5
- (void)_attemptPlaybackOfPurchase:(id)purchase ignoreParentalControlSettings:(BOOL)settings;	// 0x1e6771
- (void)_dismiss:(id)dismiss;	// 0x1e6249
- (void)_dismissAfterPlayerIsActivated;	// 0x1e6321
- (void)_enablePrompt:(id)prompt;	// 0x1e5da1
- (void)_mediaPlayerControllerActivated:(id)activated;	// 0x1e63dd
- (void)_presentExtrasForStoreItem:(id)storeItem;	// 0x1e68a1
- (void)_presentMediaAsset:(id)asset options:(id)options;	// 0x1e6d79
- (void)_purchaseAcquired:(id)acquired;	// 0x1e5ee1
- (void)_redownloadAcquired:(id)acquired;	// 0x1e646d
- (void)_rentalAcquired:(id)acquired;	// 0x1e5e25
- (void)dealloc;	// 0x1e57cd
// declared property getter: - (id)delegate;	// 0x1e6ed5
- (BOOL)handleAssetFailedToLoad:(id)load;	// 0x1e5b51
- (BOOL)handleAssetReadyToPlay:(id)play;	// 0x1e5b4d
// declared property getter: - (BOOL)initiatePlaybackOnCompletion;	// 0x1e6fb1
// declared property getter: - (id)loadingControl;	// 0x1e6f41
// declared property getter: - (id)offer;	// 0x1e6f09
- (id)secureResourceAuthenticator;	// 0x1e5839
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1e6ef5
// declared property setter: - (void)setInitiatePlaybackOnCompletion:(BOOL)completion;	// 0x1e6fc1
// declared property setter: - (void)setLoadingControl:(id)control;	// 0x1e6f51
// declared property setter: - (void)setOffer:(id)offer;	// 0x1e6f19
// declared property setter: - (void)setShouldRemovePlayerOnPop:(BOOL)removePlayerOnPop;	// 0x1e6fe1
// declared property setter: - (void)setWaitPrompt:(id)prompt;	// 0x1e6f89
// declared property getter: - (BOOL)shouldRemovePlayerOnPop;	// 0x1e6fd1
// declared property getter: - (id)waitPrompt;	// 0x1e6f79
- (void)wasPopped;	// 0x1e59a9
- (void)wasPushed;	// 0x1e5955
@end

