/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIBezierPath;

@interface MPAlternateTrackCellBackgroundView : UIView {
	int _sectionLocation;	// 44 = 0x2c
	int _selectionStyle;	// 48 = 0x30
	UIBezierPath *_fillPath;	// 52 = 0x34
	UIBezierPath *_strokePath;	// 56 = 0x38
}
@property(assign, nonatomic) int sectionLocation;	// G=0x33765d69; S=0x33766005; @synthesize=_sectionLocation
@property(assign, nonatomic) int selectionStyle;	// G=0x33765d79; S=0x3376601d; @synthesize=_selectionStyle
- (id)initWithFrame:(CGRect)frame;	// 0x33766169
- (void)_createBezierPathWithCornerRadius:(float)cornerRadius bottomRadius:(float)radius animating:(BOOL)animating;	// 0x337661ed
- (void)_invalidatePaths;	// 0x337660c1
- (void)dealloc;	// 0x3376610d
- (void)drawRect:(CGRect)rect;	// 0x337664dd
- (void)layoutSubviews;	// 0x33765f91
// declared property getter: - (int)sectionLocation;	// 0x33765d69
// declared property getter: - (int)selectionStyle;	// 0x33765d79
- (void)setFrame:(CGRect)frame;	// 0x33766055
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x33766005
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x33765fcd
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x3376601d
@end

