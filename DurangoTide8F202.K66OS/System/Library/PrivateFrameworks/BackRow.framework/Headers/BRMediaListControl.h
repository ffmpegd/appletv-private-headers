/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSTimer, BRHeaderControl, BRListControl;

@interface BRMediaListControl : BRControl {
@private
	BRListControl *_list;	// 44 = 0x2c
	BRControl *_preview;	// 48 = 0x30
	float _previewDelay;	// 52 = 0x34
	NSTimer *_previewDelayTimer;	// 56 = 0x38
	BRHeaderControl *_header;	// 60 = 0x3c
	BOOL _shareItemArtwork;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) BRHeaderControl *header;	// G=0x32900ac5; @synthesize=_header
@property(retain) id listProviders;	// G=0x32900c51; S=0x32900c71; converted property
@property(assign) long selection;	// G=0x32900b45; S=0x328c7a1d; converted property
@property(assign) BOOL shareItemArtwork;	// G=0x32900aa5; S=0x32900ab5; @synthesize=_shareItemArtwork
@property(retain) id subtitle;	// G=0x32900b65; S=0x32900b85; converted property
@property(retain) id title;	// G=0x32900c31; S=0x328bb925; converted property
@property(retain) id titleImage;	// G=0x32900bbd; S=0x32900bdd; converted property
- (id)init;	// 0x328bb821
- (void)_cleanupPreviewDelayTimer;	// 0x328bd8c1
- (void)_previewDelayTimerHandler:(id)handler;	// 0x328bd989
- (void)_scrollWillStart:(id)_scroll;	// 0x328bd8ad
- (void)_scrollWillStop:(id)_scroll;	// 0x328bd8ed
- (void)_updatePreviewWithDelay;	// 0x328bd901
- (id)accessibilityLabel;	// 0x32900af5
- (id)accessibilityScreenContent;	// 0x32900ad5
- (void)controlWasActivated;	// 0x32900ca5
- (void)controlWasDeactivated;	// 0x328bdee1
- (void)dealloc;	// 0x328bcc9d
// declared property getter: - (id)header;	// 0x32900ac5
- (long)itemCount;	// 0x32900b15
- (void)layoutSubcontrols;	// 0x32900d55
- (id)listProviderRequester;	// 0x328c7a0d
// converted property getter: - (id)listProviders;	// 0x32900c51
- (void)reload;	// 0x328bba2d
// converted property getter: - (long)selection;	// 0x32900b45
// converted property setter: - (void)setListProviders:(id)providers;	// 0x32900c71
// converted property setter: - (void)setSelection:(long)selection;	// 0x328c7a1d
// declared property setter: - (void)setShareItemArtwork:(BOOL)artwork;	// 0x32900ab5
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32900b85
// converted property setter: - (void)setTitle:(id)title;	// 0x328bb925
// converted property setter: - (void)setTitleImage:(id)image;	// 0x32900bdd
// declared property getter: - (BOOL)shareItemArtwork;	// 0x32900aa5
// converted property getter: - (id)subtitle;	// 0x32900b65
// converted property getter: - (id)title;	// 0x32900c31
// converted property getter: - (id)titleImage;	// 0x32900bbd
- (void)updatePreview;	// 0x328bba61
@end
