/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"


@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {
	BOOL mySet[32];	// 4 = 0x4
}
+ (id)ASCIIByteSet;	// 0x35e52059
+ (id)asciiWhitespaceSet;	// 0x35e520a5
+ (id)nonASCIIByteSet;	// 0x35e5200d
+ (id)suspiciousCodepage1252ByteSet;	// 0x35e51fc1
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x35e51ee1
- (id)initWithCString:(const char *)cstring;	// 0x35e52139
- (id)initWithRange:(NSRange)range;	// 0x35e51e31
- (id)_initWithSet:(const char *)set;	// 0x35e51f3d
- (BOOL)byteIsMember:(BOOL)member;	// 0x35e51dad
- (id)copyWithZone:(NSZone *)zone;	// 0x35e51f7d
- (id)invertedSet;	// 0x35e51df5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35e520f5
@end
