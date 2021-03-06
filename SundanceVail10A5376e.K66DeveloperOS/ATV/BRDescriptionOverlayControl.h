/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, BRMediaPlayer, NSAttributedString, NSString, BRImage;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRDescriptionOverlayControl : BRControl {
	BRControl *_customOverlay;	// 84 = 0x54
	CGColorRef _fillColor;	// 88 = 0x58
	BRMediaPlayer *_player;	// 92 = 0x5c
	id<BRMediaAsset> _asset;	// 96 = 0x60
	NSString *_imageID;	// 100 = 0x64
	BRImage *_image;	// 104 = 0x68
	BRImage *_ratingImage;	// 108 = 0x6c
	NSAttributedString *_title;	// 112 = 0x70
	NSAttributedString *_publisher;	// 116 = 0x74
	NSAttributedString *_description;	// 120 = 0x78
	NSAttributedString *_pressAndHoldDescription;	// 124 = 0x7c
	BOOL _showPressAndHoldDescription;	// 128 = 0x80
	NSTimer *_fadeTimer;	// 132 = 0x84
}
- (id)init;	// 0x2b6341
- (void)_fadeOverlay:(id)overlay;	// 0x2b7d19
- (void)_hideOverlay;	// 0x2b7c3d
- (void)_imageUpdated:(id)updated;	// 0x2b7b51
- (id)_pressAndHoldDescriptionAttributes;	// 0x2b7a6d
- (BOOL)_pressAndHoldOptionAvailable;	// 0x2b7a8d
- (void)_setImage:(id)image;	// 0x2b7a1d
- (void)_showOverlay;	// 0x2b7cb5
- (void)_showOverlayWithTimeout:(float)timeout;	// 0x2b747d
- (void)_updateCurrentMediaInfo;	// 0x2b7519
- (id)accessibilityLabel;	// 0x2b73cd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2b7e41
- (void)dealloc;	// 0x2b63e5
- (void)drawRect:(CGRect)rect;	// 0x2b6849
- (BOOL)hasContent;	// 0x2b65c5
- (void)hideOverlay;	// 0x2b6639
- (BOOL)isAccessibilityElement;	// 0x2b7479
- (void)layoutSubcontrols;	// 0x2b675d
- (void)setAsset:(id)asset;	// 0x2b6565
- (void)setPlayer:(id)player;	// 0x2b6529
- (void)showOverlayWithLongTimeout;	// 0x2b6649
- (void)showOverlayWithLongTimeoutFromTouchRemote;	// 0x2b6701
- (void)showOverlayWithShortTimeout;	// 0x2b66a5
@end

