/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library

@class AVPlayer, CADisplay, AVSubtitleLayerInternal;

@interface AVSubtitleLayer : CALayer {
	AVSubtitleLayerInternal *_subtitleLayer;	// 48 = 0x30
}
@property(assign, nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x34702a3d; S=0x34702991; 
@property(retain, nonatomic) AVPlayer *player;	// G=0x34703055; S=0x34703121; @dynamic
@property(readonly, assign, nonatomic) CADisplay *subtitleLayerDisplay;	// G=0x34702819; 
+ (id)subtitleLayerWithPlayer:(id)player;	// 0x347027bd
- (id)init;	// 0x347038d9
- (id)initWithLayer:(id)layer;	// 0x3470378d
- (void)_invalidateBoundaryTimeObserver;	// 0x34703365
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x3470346d
- (void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x34703635
- (void)dealloc;	// 0x34703239
- (void)finalize;	// 0x347032f1
// declared property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x34702a3d
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x34702ac5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34702709
// declared property getter: - (id)player;	// 0x34703055
- (void)setBounds:(CGRect)bounds;	// 0x34702c75
// declared property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x34702991
// declared property setter: - (void)setPlayer:(id)player;	// 0x34703121
// declared property getter: - (id)subtitleLayerDisplay;	// 0x34702819
- (void)subtitlesDidChange:(id)subtitles;	// 0x34702e25
@end

