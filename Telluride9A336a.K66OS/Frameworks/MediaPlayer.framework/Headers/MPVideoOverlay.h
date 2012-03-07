/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import "MPVideoOverlay.h"
#import <UIView.h> // Unknown library

@class MPAVController, MPVideoViewController, MPAVItem, UINavigationBar, NSMutableDictionary, MPDetailSlider;
@protocol MPVideoOverlayDelegate;

@protocol MPVideoOverlay
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;
@property(assign, nonatomic) unsigned desiredParts;
@property(assign, nonatomic) unsigned disabledParts;
@property(assign, nonatomic) int interfaceOrientation;
@property(retain, nonatomic) MPAVItem *item;
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;
@property(retain, nonatomic) MPAVController *player;
@property(assign, nonatomic) MPVideoViewController *videoViewController;
@property(assign, nonatomic) unsigned visibleParts;
// declared property getter: - (BOOL)allowsWirelessPlayback;
// declared property getter: - (id)delegate;
// declared property getter: - (unsigned)desiredParts;
// declared property getter: - (unsigned)disabledParts;
- (void)hideAlternateTracks;
// declared property getter: - (int)interfaceOrientation;
// declared property getter: - (id)item;
// declared property getter: - (id)navigationBar;
// declared property getter: - (id)player;
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setDesiredParts:(unsigned)parts;
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;
// declared property setter: - (void)setDisabledParts:(unsigned)parts;
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;
// declared property setter: - (void)setItem:(id)item;
// declared property setter: - (void)setPlayer:(id)player;
// declared property setter: - (void)setVideoViewController:(id)controller;
// declared property setter: - (void)setVisibleParts:(unsigned)parts;
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (BOOL)updateTimeBasedValues;
// declared property getter: - (id)videoViewController;
// declared property getter: - (unsigned)visibleParts;
@end

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
	MPVideoViewController *_videoViewController;	// 48 = 0x30
	id<MPVideoOverlayDelegate> _delegate;	// 52 = 0x34
	MPAVItem *_item;	// 56 = 0x38
	MPAVController *_player;	// 60 = 0x3c
	MPDetailSlider *_scrubControl;	// 64 = 0x40
	int _interfaceOrientation;	// 68 = 0x44
	BOOL _controlsAutohideDisabled;	// 72 = 0x48
	BOOL _wantsTick;	// 73 = 0x49
	unsigned _desiredParts;	// 76 = 0x4c
	unsigned _visibleParts;	// 80 = 0x50
	unsigned _disabledParts;	// 84 = 0x54
	NSMutableDictionary *_tickTimeEvents;	// 88 = 0x58
	double _lastTickTime;	// 92 = 0x5c
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x35baa8a5; S=0x35baa8a9; 
@property(assign, nonatomic) id<MPVideoOverlayDelegate> delegate;	// G=0x35bab09d; S=0x35bab0ad; @synthesize=_delegate
@property(assign, nonatomic) unsigned desiredParts;	// G=0x35bab0bd; S=0x35baa929; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x35bab0cd; S=0x35bab0dd; @synthesize=_disabledParts
@property(assign, nonatomic) int interfaceOrientation;	// G=0x35bab0fd; S=0x35bab10d; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVItem *item;	// G=0x35bab0ed; S=0x35baa8ad; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x35baaa65; 
@property(retain, nonatomic) MPAVController *player;	// G=0x35bab11d; S=0x35bab12d; @synthesize=_player
@property(assign, nonatomic) MPVideoViewController *videoViewController;	// G=0x35bab151; S=0x35baa94d; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned visibleParts;	// G=0x35bab161; S=0x35baa991; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x35baa2cd
- (double)_duration;	// 0x35baaf9d
- (void)_endSliderTracking;	// 0x35baa6b5
- (void)_itemDurationDidChangeNotification:(id)_itemDuration;	// 0x35baa7dd
- (double)_playableDuration;	// 0x35bab01d
- (void)_tickNotification:(id)notification;	// 0x35baa765
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x35baa8a5
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)selector;	// 0x35baaea5
- (void)dealloc;	// 0x35baa3cd
// declared property getter: - (id)delegate;	// 0x35bab09d
// declared property getter: - (unsigned)desiredParts;	// 0x35bab0bd
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x35baa651
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x35baa555
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x35baa641
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x35baa631
- (void)didMoveToSuperview;	// 0x35baa4dd
// declared property getter: - (unsigned)disabledParts;	// 0x35bab0cd
- (void)hideAlternateTracks;	// 0x35baaa61
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35baa519
// declared property getter: - (int)interfaceOrientation;	// 0x35bab0fd
// declared property getter: - (id)item;	// 0x35bab0ed
- (void)layoutSubviews;	// 0x35baa4d9
// declared property getter: - (id)navigationBar;	// 0x35baaa65
- (void)performSelector:(SEL)selector whenTickingPastTime:(double)time;	// 0x35baadb5
// declared property getter: - (id)player;	// 0x35bab11d
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35baa8a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35bab0ad
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x35baa929
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x35baa93d
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x35bab0dd
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x35bab10d
// declared property setter: - (void)setItem:(id)item;	// 0x35baa8ad
// declared property setter: - (void)setPlayer:(id)player;	// 0x35bab12d
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x35baa94d
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x35baa991
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x35baa9a5
- (void)showAlternateTracks;	// 0x35baaa5d
- (void)startTicking;	// 0x35baa9b5
- (void)stopTicking;	// 0x35baaa19
- (BOOL)updateTimeBasedValues;	// 0x35baaa69
// declared property getter: - (id)videoViewController;	// 0x35bab151
// declared property getter: - (unsigned)visibleParts;	// 0x35bab161
@end

