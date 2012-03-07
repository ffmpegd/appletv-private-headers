/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuItemElement : ATVFeedElement {
@private
	NSString *_label;	// 28 = 0x1c
	NSString *_label2;	// 32 = 0x20
	NSString *_rightLabel;	// 36 = 0x24
	ATVFeedImageElement *_image;	// 40 = 0x28
	ATVFeedImageElement *_defaultImage;	// 44 = 0x2c
	ATVFeedElement *_preview;	// 48 = 0x30
	NSArray *_accessories;	// 52 = 0x34
	int _ordinal;	// 56 = 0x38
	int _maxOrdinalDigits;	// 60 = 0x3c
}
@property(retain, nonatomic) NSArray *accessories;	// G=0x332ffb2d; S=0x332ffb3d; @synthesize=_accessories
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x332ffac5; S=0x332ffad5; @synthesize=_defaultImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x332ffa91; S=0x332ffaa1; @synthesize=_image
@property(copy, nonatomic) NSString *label;	// G=0x332ff9f5; S=0x332ffa05; @synthesize=_label
@property(copy, nonatomic) NSString *label2;	// G=0x332ffa29; S=0x332ffa39; @synthesize=_label2
@property(assign, nonatomic) int maxOrdinalDigits;	// G=0x332ffb81; S=0x332ffb91; @synthesize=_maxOrdinalDigits
@property(assign, nonatomic) int ordinal;	// G=0x332ffb61; S=0x332ffb71; @synthesize=_ordinal
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x332ffaf9; S=0x332ffb09; @synthesize=_preview
@property(copy, nonatomic) NSString *rightLabel;	// G=0x332ffa5d; S=0x332ffa6d; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x332ff56d
// declared property getter: - (id)accessories;	// 0x332ffb2d
- (void)dealloc;	// 0x332ff931
// declared property getter: - (id)defaultImage;	// 0x332ffac5
// declared property getter: - (id)image;	// 0x332ffa91
// declared property getter: - (id)label;	// 0x332ff9f5
// declared property getter: - (id)label2;	// 0x332ffa29
// declared property getter: - (int)maxOrdinalDigits;	// 0x332ffb81
// declared property getter: - (int)ordinal;	// 0x332ffb61
// declared property getter: - (id)preview;	// 0x332ffaf9
// declared property getter: - (id)rightLabel;	// 0x332ffa5d
// declared property setter: - (void)setAccessories:(id)accessories;	// 0x332ffb3d
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x332ffad5
// declared property setter: - (void)setImage:(id)image;	// 0x332ffaa1
// declared property setter: - (void)setLabel2:(id)a2;	// 0x332ffa39
// declared property setter: - (void)setLabel:(id)label;	// 0x332ffa05
// declared property setter: - (void)setMaxOrdinalDigits:(int)digits;	// 0x332ffb91
// declared property setter: - (void)setOrdinal:(int)ordinal;	// 0x332ffb71
// declared property setter: - (void)setPreview:(id)preview;	// 0x332ffb09
// declared property setter: - (void)setRightLabel:(id)label;	// 0x332ffa6d
@end

