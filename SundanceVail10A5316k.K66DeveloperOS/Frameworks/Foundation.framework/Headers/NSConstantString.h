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
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length;	// 0x31a473c9
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x31a475a5
- (BOOL)_isDeallocating;	// 0x31a477b5
- (BOOL)_tryRetain;	// 0x31a477b1
- (id)autorelease;	// 0x31a477a9
- (const char *)cString;	// 0x31a477fd
- (unsigned)cStringLength;	// 0x31a47525
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x31a47559
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x31a473e5
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x31a47745
- (id)copy;	// 0x31a4759d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a475a1
- (void)dealloc;	// 0x31a477c5
- (unsigned)fastestEncoding;	// 0x31a47539
- (void)finalize;	// 0x31a477e1
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x31a47469
- (unsigned)hash;	// 0x31a47785
- (BOOL)isEqual:(id)equal;	// 0x31a475c1
- (BOOL)isEqualToString:(id)string;	// 0x31a47691
- (unsigned)length;	// 0x31a47511
- (const char *)lossyCString;	// 0x31a47811
- (oneway void)release;	// 0x31a477c1
- (id)retain;	// 0x31a477ad
- (unsigned)retainCount;	// 0x31a477b9
- (unsigned)smallestEncoding;	// 0x31a47549
@end

