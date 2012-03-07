/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRListControl, NSTimer, BRHeaderControl;

@interface BRMediaListControl : BRControl {
@private
	BRListControl *_list;	// 48 = 0x30
	BRControl *_preview;	// 52 = 0x34
	float _previewDelay;	// 56 = 0x38
	NSTimer *_previewDelayTimer;	// 60 = 0x3c
	BRHeaderControl *_header;	// 64 = 0x40
	BOOL _shareItemArtwork;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRHeaderControl *header;	// G=0x341fe9cd; @synthesize=_header
@property(retain) id listProviders;	// G=0x341fe611; S=0x341fe5d5; converted property
@property(assign) long selection;	// G=0x341fe8f9; S=0x341fe8bd; converted property
@property(assign) BOOL shareItemArtwork;	// G=0x341fe9dd; S=0x341fe9ed; @synthesize=_shareItemArtwork
@property(retain) id subtitle;	// G=0x341fe759; S=0x341fe715; converted property
@property(retain) id title;	// G=0x341fe675; S=0x341fe631; converted property
@property(retain) id titleImage;	// G=0x341fe6f5; S=0x341fe695; converted property
- (id)init;	// 0x341fe0ad
- (void)_cleanupPreviewDelayTimer;	// 0x341feab9
- (void)_previewDelayTimerHandler:(id)handler;	// 0x341feae9
- (void)_scrollWillStart:(id)_scroll;	// 0x341fe9fd
- (void)_scrollWillStop:(id)_scroll;	// 0x341fea0d
- (void)_updatePreviewWithDelay;	// 0x341fea1d
- (id)accessibilityLabel;	// 0x341fe98d
- (id)accessibilityScreenContent;	// 0x341fe9ad
- (void)controlWasActivated;	// 0x341fe451
- (void)controlWasDeactivated;	// 0x341fe519
- (void)dealloc;	// 0x341fe1b9
// declared property getter: - (id)header;	// 0x341fe9cd
- (long)itemCount;	// 0x341fe919
- (void)layoutSubcontrols;	// 0x341fe25d
- (id)listProviderRequester;	// 0x341fe8ad
// converted property getter: - (id)listProviders;	// 0x341fe611
- (void)reload;	// 0x341fe951
// converted property getter: - (long)selection;	// 0x341fe8f9
// converted property setter: - (void)setListProviders:(id)providers;	// 0x341fe5d5
// converted property setter: - (void)setSelection:(long)selection;	// 0x341fe8bd
// declared property setter: - (void)setShareItemArtwork:(BOOL)artwork;	// 0x341fe9ed
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x341fe715
// converted property setter: - (void)setTitle:(id)title;	// 0x341fe631
// converted property setter: - (void)setTitleImage:(id)image;	// 0x341fe695
// declared property getter: - (BOOL)shareItemArtwork;	// 0x341fe9dd
// converted property getter: - (id)subtitle;	// 0x341fe759
// converted property getter: - (id)title;	// 0x341fe675
// converted property getter: - (id)titleImage;	// 0x341fe6f5
- (void)updatePreview;	// 0x341fe779
@end

