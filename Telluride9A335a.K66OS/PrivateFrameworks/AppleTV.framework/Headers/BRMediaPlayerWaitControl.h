/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDescriptionOverlayControl, BRTextControl, BRTransportControl, BRWaitSpinnerControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerWaitControl : BRControl {
@private
	id<BRMediaAsset> _asset;	// 48 = 0x30
	BRDescriptionOverlayControl *_descriptionControl;	// 52 = 0x34
	BRTextControl *_loadingControl;	// 56 = 0x38
	BRWaitSpinnerControl *_loadingSpinner;	// 60 = 0x3c
	BRTextControl *_readyToPlayInNMinsControl;	// 64 = 0x40
	BRWaitSpinnerControl *_readyToPlayInNMinsSpinner;	// 68 = 0x44
	BRTextControl *_readyToPlayControl;	// 72 = 0x48
	BRTextControl *_authorizingControl;	// 76 = 0x4c
	BRWaitSpinnerControl *_authorizingSpinner;	// 80 = 0x50
	BRTransportControl *_transport;	// 84 = 0x54
}
- (id)initWithAsset:(id)asset;	// 0x341ca7fd
- (void)_addFadeAnimationToControl:(id)control;	// 0x341cb6fd
- (void)dealloc;	// 0x341cace5
- (void)layoutSubcontrols;	// 0x341cb1e9
- (void)setAuthorizing;	// 0x341cb12d
- (void)setReadyForPlayInNMins:(int)nmins;	// 0x341cade5
- (void)setReadyToPlay;	// 0x341cb09d
@end

