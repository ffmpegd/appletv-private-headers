/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SBJsonParser.h"
#import "SBJsonBase.h"


@protocol SBJsonParser
- (id)objectWithString:(id)string;
@end

__attribute__((visibility("hidden")))
@interface SBJsonParser : SBJsonBase <SBJsonParser> {
@private
	char *c;	// 16 = 0x10
	BOOL ctrl[34];	// 20 = 0x14
}
- (id)init;	// 0x30729d40
- (id)fragmentWithString:(id)string;	// 0x3072a130
- (id)objectWithString:(id)string;	// 0x3072a060
- (BOOL)scanHexQuad:(unsigned short *)quad;	// 0x30729df8
- (BOOL)scanIsAtEnd;	// 0x3072afd4
- (BOOL)scanNumber:(id *)number;	// 0x3072abc4
- (BOOL)scanRestOfArray:(id *)array;	// 0x3072b43c
- (BOOL)scanRestOfDictionary:(id *)dictionary;	// 0x3072b038
- (BOOL)scanRestOfFalse:(id *)aFalse;	// 0x3072a5d8
- (BOOL)scanRestOfNull:(id *)null;	// 0x3072a534
- (BOOL)scanRestOfString:(id *)string;	// 0x3072a724
- (BOOL)scanRestOfTrue:(id *)aTrue;	// 0x3072a67c
- (BOOL)scanUnicodeChar:(unsigned short *)aChar;	// 0x30729eb8
- (BOOL)scanValue:(id *)value;	// 0x3072a320
@end

