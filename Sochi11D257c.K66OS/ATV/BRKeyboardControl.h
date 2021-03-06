/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRSpacerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardControl : BRControl {
	BRControl *_mainKeysContainer;	// 84 = 0x54
	BRSpacerControl *_verticalSpacer;	// 88 = 0x58
	BRControl *_actionKeysContainer;	// 92 = 0x5c
}
@property(retain) BRControl *actionKeysContainer;	// G=0x3c1859; S=0x3c1869; converted property
@property(retain) id focusedKeyControl;	// G=0x3c1971; S=0x3c19d1; converted property
@property(readonly, retain) BRControl *mainKeysContainer;	// G=0x3c1849; converted property
+ (id)keyboardControlWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x3c13b5
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x3c1405
// converted property getter: - (id)actionKeysContainer;	// 0x3c1859
- (void)dealloc;	// 0x3c14f1
- (id)defaultKeyControl;	// 0x3c18dd
- (BOOL)focusIsAtRightEdge;	// 0x3c1efd
// converted property getter: - (id)focusedKeyControl;	// 0x3c1971
- (CGPoint)focusedPoint;	// 0x3c1b59
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x3c1e11
- (void)layoutSubcontrols;	// 0x3c1569
// converted property getter: - (id)mainKeysContainer;	// 0x3c1849
// converted property setter: - (void)setActionKeysContainer:(id)container;	// 0x3c1869
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3c1add
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x3c19d1
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x3c1c89
- (void)setTargetTextEntryControl:(id)control;	// 0x3c2069
- (void)setTargetTextField:(id)field;	// 0x3c2065
- (void)setVerticalSpacing:(float)spacing;	// 0x3c1935
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3c1755
@end

