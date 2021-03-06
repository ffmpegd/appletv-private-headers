/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, BRPanelControl;

__attribute__((visibility("hidden")))
@interface ATVPhotoMetadataHeaderView : BRControl {
	NSArray *_photoBadgeViews;	// 84 = 0x54
	XXStruct_40SSZC _imageRenderSize;	// 88 = 0x58
	BRPanelControl *_badgesPanel;	// 96 = 0x60
	XXStruct_qlg9jA _preferredHeight;	// 100 = 0x64
	BOOL _disableDisplay;	// 104 = 0x68
	BRControl *_actionsView;	// 108 = 0x6c
}
@property(retain, nonatomic) BRControl *actionsView;	// G=0x1275a9; S=0x126fa9; @synthesize=_actionsView
@property(retain, nonatomic) BRPanelControl *badgesPanel;	// G=0x127535; S=0x127545; @synthesize=_badgesPanel
@property(assign, nonatomic) BOOL disableDisplay;	// G=0x127599; S=0x126c59; @synthesize=_disableDisplay
@property(assign, nonatomic) XXStruct_40SSZC imageRenderSize;	// G=0x12751d; S=0x126c0d; @synthesize=_imageRenderSize
@property(retain, nonatomic) NSArray *photoBadgeViews;	// G=0x12750d; S=0x126d6d; @synthesize=_photoBadgeViews
@property(assign, nonatomic) XXStruct_qlg9jA preferredHeight;	// G=0x12756d; S=0x127589; @synthesize=_preferredHeight
- (id)init;	// 0x126ba9
- (void).cxx_destruct;	// 0x1275b9
// declared property getter: - (id)actionsView;	// 0x1275a9
// declared property getter: - (id)badgesPanel;	// 0x127535
// declared property getter: - (BOOL)disableDisplay;	// 0x127599
// declared property getter: - (XXStruct_40SSZC)imageRenderSize;	// 0x12751d
- (void)layoutSubcontrols;	// 0x127155
// declared property getter: - (id)photoBadgeViews;	// 0x12750d
// declared property getter: - (XXStruct_qlg9jA)preferredHeight;	// 0x12756d
// declared property setter: - (void)setActionsView:(id)view;	// 0x126fa9
// declared property setter: - (void)setBadgesPanel:(id)panel;	// 0x127545
// declared property setter: - (void)setDisableDisplay:(BOOL)display;	// 0x126c59
// declared property setter: - (void)setImageRenderSize:(XXStruct_40SSZC)size;	// 0x126c0d
// declared property setter: - (void)setPhotoBadgeViews:(id)views;	// 0x126d6d
// declared property setter: - (void)setPreferredHeight:(XXStruct_qlg9jA)height;	// 0x127589
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x127049
@end

