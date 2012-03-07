/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


@interface NSPlaceholderString : NSString {
}
- (id)init;	// 0x33687ea5
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x336515e5
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x33698fd1
- (id)initWithCString:(const char *)cstring;	// 0x336e99c9
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x3364bce5
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x336e9999
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3364d555
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x3364eab1
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3365339d
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x3368d019
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x3364cc61
- (id)initWithString:(id)string;	// 0x3367047d
- (BOOL)_isDeallocating;	// 0x336e998d
- (BOOL)_tryRetain;	// 0x336e9991
- (id)autorelease;	// 0x336e9979
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x336e9a21
- (void)dealloc;	// 0x336e9995
- (unsigned)length;	// 0x336e99f1
- (oneway void)release;	// 0x336e9989
- (id)retain;	// 0x336e997d
- (unsigned)retainCount;	// 0x336e9981
@end

