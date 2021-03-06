/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedMenuElement, ATVFeedShelfElement, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfListElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	ATVFeedShelfElement *_centerShelf;	// 12 = 0xc
	ATVFeedMenuElement *_menu;	// 16 = 0x10
}
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x1533c1; S=0x1533d1; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x1533a1; S=0x1533b1; @synthesize=_header
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x1533e1; S=0x1533f1; @synthesize=_menu
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1531a5
// declared property getter: - (id)centerShelf;	// 0x1533c1
- (void)dealloc;	// 0x153329
// declared property getter: - (id)header;	// 0x1533a1
// declared property getter: - (id)menu;	// 0x1533e1
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x1533d1
// declared property setter: - (void)setHeader:(id)header;	// 0x1533b1
// declared property setter: - (void)setMenu:(id)menu;	// 0x1533f1
@end

