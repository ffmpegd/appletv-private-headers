/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRReflectionControl, BRMetadataLongDescriptionControl, NSTimer, BRCoverArtImageLayer;
@protocol BRMetadataProvider;

@interface BRMetadataLongDescriptionPreviewControl : BRControl {
@private
	id _asset;	// 48 = 0x30
	id<BRMetadataProvider> _metadataProvider;	// 52 = 0x34
	BRControl *_coverArtWrapper;	// 56 = 0x38
	BRCoverArtImageLayer *_coverArtLayer;	// 60 = 0x3c
	BRReflectionControl *_reflectionLayer;	// 64 = 0x40
	BRMetadataLongDescriptionControl *_metadataLayer;	// 68 = 0x44
	NSTimer *_timer;	// 72 = 0x48
	BOOL _showsMetadataImmediately;	// 76 = 0x4c
	BOOL _showingMetadata;	// 77 = 0x4d
}
@property(retain) id asset;	// G=0x35e1721d; S=0x35e17035; converted property
@property(assign) BOOL deletterboxAssetArtwork;	// G=0x35e1728d; S=0x35e1726d; converted property
@property(assign) BOOL showsDefaultCoverArt;	// G=0x35e172d1; S=0x35e172b1; converted property
@property(assign) BOOL showsMetadataImmediately;	// G=0x35e1725d; S=0x35e1722d; converted property
- (id)init;	// 0x35e16851
- (void)_coverArtChanged:(id)changed;	// 0x35e17609
- (void)_downloadStateChanged:(id)changed;	// 0x35e17685
- (CGRect)_frameForArt:(id)art inBounds:(CGSize)bounds;	// 0x35e176c5
- (CGRect)_metadataFrameForBounds:(CGSize)bounds;	// 0x35e17781
- (void)_metadataTimerFired:(id)fired;	// 0x35e17665
- (float)_reflectionAmountForArtFrame:(CGRect)artFrame bottomCutoff:(float)cutoff;	// 0x35e17791
- (void)_showMetadataAfterDelay;	// 0x35e17415
- (void)_updateMetadataLayer;	// 0x35e174b5
- (id)accessibilityLabel;	// 0x35e17399
- (id)accessibilityScreenContent;	// 0x35e177dd
// converted property getter: - (id)asset;	// 0x35e1721d
- (void)controlWasActivated;	// 0x35e17305
- (void)controlWasDeactivated;	// 0x35e17345
- (void)dealloc;	// 0x35e16b71
// converted property getter: - (BOOL)deletterboxAssetArtwork;	// 0x35e1728d
- (void)layoutSubcontrols;	// 0x35e16c51
- (id)metadataControl;	// 0x35e172f5
// converted property setter: - (void)setAsset:(id)asset;	// 0x35e17035
// converted property setter: - (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x35e1726d
- (void)setImageProxy:(id)proxy;	// 0x35e16f69
- (void)setMetadataProvider:(id)provider;	// 0x35e16fc9
// converted property setter: - (void)setShowsDefaultCoverArt:(BOOL)art;	// 0x35e172b1
// converted property setter: - (void)setShowsMetadataImmediately:(BOOL)immediately;	// 0x35e1722d
// converted property getter: - (BOOL)showsDefaultCoverArt;	// 0x35e172d1
// converted property getter: - (BOOL)showsMetadataImmediately;	// 0x35e1725d
@end

