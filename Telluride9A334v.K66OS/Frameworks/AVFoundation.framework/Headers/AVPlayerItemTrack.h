/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {
@private
	AVPlayerItemTrackInternal *_playerItemTrack;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAssetTrack *assetTrack;	// G=0x35452385; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x3545272d; S=0x354526ad; 
+ (id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x35452421
- (void)_addLayer:(id)layer;	// 0x35452355
- (id)_audioVolumeCurve;	// 0x354525ed
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x35452311
- (id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x35452a2d
- (id)_playerItem;	// 0x35452359
- (void)_removeLayer:(id)layer;	// 0x35452351
- (void)_setAudioVolumeCurve:(id)curve;	// 0x35452479
// declared property getter: - (id)assetTrack;	// 0x35452385
- (void)dealloc;	// 0x35452975
- (id)description;	// 0x35452895
- (id)fallbackTrack;	// 0x354523c1
- (void)finalize;	// 0x35452901
- (unsigned)hash;	// 0x354527c5
// declared property getter: - (BOOL)isEnabled;	// 0x3545272d
- (BOOL)isEqual:(id)equal;	// 0x35452801
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x354526ad
- (int)trackID;	// 0x35452331
@end
