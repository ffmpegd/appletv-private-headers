/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


@interface NSMutableString : NSString {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x305fdd89
+ (void)initialize;	// 0x30618135
+ (id)stringWithCapacity:(unsigned)capacity;	// 0x3063359d
- (id)initWithCapacity:(unsigned)capacity;	// 0x3068581d
- (void)_cfAppendCString:(const char *)string length:(int)length;	// 0x30654185
- (void)_cfCapitalize:(const void *)capitalize;	// 0x30654259
- (void)_cfLowercase:(const void *)lowercase;	// 0x306541c1
- (void)_cfNormalize:(long)normalize;	// 0x30654791
- (void)_cfPad:(CFStringRef)pad length:(unsigned)length padIndex:(unsigned)index;	// 0x306542a5
- (void)_cfTrim:(CFStringRef)trim;	// 0x306543ad
- (void)_cfTrimWS;	// 0x30654755
- (void)_cfUppercase:(const void *)uppercase;	// 0x3065420d
- (unsigned)_replaceOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;	// 0x306ee901
- (void)_trimWithCharacterSet:(id)characterSet;	// 0x306544a1
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x30654149
- (void)appendFormat:(id)format;	// 0x30685581
- (void)appendString:(id)string;	// 0x30685431
- (Class)classForCoder;	// 0x3068580d
- (void)deleteCharactersInRange:(NSRange)range;	// 0x30685469
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x30685411
- (void)replaceCharactersInRange:(NSRange)range withCString:(const char *)cstring length:(unsigned)length;	// 0x30685491
- (void)replaceCharactersInRange:(NSRange)range withCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x30685509
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x306853fd
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x3068564d
- (void)setString:(id)string;	// 0x30685615
@end

