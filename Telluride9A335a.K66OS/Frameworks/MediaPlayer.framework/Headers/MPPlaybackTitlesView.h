/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIControl.h> // Unknown library

@class NSArray, UIView;

@interface MPPlaybackTitlesView : UIControl {
	UIView *_contentView;	// 72 = 0x48
	NSArray *_labels;	// 76 = 0x4c
	NSArray *_titles;	// 80 = 0x50
	BOOL _showingLoadingUI;	// 84 = 0x54
	unsigned _marqueeScrollableIndex;	// 88 = 0x58
	BOOL _marqueeScrollingActive;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x3016a4fd; 
@property(assign, nonatomic) unsigned marqueeScrollableIndex;	// G=0x3016b571; S=0x3016a559; @synthesize=_marqueeScrollableIndex
@property(assign, nonatomic) BOOL marqueeScrollingActive;	// G=0x3016b581; S=0x3016a50d; @synthesize=_marqueeScrollingActive
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x3016b561; S=0x3016a679; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x3016b551; S=0x3016a611; @synthesize=_titles
- (id)init;	// 0x30169f4d
- (id)initWithFrame:(CGRect)frame;	// 0x3016a0d1
- (id)_addLabel:(unsigned)label;	// 0x3016a849
- (id)_addLoadingLabel;	// 0x3016a6c9
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x3016a6a9
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x3016a6b9
- (void)_layoutLabels;	// 0x3016ae11
- (void)_layoutLoadingUI;	// 0x3016aaa1
- (void)_tearDownLabels;	// 0x3016b4b5
- (void)_updateLabelMarqueeScrolling;	// 0x3016b38d
// declared property getter: - (id)contentView;	// 0x3016a4fd
- (void)dealloc;	// 0x3016a295
- (void)layoutSubviews;	// 0x3016a375
// declared property getter: - (unsigned)marqueeScrollableIndex;	// 0x3016b571
// declared property getter: - (BOOL)marqueeScrollingActive;	// 0x3016b581
// declared property setter: - (void)setMarqueeScrollableIndex:(unsigned)index;	// 0x3016a559
// declared property setter: - (void)setMarqueeScrollingActive:(BOOL)active;	// 0x3016a50d
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x3016a679
// declared property setter: - (void)setTitles:(id)titles;	// 0x3016a611
// declared property getter: - (BOOL)showingLoadingUI;	// 0x3016b561
// declared property getter: - (id)titles;	// 0x3016b551
@end

