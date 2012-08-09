/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedKeyedPreviewElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_rightLabel;	// 8 = 0x8
	NSString *_summary;	// 12 = 0xc
	NSString *_footnote;	// 16 = 0x10
	NSString *_rating;	// 20 = 0x14
	ATVFeedImageElement *_image;	// 24 = 0x18
	NSArray *_metadataKeys;	// 28 = 0x1c
	NSArray *_metadataValues;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *footnote;	// G=0x14db85; S=0x14db99; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x14dbcd; S=0x14dbdd; @synthesize=_image
@property(retain, nonatomic) NSArray *metadataKeys;	// G=0x14dbed; S=0x14dbfd; @synthesize=_metadataKeys
@property(retain, nonatomic) NSArray *metadataValues;	// G=0x14dc0d; S=0x14dc1d; @synthesize=_metadataValues
@property(copy, nonatomic) NSString *rating;	// G=0x14dba9; S=0x14dbbd; @synthesize=_rating
@property(copy, nonatomic) NSString *rightLabel;	// G=0x14db3d; S=0x14db51; @synthesize=_rightLabel
@property(copy, nonatomic) NSString *summary;	// G=0x14db61; S=0x14db75; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x14db19; S=0x14db2d; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x14d6b1
- (void)dealloc;	// 0x14da3d
// declared property getter: - (id)footnote;	// 0x14db85
// declared property getter: - (id)image;	// 0x14dbcd
// declared property getter: - (id)metadataKeys;	// 0x14dbed
// declared property getter: - (id)metadataValues;	// 0x14dc0d
// declared property getter: - (id)rating;	// 0x14dba9
// declared property getter: - (id)rightLabel;	// 0x14db3d
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x14db99
// declared property setter: - (void)setImage:(id)image;	// 0x14dbdd
// declared property setter: - (void)setMetadataKeys:(id)keys;	// 0x14dbfd
// declared property setter: - (void)setMetadataValues:(id)values;	// 0x14dc1d
// declared property setter: - (void)setRating:(id)rating;	// 0x14dbbd
// declared property setter: - (void)setRightLabel:(id)label;	// 0x14db51
// declared property setter: - (void)setSummary:(id)summary;	// 0x14db75
// declared property setter: - (void)setTitle:(id)title;	// 0x14db2d
// declared property getter: - (id)summary;	// 0x14db61
// declared property getter: - (id)title;	// 0x14db19
@end
