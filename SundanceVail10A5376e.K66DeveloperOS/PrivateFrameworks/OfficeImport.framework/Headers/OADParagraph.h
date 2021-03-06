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
@property(retain) id paragraphEndCharacterProperties;	// G=0x36f67159; S=0x3714a2b5; converted property
@property(retain) id properties;	// G=0x36f65c11; S=0x3714a1bd; converted property
- (id)init;	// 0x36f6578d
- (id)addDateTimeField;	// 0x37035591
- (id)addFooterField;	// 0x3705271d
- (id)addGenericTextField;	// 0x3714a219
- (id)addRegularTextRun;	// 0x36f66129
- (id)addSlideNumberField;	// 0x36f67191
- (id)addTextLineBreak;	// 0x36f71eed
- (void)applyProperties:(id)properties;	// 0x3714a36d
- (id)bulletCharacterProperties;	// 0x3714a341
- (void)dealloc;	// 0x36f84b49
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x37052a55
- (BOOL)hasBulletCharacterProperties;	// 0x3714a2f1
- (BOOL)isEmpty;	// 0x36f783fd
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x36f67159
- (id)plainText;	// 0x3705fedd
// converted property getter: - (id)properties;	// 0x36f65c11
- (void)removeAllTextRuns;	// 0x3714a1f9
- (void)removeUnnecessaryOverrides;	// 0x36f69c05
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x3714a2b5
- (void)setParentTextListStyle:(id)style;	// 0x36f679b1
// converted property setter: - (void)setProperties:(id)properties;	// 0x3714a1bd
- (id)textRunAtIndex:(unsigned)index;	// 0x36f662ad
- (unsigned)textRunCount;	// 0x36f66109
@end

