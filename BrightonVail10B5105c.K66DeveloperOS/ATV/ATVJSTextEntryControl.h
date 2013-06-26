/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRMerchant, BRImage, NSString, ATVProxyViewController;

__attribute__((visibility("hidden")))
@interface ATVJSTextEntryControl : XXUnknownSuperclass {
	NSString *_loadingImageID;	// 4 = 0x4
	BRImage *_image;	// 8 = 0x8
	ATVProxyViewController *_proxyViewController;	// 12 = 0xc
	BRMerchant *_merchant;	// 16 = 0x10
	int _textEntryStyle;	// 20 = 0x14
	BOOL _hideText;	// 24 = 0x18
	NSString *_type;	// 28 = 0x1c
	NSString *_title;	// 32 = 0x20
	NSString *_instructions;	// 36 = 0x24
	NSString *_label;	// 40 = 0x28
	NSString *_footnote;	// 44 = 0x2c
	NSString *_defaultValue;	// 48 = 0x30
	NSString *_imageURL;	// 52 = 0x34
	id _submitBlock;	// 56 = 0x38
	id _cancelBlock;	// 60 = 0x3c
}
@property(copy, nonatomic) id cancelBlock;	// G=0x171e01; S=0x171e15; @synthesize=_cancelBlock
@property(retain, nonatomic) NSString *defaultValue;	// G=0x171d9d; S=0x171dad; @synthesize=_defaultValue
@property(retain, nonatomic) NSString *footnote;	// G=0x171d7d; S=0x171d8d; @synthesize=_footnote
@property(assign, nonatomic) BOOL hideText;	// G=0x171cdd; S=0x171ced; @synthesize=_hideText
@property(retain, nonatomic) NSString *imageURL;	// G=0x171dbd; S=0x171dcd; @synthesize=_imageURL
@property(retain, nonatomic) NSString *instructions;	// G=0x171d3d; S=0x171d4d; @synthesize=_instructions
@property(retain, nonatomic) NSString *label;	// G=0x171d5d; S=0x171d6d; @synthesize=_label
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x171c9d; S=0x171cad; @synthesize=_merchant
@property(readonly, assign, nonatomic) id onCancel;	// G=0x171a61; @dynamic
@property(readonly, assign, nonatomic) id onLoad;	// G=0x1712e9; @dynamic
@property(readonly, assign, nonatomic) id onLoadCompletion;	// G=0x17150d; @dynamic
@property(assign, nonatomic) ATVProxyViewController *proxyViewController;	// G=0x171c8d; S=0x1712d9; @synthesize=_proxyViewController
@property(copy, nonatomic) id submitBlock;	// G=0x171ddd; S=0x171df1; @synthesize=_submitBlock
@property(assign, nonatomic) int textEntryStyle;	// G=0x171cbd; S=0x171ccd; @synthesize=_textEntryStyle
@property(retain, nonatomic) NSString *title;	// G=0x171d1d; S=0x171d2d; @synthesize=_title
@property(retain, nonatomic) NSString *type;	// G=0x171cfd; S=0x171d0d; @synthesize=_type
- (void)_imageLoadFailed:(id)failed;	// 0x171bf9
- (void)_imageLoaded:(id)loaded;	// 0x171af9
// declared property getter: - (id)cancelBlock;	// 0x171e01
- (void)dealloc;	// 0x171181
// declared property getter: - (id)defaultValue;	// 0x171d9d
// declared property getter: - (id)footnote;	// 0x171d7d
// declared property getter: - (BOOL)hideText;	// 0x171cdd
// declared property getter: - (id)imageURL;	// 0x171dbd
// declared property getter: - (id)instructions;	// 0x171d3d
// declared property getter: - (id)label;	// 0x171d5d
// declared property getter: - (id)merchant;	// 0x171c9d
// declared property getter: - (id)onCancel;	// 0x171a61
// declared property getter: - (id)onLoad;	// 0x1712e9
// declared property getter: - (id)onLoadCompletion;	// 0x17150d
// declared property getter: - (id)proxyViewController;	// 0x171c8d
// declared property setter: - (void)setCancelBlock:(id)block;	// 0x171e15
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x171dad
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x171d8d
// declared property setter: - (void)setHideText:(BOOL)text;	// 0x171ced
// declared property setter: - (void)setImageURL:(id)url;	// 0x171dcd
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x171d4d
// declared property setter: - (void)setLabel:(id)label;	// 0x171d6d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x171cad
// declared property setter: - (void)setProxyViewController:(id)controller;	// 0x1712d9
// declared property setter: - (void)setSubmitBlock:(id)block;	// 0x171df1
// declared property setter: - (void)setTextEntryStyle:(int)style;	// 0x171ccd
// declared property setter: - (void)setTitle:(id)title;	// 0x171d2d
// declared property setter: - (void)setType:(id)type;	// 0x171d0d
// declared property getter: - (id)submitBlock;	// 0x171ddd
// declared property getter: - (int)textEntryStyle;	// 0x171cbd
// declared property getter: - (id)title;	// 0x171d1d
// declared property getter: - (id)type;	// 0x171cfd
@end
