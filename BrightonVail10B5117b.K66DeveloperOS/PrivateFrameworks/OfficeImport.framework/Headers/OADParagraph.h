/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADCharacterProperties, OADParagraphProperties, NSMutableArray;

@interface OADParagraph : NSObject {
	OADParagraphProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mTextRuns;	// 8 = 0x8
	OADCharacterProperties *mParagraphEndCharacterProperties;	// 12 = 0xc
}
@property(retain) id paragraphEndCharacterProperties;	// G=0x34a47159; S=0x34c2a2b5; converted property
@property(retain) id properties;	// G=0x34a45c11; S=0x34c2a1bd; converted property
- (id)init;	// 0x34a4578d
- (id)addDateTimeField;	// 0x34b15591
- (id)addFooterField;	// 0x34b3271d
- (id)addGenericTextField;	// 0x34c2a219
- (id)addRegularTextRun;	// 0x34a46129
- (id)addSlideNumberField;	// 0x34a47191
- (id)addTextLineBreak;	// 0x34a51eed
- (void)applyProperties:(id)properties;	// 0x34c2a36d
- (id)bulletCharacterProperties;	// 0x34c2a341
- (void)dealloc;	// 0x34a64b49
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x34b32a55
- (BOOL)hasBulletCharacterProperties;	// 0x34c2a2f1
- (BOOL)isEmpty;	// 0x34a583fd
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x34a47159
- (id)plainText;	// 0x34b3fedd
// converted property getter: - (id)properties;	// 0x34a45c11
- (void)removeAllTextRuns;	// 0x34c2a1f9
- (void)removeUnnecessaryOverrides;	// 0x34a49c05
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x34c2a2b5
- (void)setParentTextListStyle:(id)style;	// 0x34a479b1
// converted property setter: - (void)setProperties:(id)properties;	// 0x34c2a1bd
- (id)textRunAtIndex:(unsigned)index;	// 0x34a462ad
- (unsigned)textRunCount;	// 0x34a46109
@end
