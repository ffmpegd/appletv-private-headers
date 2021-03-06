/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


@interface NSSimpleCString : NSString {
@private
	char *bytes;	// 4 = 0x4
	int numBytes;	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3109ec59
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length;	// 0x3109ec61
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x3109eeb5
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x3109f401
- (unsigned)cStringLength;	// 0x3109edb5
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x3109ede5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3109ec81
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x3109f161
- (id)copyWithZone:(NSZone *)zone;	// 0x3109ee29
- (void)dealloc;	// 0x3109f719
- (unsigned)fastestEncoding;	// 0x3109edc5
- (void)finalize;	// 0x3109f75d
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x3109f351
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x3109ed01
- (BOOL)hasPrefix:(id)prefix;	// 0x3109f1fd
- (BOOL)hasSuffix:(id)suffix;	// 0x3109f295
- (unsigned)hash;	// 0x3109f331
- (BOOL)isEqual:(id)equal;	// 0x3109eed1
- (BOOL)isEqualToString:(id)string;	// 0x3109f0b5
- (unsigned)length;	// 0x3109eda5
- (unsigned)smallestEncoding;	// 0x3109edd5
- (id)stringByAppendingString:(id)string;	// 0x3109f4f9
@end

