/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransportControls.h"
#import "MediaPlayer-Structs.h"

@class UILabel, UIActivityIndicatorView;

@interface MPInlineTransportControls : MPTransportControls {
	UILabel *_loadingMovieLabel;	// 184 = 0xb8
	UIActivityIndicatorView *_loadingMovieIndicator;	// 188 = 0xbc
}
@property(readonly, assign, nonatomic) CGRect availableProgressControlAreaFrame;	// G=0x341b4aed; 
- (id)initWithFrame:(CGRect)frame;	// 0x341b3e71
- (void)_disableAnimationIfNecessary:(id)necessary;	// 0x341b4c5d
- (void)_enableAnimationIfNecessary:(id)necessary;	// 0x341b4c9d
// declared property getter: - (CGRect)availableProgressControlAreaFrame;	// 0x341b4aed
- (id)buttonImageForPart:(unsigned long long)part;	// 0x341b4231
- (void)dealloc;	// 0x341b3ee1
- (void)layoutSubviews;	// 0x341b4341
- (id)newButtonForPart:(unsigned long long)part;	// 0x341b41ed
- (id)pauseButtonImage;	// 0x341b42f5
- (id)playButtonImage;	// 0x341b42e9
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x341b3f45
- (void)setDisabledParts:(unsigned long long)parts;	// 0x341b4301
@end
