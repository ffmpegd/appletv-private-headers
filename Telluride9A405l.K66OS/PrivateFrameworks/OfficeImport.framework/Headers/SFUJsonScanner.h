/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString, NSCharacterSet;

__attribute__((visibility("hidden")))
@interface SFUJsonScanner : NSObject {
@private
	NSString *mString;	// 4 = 0x4
	unsigned short *mCharacters;	// 8 = 0x8
	unsigned mLength;	// 12 = 0xc
	unsigned mOffset;	// 16 = 0x10
	NSCharacterSet *mWhitespaceCharacterSet;	// 20 = 0x14
	NSCharacterSet *mDecimalDigitCharacterSet;	// 24 = 0x18
}
- (id)initWithString:(id)string;	// 0x30ec2181
- (void)appendCharactersInRange:(NSRange)range toString:(id)string;	// 0x30ec1f59
- (void)dealloc;	// 0x30ec20f9
- (unsigned short)nextCharacter;	// 0x30ec1661
- (id)parseArray;	// 0x30ec1b39
- (BOOL)parseConstantString:(const char *)string;	// 0x30ec1b05
- (id)parseDictionary;	// 0x30ec1c41
- (id)parseFalse;	// 0x30ec1a25
- (id)parseHexCharacter;	// 0x30ec1fe5
- (id)parseNull;	// 0x30ec1abd
- (id)parseNumber;	// 0x30ec1809
- (id)parseObject;	// 0x30ec1751
- (id)parseString;	// 0x30ec1d85
- (id)parseTrue;	// 0x30ec1a71
- (void)skipWhitespace;	// 0x30ec2081
@end

