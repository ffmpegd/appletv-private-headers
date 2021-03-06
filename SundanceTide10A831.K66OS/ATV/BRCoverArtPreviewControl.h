/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, NSArray, NSMutableArray, BRMediaType;

__attribute__((visibility("hidden")))
@interface BRCoverArtPreviewControl : BRControl {
	NSArray *_imageProxies;	// 84 = 0x54
	NSMutableArray *_availableImages;	// 88 = 0x58
	BRMediaType *_mediaType;	// 92 = 0x5c
	NSTimer *_crossfadeTimer;	// 96 = 0x60
	long _imageIndex;	// 100 = 0x64
	float _rotation;	// 104 = 0x68
	BOOL _artworkNeedsDeletterboxing;	// 108 = 0x6c
	BOOL _actionAdded;	// 109 = 0x6d
	BOOL _onlyDefaultsAvailable;	// 110 = 0x6e
	BOOL _controlWasDeactivated;	// 111 = 0x6f
}
@property(retain) NSArray *imageProxies;	// G=0x2c3701; S=0x2c3361; converted property
- (id)init;	// 0x2c2f41
- (void)_cleanupTimer;	// 0x2c3e01
- (void)_crossFadeToNextImage:(id)nextImage;	// 0x2c3ca9
- (void)_imageUnavailable:(id)unavailable;	// 0x2c4115
- (void)_loadImage:(id)image;	// 0x2c39f9
- (void)_scheduleTimerOnMainThread;	// 0x2c3e45
- (void)_updateCoverArt:(id)art;	// 0x2c3eb5
- (void)controlWasActivated;	// 0x2c374d
- (void)controlWasDeactivated;	// 0x2c38e5
- (void)dealloc;	// 0x2c3055
// converted property getter: - (id)imageProxies;	// 0x2c3701
- (void)layoutSubcontrols;	// 0x2c30f9
- (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x2c39d5
// converted property setter: - (void)setImageProxies:(id)proxies;	// 0x2c3361
- (void)setImageProxies:(id)proxies immedateLoad:(BOOL)load;	// 0x2c3375
- (void)setImageProxy:(id)proxy;	// 0x2c3321
- (void)setMissingAssetType:(id)type;	// 0x2c3711
- (void)setRotation:(float)rotation;	// 0x2c39e5
@end

