/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedShelfElement, NSString, ATVFeedGenericCollectionElement, ATVFeedTableElement, ATVFeedImageElement, ATVFeedDividerElement;

__attribute__((visibility("hidden")))
@interface ATVFeedItemDetailElement : ATVFeedRootElement {
	BOOL _verticallyCentered;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_subtitle;	// 12 = 0xc
	ATVFeedImageElement *_image;	// 16 = 0x10
	ATVFeedImageElement *_defaultImage;	// 20 = 0x14
	ATVFeedImageElement *_rightImage;	// 24 = 0x18
	NSString *_rating;	// 28 = 0x1c
	NSString *_summary;	// 32 = 0x20
	NSString *_footnote;	// 36 = 0x24
	ATVFeedTableElement *_table;	// 40 = 0x28
	ATVFeedShelfElement *_centerShelf;	// 44 = 0x2c
	ATVFeedDividerElement *_divider;	// 48 = 0x30
	ATVFeedShelfElement *_bottomShelf;	// 52 = 0x34
	ATVFeedGenericCollectionElement *_moreInfo;	// 56 = 0x38
}
@property(retain, nonatomic) ATVFeedShelfElement *bottomShelf;	// G=0x115d45; S=0x115d55; @synthesize=_bottomShelf
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x115cd5; S=0x115ce5; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedImageElement *defaultImage;	// G=0x115bc1; S=0x115bd1; @synthesize=_defaultImage
@property(retain, nonatomic) ATVFeedDividerElement *divider;	// G=0x115d0d; S=0x115d1d; @synthesize=_divider
@property(copy, nonatomic) NSString *footnote;	// G=0x115c79; S=0x115c8d; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x115b89; S=0x115b99; @synthesize=_image
@property(retain, nonatomic) ATVFeedGenericCollectionElement *moreInfo;	// G=0x115d7d; S=0x115d8d; @synthesize=_moreInfo
@property(copy, nonatomic) NSString *rating;	// G=0x115c31; S=0x115c45; @synthesize=_rating
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x115bf9; S=0x115c09; @synthesize=_rightImage
@property(copy, nonatomic) NSString *subtitle;	// G=0x115b65; S=0x115b79; @synthesize=_subtitle
@property(copy, nonatomic) NSString *summary;	// G=0x115c55; S=0x115c69; @synthesize=_summary
@property(retain, nonatomic) ATVFeedTableElement *table;	// G=0x115c9d; S=0x115cad; @synthesize=_table
@property(copy, nonatomic) NSString *title;	// G=0x115b41; S=0x115b55; @synthesize=_title
@property(assign, nonatomic) BOOL verticallyCentered;	// G=0x115db5; S=0x115dc5; @synthesize=_verticallyCentered
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x11538d
- (void).cxx_destruct;	// 0x115dd5
// declared property getter: - (id)bottomShelf;	// 0x115d45
// declared property getter: - (id)centerShelf;	// 0x115cd5
// declared property getter: - (id)defaultImage;	// 0x115bc1
// declared property getter: - (id)divider;	// 0x115d0d
// declared property getter: - (id)footnote;	// 0x115c79
// declared property getter: - (id)image;	// 0x115b89
// declared property getter: - (id)moreInfo;	// 0x115d7d
// declared property getter: - (id)rating;	// 0x115c31
// declared property getter: - (id)rightImage;	// 0x115bf9
// declared property setter: - (void)setBottomShelf:(id)shelf;	// 0x115d55
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x115ce5
// declared property setter: - (void)setDefaultImage:(id)image;	// 0x115bd1
// declared property setter: - (void)setDivider:(id)divider;	// 0x115d1d
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x115c8d
// declared property setter: - (void)setImage:(id)image;	// 0x115b99
// declared property setter: - (void)setMoreInfo:(id)info;	// 0x115d8d
// declared property setter: - (void)setRating:(id)rating;	// 0x115c45
// declared property setter: - (void)setRightImage:(id)image;	// 0x115c09
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x115b79
// declared property setter: - (void)setSummary:(id)summary;	// 0x115c69
// declared property setter: - (void)setTable:(id)table;	// 0x115cad
// declared property setter: - (void)setTitle:(id)title;	// 0x115b55
// declared property setter: - (void)setVerticallyCentered:(BOOL)centered;	// 0x115dc5
// declared property getter: - (id)subtitle;	// 0x115b65
// declared property getter: - (id)summary;	// 0x115c55
// declared property getter: - (id)table;	// 0x115c9d
// declared property getter: - (id)title;	// 0x115b41
// declared property getter: - (BOOL)verticallyCentered;	// 0x115db5
@end

