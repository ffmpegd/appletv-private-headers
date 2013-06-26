/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedOptionListElement : ATVFeedRootElement {
	NSString *_title;	// 8 = 0x8
	NSString *_footnote;	// 12 = 0xc
	BOOL _autoSelectSingleItem;	// 16 = 0x10
	NSArray *_items;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL autoSelectSingleItem;	// G=0x15ffa9; S=0x15ffb9; @synthesize=_autoSelectSingleItem
@property(copy, nonatomic) NSString *footnote;	// G=0x15ff85; S=0x15ff99; @synthesize=_footnote
@property(retain, nonatomic) NSArray *items;	// G=0x15ffc9; S=0x15ffd9; @synthesize=_items
@property(copy, nonatomic) NSString *title;	// G=0x15ff61; S=0x15ff75; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15fcb5
// declared property getter: - (BOOL)autoSelectSingleItem;	// 0x15ffa9
- (void)dealloc;	// 0x15fee9
// declared property getter: - (id)footnote;	// 0x15ff85
// declared property getter: - (id)items;	// 0x15ffc9
// declared property setter: - (void)setAutoSelectSingleItem:(BOOL)item;	// 0x15ffb9
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x15ff99
// declared property setter: - (void)setItems:(id)items;	// 0x15ffd9
// declared property setter: - (void)setTitle:(id)title;	// 0x15ff75
// declared property getter: - (id)title;	// 0x15ff61
@end
