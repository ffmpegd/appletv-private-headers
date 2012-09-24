/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedMenuElement, NSString, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	ATVFeedElement *_preview;	// 12 = 0xc
	ATVFeedMenuElement *_menu;	// 16 = 0x10
	NSString *_listDescription;	// 20 = 0x14
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x153125; S=0x153135; @synthesize=_header
@property(retain, nonatomic) NSString *listDescription;	// G=0x153185; S=0x153195; @synthesize=_listDescription
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x153165; S=0x153175; @synthesize=_menu
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x153145; S=0x153155; @synthesize=_preview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x152ef1
- (void)dealloc;	// 0x1530ad
// declared property getter: - (id)header;	// 0x153125
// declared property getter: - (id)listDescription;	// 0x153185
// declared property getter: - (id)menu;	// 0x153165
// declared property getter: - (id)preview;	// 0x153145
// declared property setter: - (void)setHeader:(id)header;	// 0x153135
// declared property setter: - (void)setListDescription:(id)description;	// 0x153195
// declared property setter: - (void)setMenu:(id)menu;	// 0x153175
// declared property setter: - (void)setPreview:(id)preview;	// 0x153155
@end
