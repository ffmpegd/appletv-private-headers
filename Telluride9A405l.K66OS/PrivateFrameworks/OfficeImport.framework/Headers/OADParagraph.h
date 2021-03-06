/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, OADCharacterProperties, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADParagraph : NSObject {
@private
	OADParagraphProperties *mProperties;	// 4 = 0x4
	NSMutableArray *mTextRuns;	// 8 = 0x8
	OADCharacterProperties *mParagraphEndCharacterProperties;	// 12 = 0xc
}
@property(retain) id paragraphEndCharacterProperties;	// G=0x30be7485; S=0x30e85ef5; converted property
@property(retain) id properties;	// G=0x30be6d35; S=0x30e85fed; converted property
- (id)init;	// 0x30c61a01
- (id)addDateTimeField;	// 0x30c65ec5
- (id)addFooterField;	// 0x30c663c9
- (id)addGenericTextField;	// 0x30e85f35
- (id)addRegularTextRun;	// 0x30c63db9
- (id)addSlideNumberField;	// 0x30ca4b01
- (id)addTextLineBreak;	// 0x30c63f29
- (void)applyProperties:(id)properties;	// 0x30e85e19
- (id)bulletCharacterProperties;	// 0x30e85e7d
- (void)dealloc;	// 0x30c6e395
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x30c66229
- (BOOL)hasBulletCharacterProperties;	// 0x30e85ea9
- (BOOL)isEmpty;	// 0x30be7a4d
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x30be7485
- (id)plainText;	// 0x30db0071
// converted property getter: - (id)properties;	// 0x30be6d35
- (void)removeAllTextRuns;	// 0x30e85fcd
- (void)removeUnnecessaryOverrides;	// 0x30c67ca5
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x30e85ef5
- (void)setParentTextListStyle:(id)style;	// 0x30c66965
// converted property setter: - (void)setProperties:(id)properties;	// 0x30e85fed
- (id)textRunAtIndex:(unsigned)index;	// 0x30be7acd
- (unsigned)textRunCount;	// 0x30be7aad
@end

