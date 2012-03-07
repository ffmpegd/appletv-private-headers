/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRReflectedImageControl, BRTextControl, BRDropShadowControl;
@protocol BRMediaAsset;

@interface BRDownloadPlayableAlertControl : BRControl {
@private
	BRDropShadowControl *_shadowControl;	// 48 = 0x30
	BRControl *_dialogBox;	// 52 = 0x34
	BRReflectedImageControl *_imageControl;	// 56 = 0x38
	BRTextControl *_titleControl;	// 60 = 0x3c
	BRTextControl *_clockStartWarningControl;	// 64 = 0x40
	BRTextControl *_directionsControl;	// 68 = 0x44
	id<BRMediaAsset> _asset;	// 72 = 0x48
	double _activationTime;	// 76 = 0x4c
}
+ (void)_imageLoadedOrErrored:(id)errored withImage:(id)image;	// 0x35df4299
+ (void)_imageNotAvailable:(id)available;	// 0x35df440d
+ (void)_imageUpdated:(id)updated;	// 0x35df4399
+ (void)_postPlayableAlertForAsset:(id)asset withAssetImage:(id)assetImage;	// 0x35df417d
+ (void)postPlayableAlertForAsset:(id)asset;	// 0x35df30b1
- (id)init;	// 0x35df320d
- (BOOL)_dialogShouldBePosted;	// 0x35df3c5d
- (BOOL)_isVideoPlayerControlActive;	// 0x35df3c19
- (void)_playAsset;	// 0x35df40cd
- (void)_postIfReady:(id)ready;	// 0x35df3ba5
- (void)_postWithControl:(id)control;	// 0x35df3cf1
- (void)_setAsset:(id)asset;	// 0x35df3de1
- (void)_setImage:(id)image;	// 0x35df40ad
- (id)accessibilityLabel;	// 0x35df3b3d
- (BOOL)brEventAction:(id)action;	// 0x35df36dd
- (void)controlWasActivated;	// 0x35df3615
- (void)dealloc;	// 0x35df3551
- (BOOL)isAccessibilityElement;	// 0x35df3b39
- (void)layoutSubcontrols;	// 0x35df3809
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35df3659
@end

