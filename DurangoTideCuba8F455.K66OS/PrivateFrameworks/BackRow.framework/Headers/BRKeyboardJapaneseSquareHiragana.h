/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRKeyboardRomanSquare.h"
#import "BackRow-Structs.h"


__attribute__((visibility("hidden")))
@interface BRKeyboardJapaneseSquareHiragana : BRKeyboardRomanSquare {
}
- (CGSize)_actionKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x32f8556d
- (float)_candidatesBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x32f85411
- (CGSize)_candidatesBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x32f8542d
- (id)_mainKeyRowPlane;	// 0x32f84e09
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x32f84e61
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x32f855c5
- (float)_mainKeysVerticalSpacing;	// 0x32f84dfd
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x32f85489
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x32f84ded
- (int)_numberOfMainKeyRows;	// 0x32f84de9
- (int)_scrollDirectionForMainKeys;	// 0x32f84df9
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x32f84e05
- (float)_topMostUIElementGap:(id)gap resolutionScale:(float)scale;	// 0x32f8546d
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x32f85071
- (id)actionKeysContainer;	// 0x32f852a5
- (CGRect)candidatesBackgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x32f85365
- (id)name;	// 0x32f84ddd
- (void)setFocusToDefaultGlyph;	// 0x32f85019
- (void)setFocusToDefaultSwitchKeyboardGlyph:(id)defaultSwitchKeyboardGlyph;	// 0x32f84ec1
@end

