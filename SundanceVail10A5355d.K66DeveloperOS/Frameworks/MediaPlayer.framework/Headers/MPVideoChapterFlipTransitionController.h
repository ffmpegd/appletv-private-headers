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
	BOOL _shouldPlayAfterFlip;	// 88 = 0x58
	BOOL _tvOutEnabled;	// 89 = 0x59
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x336dc649; S=0x336dc659; @synthesize=_tvOutEnabled
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x336dc619; S=0x336db5e1; @synthesize=_navigationBar
@property(assign, nonatomic) BOOL playAfterFlip;	// G=0x336dc629; S=0x336dc639; @synthesize=_shouldPlayAfterFlip
// declared property getter: - (BOOL)TVOutEnabled;	// 0x336dc649
- (id)_chapterGuideTitleLabel;	// 0x336db7ad
- (id)_copySwizzledNavigationViews;	// 0x336db911
- (void)_done:(id)done;	// 0x336db75d
- (void)_hideNavigationAndStatusBars;	// 0x336dbb0d
- (void)_hideNavigationBarAnimationDidFinish:(id)_hideNavigationBarAnimation;	// 0x336db799
- (int)_interfaceOrientation;	// 0x336dbc99
- (void)_restoreOriginalNavigationViews:(BOOL)views;	// 0x336dbcdd
- (void)_showChapterGuideNavigationViews;	// 0x336dc161
- (void)dealloc;	// 0x336db401
// declared property getter: - (id)navigationBar;	// 0x336dc619
- (void)performTransition:(unsigned)transition;	// 0x336db491
// declared property getter: - (BOOL)playAfterFlip;	// 0x336dc629
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x336db5e1
// declared property setter: - (void)setPlayAfterFlip:(BOOL)flip;	// 0x336dc639
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x336dc659
@end

