/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIControl.h> // Unknown library


@interface TPPhonePad : UIControl {
	int _downKey;	// 108 = 0x6c
	id _delegate;	// 112 = 0x70
	BOOL _playsSounds;	// 116 = 0x74
	BOOL _supportsHardPause;	// 117 = 0x75
	float _topHeight;	// 120 = 0x78
	float _midHeight;	// 124 = 0x7c
	float _bottomHeight;	// 128 = 0x80
	float _leftWidth;	// 132 = 0x84
	float _midWidth;	// 136 = 0x88
	float _rightWidth;	// 140 = 0x8c
	CFSetRef _inflightSounds;	// 144 = 0x90
	CFDictionaryRef _keyToButtonMap;	// 148 = 0x94
	unsigned _incompleteSounds;	// 152 = 0x98
	unsigned _delegateSoundCallbacks : 1;	// 156 = 0x9c
	unsigned _soundsActivated : 1;	// 156 = 0x9c
}
@property(assign) BOOL supportsHardPause;	// G=0x36616a01; S=0x36616a19; @synthesize=_supportsHardPause
+ (void)_delayedDeactivate;	// 0x36615381
+ (BOOL)launchFieldTestIfNeeded:(id)needed;	// 0x36615169
+ (BOOL)shouldStringAutoDial:(id)dial givenLastChar:(BOOL)aChar;	// 0x3661504d
- (id)initWithFrame:(CGRect)frame;	// 0x366151c5
- (void)_activateSounds:(BOOL)sounds;	// 0x366153c9
- (void)_appResumed;	// 0x36615589
- (void)_appSuspended;	// 0x36615575
- (id)_buttonForKeyAtIndex:(int)index;	// 0x36615991
- (void)_handleKey:(id)key forUIEvent:(id)uievent;	// 0x36616111
- (void)_handleKeyPressAndHold:(id)hold;	// 0x366163e1
- (id)_imageByCroppingImage:(id)image toRect:(CGRect)rect;	// 0x36615bd1
- (int)_keyForPoint:(CGPoint)point;	// 0x366164e9
- (id)_keypadImage;	// 0x36615b21
- (CGPoint)_keypadOrigin;	// 0x36615a09
- (void)_notifySoundCompletionIfNecessary:(unsigned long)necessary;	// 0x366167bd
- (void)_playSoundForKey:(int)key;	// 0x36616821
- (id)_pressedImage;	// 0x36615ae9
- (CGRect)_rectForKey:(int)key;	// 0x36616655
- (void)_stopAllSoundsForcingCallbacks:(BOOL)callbacks;	// 0x36616941
- (void)_stopSoundForKey:(int)key;	// 0x36616901
- (CGRect)_updateRect:(CGRect)rect withScale:(float)scale;	// 0x36615b61
- (float)_yFudge;	// 0x36615b59
- (BOOL)cancelTouchTracking;	// 0x3661601d
- (void)dealloc;	// 0x366152d1
- (void)drawRect:(CGRect)rect;	// 0x36615c79
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x36615edd
- (void)movedFromWindow:(id)window;	// 0x366155b1
- (void)movedToWindow:(id)window;	// 0x366155f5
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x36615ed9
- (void)removeFromSuperview;	// 0x36615515
- (id)scriptingInfoWithChildren;	// 0x36616a31
- (void)setButton:(id)button forKeyAtIndex:(int)index;	// 0x366158d5
- (void)setDelegate:(id)delegate;	// 0x36615649
- (void)setHighlighted:(BOOL)highlighted;	// 0x36615f55
- (void)setNeedsDisplayForKey:(int)key;	// 0x366159ad
- (void)setPlaysSounds:(BOOL)sounds;	// 0x366156dd
// declared property setter: - (void)setSupportsHardPause:(BOOL)pause;	// 0x36616a19
// declared property getter: - (BOOL)supportsHardPause;	// 0x36616a01
@end

