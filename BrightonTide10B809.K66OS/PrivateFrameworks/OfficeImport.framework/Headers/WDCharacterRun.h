/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties, NSMutableString;

@interface WDCharacterRun : WDRun {
	WDCharacterProperties *mProperties;	// 8 = 0x8
	NSMutableString *mString;	// 12 = 0xc
	BOOL mBinaryWriterContentFlag;	// 16 = 0x10
}
@property(assign) BOOL binaryWriterContentFlag;	// G=0x34a8bc09; S=0x34a8bc1d; converted property
@property(retain) id string;	// G=0x34901f05; S=0x348f0ced; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x348eef89
- (id)initWithParagraph:(id)paragraph string:(id)string;	// 0x34aaf271
- (void)appendString:(id)string;	// 0x348ef2a1
// converted property getter: - (BOOL)binaryWriterContentFlag;	// 0x34a8bc09
- (void)clearProperties;	// 0x34aaf219
- (void)clearString;	// 0x34aaf245
- (void)copyPropertiesFrom:(id)from;	// 0x34aaf2b1
- (void)dealloc;	// 0x34908cad
- (BOOL)isEmpty;	// 0x34aaf2ed
- (id)properties;	// 0x348ef2c1
- (void)removeLastCharacter:(unsigned short)character;	// 0x349322b1
- (int)runType;	// 0x34900a15
// converted property setter: - (void)setBinaryWriterContentFlag:(BOOL)flag;	// 0x34a8bc1d
- (void)setPropertiesForDocument;	// 0x34aaf1a9
// converted property setter: - (void)setString:(id)string;	// 0x348f0ced
// converted property getter: - (id)string;	// 0x34901f05
@end

