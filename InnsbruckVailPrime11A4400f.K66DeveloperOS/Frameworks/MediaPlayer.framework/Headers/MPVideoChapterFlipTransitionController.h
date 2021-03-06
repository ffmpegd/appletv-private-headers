/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPFlipTransitionController.h"

@class UITextLabel, UINavigationBar, UINavigationItem;

@interface MPVideoChapterFlipTransitionController : MPFlipTransitionController {
	UINavigationBar *_navigationBar;	// 76 = 0x4c
	UINavigationItem *_originalNavigationItem;	// 80 = 0x50
	UITextLabel *_chapterGuideTitleLabel;	// 84 = 0x54
	BOOL _shouldPlayAfterFlip;	// 88 = 0x58
	BOOL _tvOutEnabled;	// 89 = 0x59
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x2e274dc1; S=0x2e274dd1; @synthesize=_tvOutEnabled
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x2e274d91; S=0x2e273a19; @synthesize=_navigationBar
@property(assign, nonatomic) BOOL playAfterFlip;	// G=0x2e274da1; S=0x2e274db1; @synthesize=_shouldPlayAfterFlip
- (void).cxx_destruct;	// 0x2e274de1
// declared property getter: - (BOOL)TVOutEnabled;	// 0x2e274dc1
- (id)_chapterGuideTitleLabel;	// 0x2e273c81
- (id)_copySwizzledNavigationViews;	// 0x2e273e31
- (void)_done:(id)done;	// 0x2e273c1d
- (void)_hideNavigationAndStatusBars;	// 0x2e274095
- (int)_interfaceOrientation;	// 0x2e274215
- (void)_restoreOriginalNavigationViews:(BOOL)views;	// 0x2e274259
- (void)_restoreOriginalNavigationViewsDidStop:(id)_restoreOriginalNavigationViews;	// 0x2e2747e9
- (void)_showChapterGuideNavigationViews;	// 0x2e274881
- (void)dealloc;	// 0x2e273841
// declared property getter: - (id)navigationBar;	// 0x2e274d91
- (void)performTransition:(unsigned)transition;	// 0x2e2738ad
// declared property getter: - (BOOL)playAfterFlip;	// 0x2e274da1
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x2e273a19
// declared property setter: - (void)setPlayAfterFlip:(BOOL)flip;	// 0x2e274db1
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x2e274dd1
@end

