/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, NSMutableDictionary, CALayer, CADisplayLink, NSMutableArray, UIImage, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationMeterView : UIView {
@private
	UIImageView *_background;	// 48 = 0x30
	UIImageView *_overlay;	// 52 = 0x34
	NSMutableArray *_micListeningImages;	// 56 = 0x38
	NSMutableDictionary *_micFullImageDict;	// 60 = 0x3c
	UIImage *_micThinkingOnImage;	// 64 = 0x40
	CALayer *_micImageLayer;	// 68 = 0x44
	CALayer *_animatingLayer;	// 72 = 0x48
	CALayer *_fullRingLayer;	// 76 = 0x4c
	NSTimer *_fillTimer;	// 80 = 0x50
	int _phase;	// 84 = 0x54
	int _state;	// 88 = 0x58
	float _runningPowerLevels[5];	// 92 = 0x5c
	unsigned _powerPointer;	// 112 = 0x70
	CADisplayLink *_displayLink;	// 116 = 0x74
}
- (id)initWithFrame:(CGRect)frame;	// 0x303deeed
- (float)_adjustedDuration:(float)duration;	// 0x303df8c5
- (double)_animationInterval;	// 0x303df541
- (id)_basicAnimationForOpacityFrom:(unsigned)from to:(unsigned)to duration:(double)duration;	// 0x303e028d
- (id)_beginningKeyFrameAnimation;	// 0x303dfa39
- (void)_clearDisplayLink;	// 0x303e05f5
- (id)_currentMicPowerImage;	// 0x303df5d9
- (float)_currentMicPowerLevel;	// 0x303df879
- (void)_displayLinkCallback:(id)callback;	// 0x303e0569
- (id)_emptyMicImage;	// 0x303df5b1
- (id)_fullMicImage;	// 0x303df5c5
- (void)_handleBeginning;	// 0x303e044d
- (void)_handleListening;	// 0x303e0635
- (void)_handleListeningBegin;	// 0x303e04c5
- (void)_handleListeningEnd;	// 0x303e06f5
- (void)_handleListeningStart;	// 0x303e04b5
- (void)_handleThinking;	// 0x303e07d9
- (void)_handleThinkingBegin;	// 0x303e0771
- (void)_handleThinkingEnd;	// 0x303e0889
- (void)_handleThinkingResolve;	// 0x303e0925
- (id)_imageForMicFullIndex:(unsigned)micFullIndex;	// 0x303df569
- (BOOL)_isSuitableStoppingPhase:(int)phase;	// 0x303e09d1
- (id)_keyframeAnimationForCGImages:(id)cgimages duration:(double)duration;	// 0x303df969
- (id)_listeningBeginKeyFrameAnimation;	// 0x303dfbd5
- (id)_listeningEndKeyFrameAnimation;	// 0x303dfd99
- (float)_powerLevelForMicPower:(float)micPower;	// 0x303df811
- (void)_removeAnimationsAndClearLayers;	// 0x303df8e9
- (void)_reset;	// 0x303df6e1
- (id)_thinkingBeginKeyFrameAnimation;	// 0x303dff5d
- (id)_thinkingEndKeyFrameAnimation;	// 0x303e03bd
- (id)_thinkingResolveKeyFrameAnimation;	// 0x303e0405
- (id)_thinkingRingAnimation;	// 0x303e0131
- (float)_updateMedianWithNewValue:(float)newValue;	// 0x303df771
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x303e09dd
- (void)dealloc;	// 0x303df3e5
- (void)layoutSubviews;	// 0x303df495
- (void)setState:(int)state;	// 0x303df64d
@end

