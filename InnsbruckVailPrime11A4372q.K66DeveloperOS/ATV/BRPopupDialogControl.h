/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "ATVAutoDismissable.h"

@class NSString, BRMultiPartWidgetLayer;

__attribute__((visibility("hidden")))
@interface BRPopupDialogControl : BRControl <ATVAutoDismissable> {
	BRControl *_contentView;	// 84 = 0x54
	BRMultiPartWidgetLayer *_border;	// 88 = 0x58
	NSString *_identifier;	// 92 = 0x5c
	XXStruct_40SSZC _extraInsetSize;	// 96 = 0x60
}
@property(retain, nonatomic) BRControl *contentView;	// G=0x4ae4f5; S=0x4ae509; 
@property(assign, nonatomic) XXStruct_40SSZC extraInsetSize;	// G=0x4ae9a9; S=0x4ae4c1; @synthesize=_extraInsetSize
- (id)initWithIdentifier:(id)identifier;	// 0x4ae0a1
- (void).cxx_destruct;	// 0x4ae9c1
- (id)_computeFramesForSize:(CGSize)size;	// 0x4ae581
- (void)_handleWindowMaxBoundsChanged;	// 0x4ae4e5
- (BOOL)autoDismiss;	// 0x4ae489
// declared property getter: - (id)contentView;	// 0x4ae4f5
- (void)dealloc;	// 0x4ae419
// declared property getter: - (XXStruct_40SSZC)extraInsetSize;	// 0x4ae9a9
- (void)layoutSubcontrols;	// 0x4ae935
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x4ae485
// declared property setter: - (void)setContentView:(id)view;	// 0x4ae509
// declared property setter: - (void)setExtraInsetSize:(XXStruct_40SSZC)size;	// 0x4ae4c1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x4ae8d9
@end

