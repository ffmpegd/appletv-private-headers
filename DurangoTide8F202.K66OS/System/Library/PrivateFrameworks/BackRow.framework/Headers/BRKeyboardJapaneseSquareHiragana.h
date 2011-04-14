/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRKeyboardRomanSquare.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardJapaneseSquareHiragana : BRKeyboardRomanSquare {
}
- (CGSize)_actionKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x329115ad
- (float)_candidatesBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x32911451
- (CGSize)_candidatesBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x3291146d
- (id)_mainKeyRowPlane;	// 0x32910e49
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x32910ea1
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x32911605
- (float)_mainKeysVerticalSpacing;	// 0x32910e3d
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x329114c9
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x32910e2d
- (int)_numberOfMainKeyRows;	// 0x32910e29
- (int)_scrollDirectionForMainKeys;	// 0x32910e39
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x32910e45
- (float)_topMostUIElementGap:(id)gap resolutionScale:(float)scale;	// 0x329114ad
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x329110b1
- (id)actionKeysContainer;	// 0x329112e5
- (CGRect)candidatesBackgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x329113a5
- (id)name;	// 0x32910e1d
- (void)setFocusToDefaultGlyph;	// 0x32911059
- (void)setFocusToDefaultSwitchKeyboardGlyph:(id)defaultSwitchKeyboardGlyph;	// 0x32910f01
@end
