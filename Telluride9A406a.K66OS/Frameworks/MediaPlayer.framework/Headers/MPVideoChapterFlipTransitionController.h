/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPFlipTransitionController.h"

@class UINavigationItem, UITextLabel, UINavigationBar;

@interface MPVideoChapterFlipTransitionController : MPFlipTransitionController {
	UINavigationBar *_navigationBar;	// 76 = 0x4c
	UINavigationItem *_originalNavigationItem;	// 80 = 0x50
	UITextLabel *_chapterGuideTitleLabel;	// 84 = 0x54
	unsigned _shouldPlayAfterFlip : 1;	// 88 = 0x58
}
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x319d9245; S=0x319d81c5; @synthesize=_navigationBar
@property(assign, nonatomic) BOOL playAfterFlip;	// G=0x319d81b1; S=0x319d834d; 
- (id)_chapterGuideTitleLabel;	// 0x319d83b5
- (id)_copySwizzledNavigationViews;	// 0x319d851d
- (void)_done:(id)done;	// 0x319d8365
- (void)_hideNavigationAndStatusBars;	// 0x319d8715
- (void)_hideNavigationBarAnimationDidFinish:(id)_hideNavigationBarAnimation;	// 0x319d83a1
- (int)_interfaceOrientation;	// 0x319d888d
- (void)_restoreOriginalNavigationViews:(BOOL)views;	// 0x319d88d9
- (void)_showChapterGuideNavigationViews;	// 0x319d8d95
- (void)dealloc;	// 0x319d7fd5
// declared property getter: - (id)navigationBar;	// 0x319d9245
- (void)performTransition:(unsigned)transition;	// 0x319d8069
// declared property getter: - (BOOL)playAfterFlip;	// 0x319d81b1
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x319d81c5
// declared property setter: - (void)setPlayAfterFlip:(BOOL)flip;	// 0x319d834d
@end

