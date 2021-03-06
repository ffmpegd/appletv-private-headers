/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRReflectedImageControl, BRDropShadowControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRDownloadPlayableAlertControl : BRControl {
	BRDropShadowControl *_shadowControl;	// 84 = 0x54
	BRControl *_dialogBox;	// 88 = 0x58
	BRReflectedImageControl *_imageControl;	// 92 = 0x5c
	BRTextControl *_titleControl;	// 96 = 0x60
	BRTextControl *_clockStartWarningControl;	// 100 = 0x64
	BRTextControl *_directionsControl;	// 104 = 0x68
	id<BRMediaAsset> _asset;	// 108 = 0x6c
	double _activationTime;	// 112 = 0x70
}
+ (void)_imageLoadedOrErrored:(id)errored withImage:(id)image;	// 0x2dad6d
+ (void)_imageNotAvailable:(id)available;	// 0x2daeed
+ (void)_imageUpdated:(id)updated;	// 0x2dae75
+ (void)_postPlayableAlertForAsset:(id)asset withAssetImage:(id)assetImage;	// 0x2dac49
+ (void)postPlayableAlertForAsset:(id)asset;	// 0x2d9b79
- (id)init;	// 0x2d9cf1
- (BOOL)_dialogShouldBePosted;	// 0x2da741
- (BOOL)_isVideoPlayerControlActive;	// 0x2da6fd
- (void)_playAsset;	// 0x2dab99
- (void)_postIfReady:(id)ready;	// 0x2da615
- (void)_postWithControl:(id)control;	// 0x2da7d5
- (void)_setAsset:(id)asset;	// 0x2da8c5
- (void)_setImage:(id)image;	// 0x2dab79
- (id)accessibilityLabel;	// 0x2da5ad
- (BOOL)brEventAction:(id)action;	// 0x2da19d
- (void)controlWasActivated;	// 0x2da0d5
- (void)dealloc;	// 0x2da00d
- (BOOL)isAccessibilityElement;	// 0x2da5a9
- (void)layoutSubcontrols;	// 0x2da285
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2da119
@end

