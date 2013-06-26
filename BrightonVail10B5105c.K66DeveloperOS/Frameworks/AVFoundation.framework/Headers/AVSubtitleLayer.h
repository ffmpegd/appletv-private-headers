/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <CALayer.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayer, AVSubtitleLayerInternal, CADisplay;

@interface AVSubtitleLayer : CALayer {
	AVSubtitleLayerInternal *_subtitleLayer;	// 48 = 0x30
}
@property(assign, nonatomic, getter=isOverscanSubtitleSupportEnabled) BOOL overscanSubtitleSupportEnabled;	// G=0x303360a1; S=0x3033618d; 
@property(retain, nonatomic) AVPlayer *player;	// G=0x30335e1d; S=0x30335cb5; 
@property(readonly, assign, nonatomic) CADisplay *subtitleLayerDisplay;	// G=0x3033626d; 
+ (id)subtitleLayerWithPlayer:(id)player;	// 0x303347b9
- (id)init;	// 0x30334bbd
- (id)initWithLayer:(id)layer;	// 0x30334e25
- (void)_setHasPlayerToObserve:(int)observe andShouldObserveIt:(int)anAnd;	// 0x30335575
- (void)_setSubtitleSample:(id)sample;	// 0x30334815
- (void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x303352dd
- (void)dealloc;	// 0x30335bf1
- (void)drawInContext:(CGContextRef)context;	// 0x30334f69
- (void)finalize;	// 0x30335b79
- (long)getLayout:(SubtitleLayoutParameters)layout suggestLayout:(CGRect *)layout2 shouldUpdateCachedSubtitleSample:(BOOL)sample;	// 0x3033498d
// declared property getter: - (BOOL)isOverscanSubtitleSupportEnabled;	// 0x303360a1
- (void)layerDidBecomeVisible:(BOOL)layer;	// 0x30335f49
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30335fb9
// declared property getter: - (id)player;	// 0x30335e1d
// declared property setter: - (void)setOverscanSubtitleSupportEnabled:(BOOL)enabled;	// 0x3033618d
// declared property setter: - (void)setPlayer:(id)player;	// 0x30335cb5
// declared property getter: - (id)subtitleLayerDisplay;	// 0x3033626d
- (long)updateSubtitle:(id)subtitle forcedSubtitleSample:(BOOL)sample shouldBeHidden:(BOOL *)hidden;	// 0x3033486d
@end
