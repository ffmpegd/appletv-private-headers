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
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x33c2a3f1; 
@property(assign, nonatomic) unsigned marqueeScrollableIndex;	// G=0x33c2b465; S=0x33c2a44d; @synthesize=_marqueeScrollableIndex
@property(assign, nonatomic) BOOL marqueeScrollingActive;	// G=0x33c2b475; S=0x33c2a401; @synthesize=_marqueeScrollingActive
@property(assign, nonatomic) BOOL showingLoadingUI;	// G=0x33c2b455; S=0x33c2a56d; @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray *titles;	// G=0x33c2b445; S=0x33c2a505; @synthesize=_titles
- (id)init;	// 0x33c29e41
- (id)initWithFrame:(CGRect)frame;	// 0x33c29fc5
- (id)_addLabel:(unsigned)label;	// 0x33c2a73d
- (id)_addLoadingLabel;	// 0x33c2a5bd
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x33c2a59d
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x33c2a5ad
- (void)_layoutLabels;	// 0x33c2ad05
- (void)_layoutLoadingUI;	// 0x33c2a995
- (void)_tearDownLabels;	// 0x33c2b3a9
- (void)_updateLabelMarqueeScrolling;	// 0x33c2b281
// declared property getter: - (id)contentView;	// 0x33c2a3f1
- (void)dealloc;	// 0x33c2a189
- (void)layoutSubviews;	// 0x33c2a269
// declared property getter: - (unsigned)marqueeScrollableIndex;	// 0x33c2b465
// declared property getter: - (BOOL)marqueeScrollingActive;	// 0x33c2b475
// declared property setter: - (void)setMarqueeScrollableIndex:(unsigned)index;	// 0x33c2a44d
// declared property setter: - (void)setMarqueeScrollingActive:(BOOL)active;	// 0x33c2a401
// declared property setter: - (void)setShowingLoadingUI:(BOOL)ui;	// 0x33c2a56d
// declared property setter: - (void)setTitles:(id)titles;	// 0x33c2a505
// declared property getter: - (BOOL)showingLoadingUI;	// 0x33c2b455
// declared property getter: - (id)titles;	// 0x33c2b445
@end

