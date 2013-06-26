/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHeaderControl, BRListControl, NSTimer;

__attribute__((visibility("hidden")))
@interface BRMediaListControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	BRControl *_preview;	// 88 = 0x58
	float _previewDelay;	// 92 = 0x5c
	NSTimer *_previewDelayTimer;	// 96 = 0x60
	BRHeaderControl *_header;	// 100 = 0x64
	BOOL _shareItemArtwork;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BRHeaderControl *header;	// G=0x2eae45; @synthesize=_header
@property(retain) id listProviders;	// G=0x2eaa95; S=0x2eaa59; converted property
@property(assign) long selection;	// G=0x2ead71; S=0x2ead35; converted property
@property(assign) BOOL shareItemArtwork;	// G=0x2eae55; S=0x2eae6d; @synthesize=_shareItemArtwork
@property(retain) id subtitle;	// G=0x2eabdd; S=0x2eab99; converted property
@property(retain) id title;	// G=0x2eaaf9; S=0x2eaab5; converted property
@property(retain) id titleImage;	// G=0x2eab79; S=0x2eab19; converted property
- (id)init;	// 0x2ea55d
- (void)_cleanupPreviewDelayTimer;	// 0x2eaf49
- (void)_previewDelayTimerHandler:(id)handler;	// 0x2eaf75
- (void)_scrollWillStart:(id)_scroll;	// 0x2eae85
- (void)_scrollWillStop:(id)_scroll;	// 0x2eae95
- (void)_updatePreviewWithDelay;	// 0x2eaea5
- (id)accessibilityLabel;	// 0x2eae05
- (id)accessibilityScreenContent;	// 0x2eae25
- (void)controlWasActivated;	// 0x2ea8e1
- (void)controlWasDeactivated;	// 0x2ea9a1
- (void)dealloc;	// 0x2ea665
// declared property getter: - (id)header;	// 0x2eae45
- (long)itemCount;	// 0x2ead91
- (void)layoutSubcontrols;	// 0x2ea709
- (id)listProviderRequester;	// 0x2ead25
// converted property getter: - (id)listProviders;	// 0x2eaa95
- (void)reload;	// 0x2eadc9
// converted property getter: - (long)selection;	// 0x2ead71
// converted property setter: - (void)setListProviders:(id)providers;	// 0x2eaa59
// converted property setter: - (void)setSelection:(long)selection;	// 0x2ead35
// declared property setter: - (void)setShareItemArtwork:(BOOL)artwork;	// 0x2eae6d
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x2eab99
// converted property setter: - (void)setTitle:(id)title;	// 0x2eaab5
// converted property setter: - (void)setTitleImage:(id)image;	// 0x2eab19
// declared property getter: - (BOOL)shareItemArtwork;	// 0x2eae55
// converted property getter: - (id)subtitle;	// 0x2eabdd
// converted property getter: - (id)title;	// 0x2eaaf9
// converted property getter: - (id)titleImage;	// 0x2eab79
- (void)updatePreview;	// 0x2eabfd
@end
