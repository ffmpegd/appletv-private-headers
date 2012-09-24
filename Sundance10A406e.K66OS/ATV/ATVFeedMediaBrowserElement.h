/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderWithCountAndButtonsElement, NSArray, NSString, ATVFeedInitialSelectionElement;

__attribute__((visibility("hidden")))
@interface ATVFeedMediaBrowserElement : ATVFeedRootElement {
	NSString *_gridLayout;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
	ATVFeedInitialSelectionElement *_initialSelection;	// 16 = 0x10
	ATVFeedHeaderWithCountAndButtonsElement *_header;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *gridLayout;	// G=0x3dd5c9; S=0x3dd5d9; @synthesize=_gridLayout
@property(retain, nonatomic) ATVFeedHeaderWithCountAndButtonsElement *header;	// G=0x3dd671; S=0x3dd681; @synthesize=_header
@property(retain, nonatomic) ATVFeedInitialSelectionElement *initialSelection;	// G=0x3dd639; S=0x3dd649; @synthesize=_initialSelection
@property(retain, nonatomic) NSArray *items;	// G=0x3dd601; S=0x3dd611; @synthesize=_items
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3dd2a9
- (void).cxx_destruct;	// 0x3dd6a9
// declared property getter: - (id)gridLayout;	// 0x3dd5c9
// declared property getter: - (id)header;	// 0x3dd671
// declared property getter: - (id)initialSelection;	// 0x3dd639
// declared property getter: - (id)items;	// 0x3dd601
// declared property setter: - (void)setGridLayout:(id)layout;	// 0x3dd5d9
// declared property setter: - (void)setHeader:(id)header;	// 0x3dd681
// declared property setter: - (void)setInitialSelection:(id)selection;	// 0x3dd649
// declared property setter: - (void)setItems:(id)items;	// 0x3dd611
@end
