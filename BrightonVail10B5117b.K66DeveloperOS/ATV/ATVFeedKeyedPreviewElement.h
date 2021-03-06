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
	int _likeCount;	// 36 = 0x24
	int _dislikeCount;	// 40 = 0x28
}
@property(assign, nonatomic) int dislikeCount;	// G=0x15f611; S=0x15f621; @synthesize=_dislikeCount
@property(copy, nonatomic) NSString *footnote;	// G=0x15f549; S=0x15f55d; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x15f591; S=0x15f5a1; @synthesize=_image
@property(assign, nonatomic) int likeCount;	// G=0x15f5f1; S=0x15f601; @synthesize=_likeCount
@property(retain, nonatomic) NSArray *metadataKeys;	// G=0x15f5b1; S=0x15f5c1; @synthesize=_metadataKeys
@property(retain, nonatomic) NSArray *metadataValues;	// G=0x15f5d1; S=0x15f5e1; @synthesize=_metadataValues
@property(copy, nonatomic) NSString *rating;	// G=0x15f56d; S=0x15f581; @synthesize=_rating
@property(copy, nonatomic) NSString *rightLabel;	// G=0x15f501; S=0x15f515; @synthesize=_rightLabel
@property(copy, nonatomic) NSString *summary;	// G=0x15f525; S=0x15f539; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x15f4dd; S=0x15f4f1; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15efa5
- (void)dealloc;	// 0x15f401
// declared property getter: - (int)dislikeCount;	// 0x15f611
// declared property getter: - (id)footnote;	// 0x15f549
// declared property getter: - (id)image;	// 0x15f591
// declared property getter: - (int)likeCount;	// 0x15f5f1
// declared property getter: - (id)metadataKeys;	// 0x15f5b1
// declared property getter: - (id)metadataValues;	// 0x15f5d1
// declared property getter: - (id)rating;	// 0x15f56d
// declared property getter: - (id)rightLabel;	// 0x15f501
// declared property setter: - (void)setDislikeCount:(int)count;	// 0x15f621
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x15f55d
// declared property setter: - (void)setImage:(id)image;	// 0x15f5a1
// declared property setter: - (void)setLikeCount:(int)count;	// 0x15f601
// declared property setter: - (void)setMetadataKeys:(id)keys;	// 0x15f5c1
// declared property setter: - (void)setMetadataValues:(id)values;	// 0x15f5e1
// declared property setter: - (void)setRating:(id)rating;	// 0x15f581
// declared property setter: - (void)setRightLabel:(id)label;	// 0x15f515
// declared property setter: - (void)setSummary:(id)summary;	// 0x15f539
// declared property setter: - (void)setTitle:(id)title;	// 0x15f4f1
// declared property getter: - (id)summary;	// 0x15f525
// declared property getter: - (id)title;	// 0x15f4dd
@end

