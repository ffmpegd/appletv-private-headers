/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRKeyboardControl.h"
#import "AppleTV-Structs.h"

@class NSArray, BRListView;

__attribute__((visibility("hidden")))
@interface BRKeyboardHistoryControl : BRKeyboardControl {
@private
	NSArray *_textEntryHistoryClients;	// 60 = 0x3c
	NSArray *_textEntryHistoryBehaviors;	// 64 = 0x40
	BRListView *_list;	// 68 = 0x44
	CGSize _preferredSize;	// 72 = 0x48
	float _listOriginXOffset;	// 80 = 0x50
	float _listWidth;	// 84 = 0x54
}
@property(retain) id focusedKeyControl;	// G=0x35e39529; S=0x35e3952d; converted property
- (id)initWithPreferredSize:(CGSize)preferredSize;	// 0x35e392a9
- (void)dealloc;	// 0x35e392f5
- (BOOL)focusIsAtRightEdge;	// 0x35e39525
// converted property getter: - (id)focusedKeyControl;	// 0x35e39529
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x35e39535
- (void)layoutSubcontrols;	// 0x35e39369
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x35e39531
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x35e3952d
- (void)setListOriginXOffset:(float)offset listWidth:(float)width;	// 0x35e394f5
- (void)setTextEntryHistoryClients:(id)clients textEntryBehaviors:(id)behaviors list:(id)list;	// 0x35e39455
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35e39439
@end

