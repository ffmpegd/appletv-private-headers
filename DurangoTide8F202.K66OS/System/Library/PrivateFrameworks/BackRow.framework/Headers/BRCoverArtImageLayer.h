/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRImageControl.h"

@class NSTimer;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRCoverArtImageLayer : BRImageControl {
@private
	id<BRImageProxy> _imageProxy;	// 68 = 0x44
	BOOL _deletterboxImage;	// 72 = 0x48
	BOOL _showsDefaultCoverArt;	// 73 = 0x49
	BOOL _showsBorder;	// 74 = 0x4a
	NSTimer *_setCoverArtTimer;	// 76 = 0x4c
}
@property(assign) BOOL deletterboxImage;	// G=0x3293538d; S=0x3293541d; converted property
@property(assign) BOOL showsBorder;	// G=0x329353bd; S=0x3293548d; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x329353ad; S=0x3293539d; converted property
- (id)init;	// 0x328c4209
- (void)_coverArtChanged:(id)changed;	// 0x328c7a51
- (void)_setCoverArtImage:(id)image;	// 0x328c4565
- (void)_setCoverArtImageWithDelay:(id)delay;	// 0x329353cd
- (void)_updateCoverArt;	// 0x328c4451
- (void)dealloc;	// 0x328c4af9
// converted property getter: - (BOOL)deletterboxImage;	// 0x3293538d
// converted property setter: - (void)setDeletterboxImage:(BOOL)image;	// 0x3293541d
- (void)setImageProxy:(id)proxy;	// 0x32935445
// converted property setter: - (void)setShowsBorder:(BOOL)border;	// 0x3293548d
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x3293539d
// converted property getter: - (BOOL)showsBorder;	// 0x329353bd
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x329353ad
@end

