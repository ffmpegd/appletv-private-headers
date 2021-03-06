/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"


@interface SKVolume : SKLayer {
	float _volume;	// 56 = 0x38
	int _volumeSteps;	// 60 = 0x3c
	BOOL _muted;	// 64 = 0x40
	BOOL _drawsShadow;	// 65 = 0x41
	CGRect *_rects;	// 68 = 0x44
}
- (id)init;	// 0x35432309
- (void)dealloc;	// 0x35432421
- (void)drawInContext:(CGContextRef)context;	// 0x35432671
- (float)getVolume;	// 0x354325a9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35432999
- (void)recalculateBarRects;	// 0x35432461
- (void)setBounds:(CGRect)bounds;	// 0x35432529
- (void)setDrawsShadow:(BOOL)shadow;	// 0x35432645
- (void)setMuted:(BOOL)muted;	// 0x35432619
- (void)setVolume:(float)volume;	// 0x35432571
- (void)setVolumeSteps:(int)steps;	// 0x354325b9
@end

