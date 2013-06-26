/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"
#import "AppleTV-Structs.h"

@class NSString, BRWaitSpinnerControl, BRControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMediaMenuView : BRMenuView {
	BRControl *_preview;	// 112 = 0x70
	NSString *_previewLabel;	// 116 = 0x74
	BRControl *_listHeader;	// 120 = 0x78
	BRTextControl *_descriptionControl;	// 124 = 0x7c
	BOOL _headerCanExpandListWidth;	// 128 = 0x80
	BOOL _showListSpinner;	// 129 = 0x81
	XXStruct_qlg9jA _headerMaxWidth;	// 132 = 0x84
	XXStruct_qlg9jA _previewTrailingGap;	// 136 = 0x88
	XXStruct_qlg9jA _headerSpaceAbove;	// 140 = 0x8c
	XXStruct_qlg9jA _headerSpaceBelow;	// 144 = 0x90
	XXStruct_qlg9jA _previewOffsetX;	// 148 = 0x94
	XXStruct_qlg9jA _previewOffsetY;	// 152 = 0x98
	BRWaitSpinnerControl *_listSpinner;	// 156 = 0x9c
	BRTextControl *_listError;	// 160 = 0xa0
}
@property(assign, nonatomic) BOOL headerCanExpandListWidth;	// G=0x386a89; S=0x386a99; @synthesize=_headerCanExpandListWidth
@property(assign, nonatomic) XXStruct_qlg9jA headerMaxWidth;	// G=0x386a5d; S=0x386a79; @synthesize=_headerMaxWidth
@property(assign) XXStruct_qlg9jA headerSpaceAbove;	// G=0x386ad5; S=0x386aed; @synthesize=_headerSpaceAbove
@property(assign) XXStruct_qlg9jA headerSpaceBelow;	// G=0x386b05; S=0x386b1d; @synthesize=_headerSpaceBelow
@property(retain) id listDescription;	// G=0x385db1; S=0x385cc5; converted property
@property(assign, nonatomic) BRTextControl *listError;	// G=0x386bc5; S=0x386bd5; @synthesize=_listError
@property(retain) BRControl *listHeader;	// G=0x385cb5; S=0x385a45; converted property
@property(assign, nonatomic) BRWaitSpinnerControl *listSpinner;	// G=0x386ba5; S=0x386bb5; @synthesize=_listSpinner
@property(retain) BRControl *preview;	// G=0x3859d1; S=0x385931; converted property
@property(retain) NSString *previewLabel;	// G=0x385a35; S=0x3859e1; converted property
@property(assign) XXStruct_qlg9jA previewOffsetX;	// G=0x386b35; S=0x386b4d; @synthesize=_previewOffsetX
@property(assign) XXStruct_qlg9jA previewOffsetY;	// G=0x386b65; S=0x386b7d; @synthesize=_previewOffsetY
@property(assign, nonatomic) XXStruct_qlg9jA previewTrailingGap;	// G=0x386aa9; S=0x386ac5; @synthesize=_previewTrailingGap
@property(assign, nonatomic) BOOL showListSpinner;	// G=0x386b95; S=0x385de9; @synthesize=_showListSpinner
- (id)init;	// 0x385809
- (id)initWithListAlignment:(int)listAlignment;	// 0x38581d
- (BOOL)_listIsFocused;	// 0x386071
- (id)accessibilityLabel;	// 0x3869f5
- (id)accessibilityScreenContent;	// 0x386a3d
- (BOOL)brEventAction:(id)action;	// 0x385f75
- (void)dealloc;	// 0x3858b9
// declared property getter: - (BOOL)headerCanExpandListWidth;	// 0x386a89
// declared property getter: - (XXStruct_qlg9jA)headerMaxWidth;	// 0x386a5d
// declared property getter: - (XXStruct_qlg9jA)headerSpaceAbove;	// 0x386ad5
// declared property getter: - (XXStruct_qlg9jA)headerSpaceBelow;	// 0x386b05
- (void)layoutSubcontrols;	// 0x3860b1
// converted property getter: - (id)listDescription;	// 0x385db1
// declared property getter: - (id)listError;	// 0x386bc5
// converted property getter: - (id)listHeader;	// 0x385cb5
// declared property getter: - (id)listSpinner;	// 0x386ba5
// converted property getter: - (id)preview;	// 0x3859d1
// converted property getter: - (id)previewLabel;	// 0x385a35
// declared property getter: - (XXStruct_qlg9jA)previewOffsetX;	// 0x386b35
// declared property getter: - (XXStruct_qlg9jA)previewOffsetY;	// 0x386b65
// declared property getter: - (XXStruct_qlg9jA)previewTrailingGap;	// 0x386aa9
// declared property setter: - (void)setHeaderCanExpandListWidth:(BOOL)width;	// 0x386a99
// declared property setter: - (void)setHeaderMaxWidth:(XXStruct_qlg9jA)width;	// 0x386a79
// declared property setter: - (void)setHeaderSpaceAbove:(XXStruct_qlg9jA)above;	// 0x386aed
// declared property setter: - (void)setHeaderSpaceBelow:(XXStruct_qlg9jA)below;	// 0x386b1d
// converted property setter: - (void)setListDescription:(id)description;	// 0x385cc5
// declared property setter: - (void)setListError:(id)error;	// 0x386bd5
- (void)setListError:(id)error attributes:(id)attributes;	// 0x385e85
// converted property setter: - (void)setListHeader:(id)header;	// 0x385a45
// declared property setter: - (void)setListSpinner:(id)spinner;	// 0x386bb5
// converted property setter: - (void)setPreview:(id)preview;	// 0x385931
// converted property setter: - (void)setPreviewLabel:(id)label;	// 0x3859e1
// declared property setter: - (void)setPreviewOffsetX:(XXStruct_qlg9jA)x;	// 0x386b4d
// declared property setter: - (void)setPreviewOffsetY:(XXStruct_qlg9jA)y;	// 0x386b7d
// declared property setter: - (void)setPreviewTrailingGap:(XXStruct_qlg9jA)gap;	// 0x386ac5
// declared property setter: - (void)setShowListSpinner:(BOOL)spinner;	// 0x385de9
// declared property getter: - (BOOL)showListSpinner;	// 0x386b95
@end
