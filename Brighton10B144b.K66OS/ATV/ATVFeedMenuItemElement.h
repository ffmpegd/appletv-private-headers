/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuItemElement : ATVFeedElement {
	NSString *_label;	// 4 = 0x4
	NSString *_label2;	// 8 = 0x8
	NSString *_rightLabel;	// 12 = 0xc
	ATVFeedImageElement *_image;	// 16 = 0x10
	ATVFeedImageElement *_defaultImage;	// 20 = 0x14
	ATVFeedElement *_preview;	// 24 = 0x18
	NSArray *_accessories;	// 28 = 0x1c
	int _ordinal;	// 32 = 0x20
	int _maxOrdinalDigits;	// 36 = 0x24
	BOOL _dimmed;	// 40 = 0x28
}
@property(retain, nonatomic) NSArray *accessories;	// G=0x165985; S=0x165995; @synthesize=_accessories
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x165945; S=0x165955; @synthesize=_defaultImage
@property(assign, nonatomic) BOOL dimmed;	// G=0x1659e5; S=0x1659f5; @synthesize=_dimmed
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x165925; S=0x165935; @synthesize=_image
@property(copy, nonatomic) NSString *label;	// G=0x1658b9; S=0x1658cd; @synthesize=_label
@property(copy, nonatomic) NSString *label2;	// G=0x1658dd; S=0x1658f1; @synthesize=_label2
@property(assign, nonatomic) int maxOrdinalDigits;	// G=0x1659c5; S=0x1659d5; @synthesize=_maxOrdinalDigits
@property(assign, nonatomic) int ordinal;	// G=0x1659a5; S=0x1659b5; @synthesize=_ordinal
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x165965; S=0x165975; @synthesize=_preview
@property(copy, nonatomic) NSString *rightLabel;	// G=0x165901; S=0x165915; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1653d9
// declared property getter: - (id)accessories;	// 0x165985
- (void)dealloc;	// 0x1657f1
// declared property getter: - (id)defaultImage;	// 0x165945
// declared property getter: - (BOOL)dimmed;	// 0x1659e5
// declared property getter: - (id)image;	// 0x165925
// declared property getter: - (id)label;	// 0x1658b9
// declared property getter: - (id)label2;	// 0x1658dd
// declared property getter: - (int)maxOrdinalDigits;	// 0x1659c5
// declared property getter: - (int)ordinal;	// 0x1659a5
// declared property getter: - (id)preview;	// 0x165965
// declared property getter: - (id)rightLabel;	// 0x165901
// declared property setter: - (void)setAccessories:(id)accessories;	// 0x165995
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x165955
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x1659f5
// declared property setter: - (void)setImage:(id)image;	// 0x165935
// declared property setter: - (void)setLabel2:(id)a2;	// 0x1658f1
// declared property setter: - (void)setLabel:(id)label;	// 0x1658cd
// declared property setter: - (void)setMaxOrdinalDigits:(int)digits;	// 0x1659d5
// declared property setter: - (void)setOrdinal:(int)ordinal;	// 0x1659b5
// declared property setter: - (void)setPreview:(id)preview;	// 0x165975
// declared property setter: - (void)setRightLabel:(id)label;	// 0x165915
@end
