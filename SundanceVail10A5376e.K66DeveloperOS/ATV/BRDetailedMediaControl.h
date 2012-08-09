/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRActionShelfControl, BRCoverArtPreviewControl;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRDetailedMediaControl : BRControl {
	BRControl *_metadata;	// 84 = 0x54
	BRCoverArtPreviewControl *_coverArtPreviewControl;	// 88 = 0x58
	BRControl *_textLine;	// 92 = 0x5c
	BRControl *_previewBrowser;	// 96 = 0x60
	BRActionShelfControl *_actionShelf;	// 100 = 0x64
	BRTextControl *_expiryText;	// 104 = 0x68
	id<BRProvider> _metadataProvider;	// 108 = 0x6c
	id<BRProvider> _textLineProvider;	// 112 = 0x70
	id<BRProvider> _previewBrowserProvider;	// 116 = 0x74
	int _style;	// 120 = 0x78
	BOOL _detailsTogglingEnabled;	// 124 = 0x7c
	BOOL _autoRefreshMetadata;	// 125 = 0x7d
}
@property(retain) id actionProviders;	// G=0x2b8c81; S=0x2b8af9; converted property
@property(retain) BRCoverArtPreviewControl *coverArtPreviewControl;	// G=0x2b8549; S=0x2b848d; converted property
@property(assign) int detailControlStyle;	// G=0x2b845d; S=0x2b8349; converted property
@property(retain) id detailedMetadataControl;	// G=0x2b8939; S=0x2b8895; converted property
@property(retain) id metadataProvider;	// G=0x2b8885; S=0x2b8775; converted property
@property(retain) id previewBrowserProvider;	// G=0x2b8a59; S=0x2b8949; converted property
@property(retain) id textLineProvider;	// G=0x2b8765; S=0x2b8559; converted property
- (id)init;	// 0x2b7e81
- (void)_focusedActionChanged:(id)changed;	// 0x2b92c1
- (id)accessibilityScreenContent;	// 0x2b92a1
// converted property getter: - (id)actionProviders;	// 0x2b8c81
- (BOOL)brEventAction:(id)action;	// 0x2b8161
// converted property getter: - (id)coverArtPreviewControl;	// 0x2b8549
- (void)dealloc;	// 0x2b8045
// converted property getter: - (int)detailControlStyle;	// 0x2b845d
// converted property getter: - (id)detailedMetadataControl;	// 0x2b8939
- (void)enableDetailsToggling;	// 0x2b8335
- (CGRect)focusCursorFrame;	// 0x2b8239
- (void)invokeActionSelectionHandler;	// 0x2b8cd9
- (void)layoutSubcontrols;	// 0x2b8db1
// converted property getter: - (id)metadataProvider;	// 0x2b8885
// converted property getter: - (id)previewBrowserProvider;	// 0x2b8a59
- (void)setActionFocusedIndex:(long)index;	// 0x2b8d35
// converted property setter: - (void)setActionProviders:(id)providers;	// 0x2b8af9
- (void)setActionSelectionHandler:(id)handler;	// 0x2b8cb9
- (void)setActionStyle:(int)style;	// 0x2b8d15
- (void)setAutoRefreshMetadata:(BOOL)metadata;	// 0x2b8ae9
// converted property setter: - (void)setCoverArtPreviewControl:(id)control;	// 0x2b848d
// converted property setter: - (void)setDetailControlStyle:(int)style;	// 0x2b8349
// converted property setter: - (void)setDetailedMetadataControl:(id)control;	// 0x2b8895
- (void)setExpiryText:(id)text;	// 0x2b8a69
- (void)setImageProxy:(id)proxy;	// 0x2b846d
- (void)setMediaType:(id)type;	// 0x2b8025
// converted property setter: - (void)setMetadataProvider:(id)provider;	// 0x2b8775
// converted property setter: - (void)setPreviewBrowserProvider:(id)provider;	// 0x2b8949
- (void)setTextLine:(id)line;	// 0x2b8669
// converted property setter: - (void)setTextLineProvider:(id)provider;	// 0x2b8559
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2b8d81
// converted property getter: - (id)textLineProvider;	// 0x2b8765
@end
