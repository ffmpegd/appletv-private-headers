/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSSimpleCString.h"
#import "Foundation-Structs.h"


@interface NSConstantString : NSSimpleCString {
}
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length;	// 0x360d53fd
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x360d55d9
- (BOOL)_isDeallocating;	// 0x360d57e9
- (BOOL)_tryRetain;	// 0x360d57e5
- (id)autorelease;	// 0x360d57dd
- (const char *)cString;	// 0x360d5831
- (unsigned)cStringLength;	// 0x360d5559
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x360d558d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x360d5419
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x360d5779
- (id)copy;	// 0x360d55d1
- (id)copyWithZone:(NSZone *)zone;	// 0x360d55d5
- (void)dealloc;	// 0x360d57f9
- (unsigned)fastestEncoding;	// 0x360d556d
- (void)finalize;	// 0x360d5815
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x360d549d
- (unsigned)hash;	// 0x360d57b9
- (BOOL)isEqual:(id)equal;	// 0x360d55f5
- (BOOL)isEqualToString:(id)string;	// 0x360d56c5
- (unsigned)length;	// 0x360d5545
- (const char *)lossyCString;	// 0x360d5845
- (oneway void)release;	// 0x360d57f5
- (id)retain;	// 0x360d57e1
- (unsigned)retainCount;	// 0x360d57ed
- (unsigned)smallestEncoding;	// 0x360d557d
@end

