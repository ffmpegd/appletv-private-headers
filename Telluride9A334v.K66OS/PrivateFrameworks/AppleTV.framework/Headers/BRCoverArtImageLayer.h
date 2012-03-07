/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRImageControl.h"

@class NSTimer;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRCoverArtImageLayer : BRImageControl {
@private
	id<BRImageProxy> _imageProxy;	// 64 = 0x40
	BOOL _deletterboxImage;	// 68 = 0x44
	BOOL _showsDefaultCoverArt;	// 69 = 0x45
	BOOL _showsBorder;	// 70 = 0x46
	NSTimer *_setCoverArtTimer;	// 72 = 0x48
}
@property(assign) BOOL deletterboxImage;	// G=0x3327a3f1; S=0x3327a3c1; converted property
@property(assign) BOOL showsBorder;	// G=0x3327a4c1; S=0x3327a421; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x3327a411; S=0x3327a401; converted property
- (id)init;	// 0x3327a229
- (void)_coverArtChanged:(id)changed;	// 0x3327a779
- (void)_setCoverArtImage:(id)image;	// 0x3327a64d
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x3327a5f1
- (void)_updateCoverArt;	// 0x3327a4d1
- (void)dealloc;	// 0x3327a2f1
// converted property getter: - (BOOL)deletterboxImage;	// 0x3327a3f1
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x3327a3c1
- (void)setImageProxy:(id)proxy;	// 0x3327a36d
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x3327a421
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x3327a401
// converted property getter: - (BOOL)showsBorder;	// 0x3327a4c1
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x3327a411
@end

