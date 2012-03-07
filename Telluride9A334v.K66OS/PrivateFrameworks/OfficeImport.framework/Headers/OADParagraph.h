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
@property(retain) id paragraphEndCharacterProperties;	// G=0x354e6485; S=0x35784ef5; converted property
@property(retain) id properties;	// G=0x354e5d35; S=0x35784fed; converted property
- (id)init;	// 0x35560a01
- (id)addDateTimeField;	// 0x35564ec5
- (id)addFooterField;	// 0x355653c9
- (id)addGenericTextField;	// 0x35784f35
- (id)addRegularTextRun;	// 0x35562db9
- (id)addSlideNumberField;	// 0x355a3b01
- (id)addTextLineBreak;	// 0x35562f29
- (void)applyProperties:(id)properties;	// 0x35784e19
- (id)bulletCharacterProperties;	// 0x35784e7d
- (void)dealloc;	// 0x3556d395
- (id)findFirstTextRunOfClass:(Class)aClass;	// 0x35565229
- (BOOL)hasBulletCharacterProperties;	// 0x35784ea9
- (BOOL)isEmpty;	// 0x354e6a4d
// converted property getter: - (id)paragraphEndCharacterProperties;	// 0x354e6485
- (id)plainText;	// 0x356af071
// converted property getter: - (id)properties;	// 0x354e5d35
- (void)removeAllTextRuns;	// 0x35784fcd
- (void)removeUnnecessaryOverrides;	// 0x35566ca5
// converted property setter: - (void)setParagraphEndCharacterProperties:(id)properties;	// 0x35784ef5
- (void)setParentTextListStyle:(id)style;	// 0x35565965
// converted property setter: - (void)setProperties:(id)properties;	// 0x35784fed
- (id)textRunAtIndex:(unsigned)index;	// 0x354e6acd
- (unsigned)textRunCount;	// 0x354e6aad
@end

