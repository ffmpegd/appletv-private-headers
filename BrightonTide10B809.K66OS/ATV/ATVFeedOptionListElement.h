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
@property(assign, nonatomic) BOOL autoSelectSingleItem;	// G=0x160259; S=0x160269; @synthesize=_autoSelectSingleItem
@property(copy, nonatomic) NSString *footnote;	// G=0x160235; S=0x160249; @synthesize=_footnote
@property(retain, nonatomic) NSArray *items;	// G=0x160279; S=0x160289; @synthesize=_items
@property(copy, nonatomic) NSString *title;	// G=0x160211; S=0x160225; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15ff65
// declared property getter: - (BOOL)autoSelectSingleItem;	// 0x160259
- (void)dealloc;	// 0x160199
// declared property getter: - (id)footnote;	// 0x160235
// declared property getter: - (id)items;	// 0x160279
// declared property setter: - (void)setAutoSelectSingleItem:(BOOL)item;	// 0x160269
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x160249
// declared property setter: - (void)setItems:(id)items;	// 0x160289
// declared property setter: - (void)setTitle:(id)title;	// 0x160225
// declared property getter: - (id)title;	// 0x160211
@end

