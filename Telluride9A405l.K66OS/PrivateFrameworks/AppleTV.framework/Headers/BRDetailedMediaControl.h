/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRActionShelfControl, BRCoverArtPreviewControl;
@protocol BRProvider;

@interface BRDetailedMediaControl : BRControl {
@private
	BRControl *_metadata;	// 48 = 0x30
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 52 = 0x34
	BRControl *_textLine;	// 56 = 0x38
	BRControl *_previewBrowser;	// 60 = 0x3c
	BRActionShelfControl *_actionShelf;	// 64 = 0x40
	BRTextControl *_expiryText;	// 68 = 0x44
	id<BRProvider> _metadataProvider;	// 72 = 0x48
	id<BRProvider> _textLineProvider;	// 76 = 0x4c
	id<BRProvider> _previewBrowserProvider;	// 80 = 0x50
	int _style;	// 84 = 0x54
	BOOL _detailsTogglingEnabled;	// 88 = 0x58
	BOOL _autoRefreshMetadata;	// 89 = 0x59
}
@property(retain) id actionProviders;	// G=0x35def6c5; S=0x35def531; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x35deef4d; S=0x35deeea1; converted property
@property(assign) int detailControlStyle;	// G=0x35deee71; S=0x35deed61; converted property
@property(retain) id detailedMetadataControl;	// G=0x35def361; S=0x35def2cd; converted property
@property(retain) id metadataProvider;	// G=0x35def2bd; S=0x35def195; converted property
@property(retain) id previewBrowserProvider;	// G=0x35def499; S=0x35def371; converted property
@property(retain) id textLineProvider;	// G=0x35def185; S=0x35deef5d; converted property
- (id)init;	// 0x35dee891
- (void)_focusedActionChanged:(id)changed;	// 0x35defc9d
- (id)accessibilityScreenContent;	// 0x35defc7d
// converted property getter: - (id)actionProviders;	// 0x35def6c5
- (BOOL)brEventAction:(id)action;	// 0x35deeb8d
// converted property getter: - (id)coverArtPreviewControl;	// 0x35deef4d
- (void)dealloc;	// 0x35deea71
// converted property getter: - (int)detailControlStyle;	// 0x35deee71
// converted property getter: - (id)detailedMetadataControl;	// 0x35def361
- (void)enableDetailsToggling;	// 0x35deed4d
- (CGRect)focusCursorFrame;	// 0x35deec65
- (void)invokeActionSelectionHandler;	// 0x35def71d
- (void)layoutSubcontrols;	// 0x35def7f5
// converted property getter: - (id)metadataProvider;	// 0x35def2bd
// converted property getter: - (id)previewBrowserProvider;	// 0x35def499
- (void)setActionFocusedIndex:(long)index;	// 0x35def779
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x35def531
- (void)setActionSelectionHandler:(id)handler;	// 0x35def6fd
- (void)setActionStyle:(int)style;	// 0x35def759
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x35def521
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x35deeea1
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x35deed61
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x35def2cd
- (void)setExpiryText:(id)text;	// 0x35def4a9
- (void)setImageProxy:(id)proxy;	// 0x35deee81
- (void)setMediaType:(id)type;	// 0x35deea51
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x35def195
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x35def371
- (void)setTextLine:(id)line;	// 0x35def085
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x35deef5d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35def7c5
// converted property getter: - (id)textLineProvider;	// 0x35def185
@end

