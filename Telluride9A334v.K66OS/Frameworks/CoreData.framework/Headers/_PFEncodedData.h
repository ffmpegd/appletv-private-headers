/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSData.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData {
@private
	NSData *_aData;	// 4 = 0x4
	unsigned _byteCount;	// 8 = 0x8
}
- (id)init;	// 0x31f3fcd9
- (id)initWithCoder:(id)coder;	// 0x31f3f495
- (BOOL)_isDeallocating;	// 0x31f3f54d
- (BOOL)_tryRetain;	// 0x31f3f575
- (const void *)bytes;	// 0x31f3f3f1
- (id)copyWithZone:(NSZone *)zone;	// 0x31f3f60d
- (id)description;	// 0x31f3f59d
- (void)encodeWithCoder:(id)coder;	// 0x31f3f4a5
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x31f3fd2d
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x31f3fd41
- (BOOL)isEqualToData:(id)data;	// 0x31f3fd59
- (unsigned)length;	// 0x31f3f3e1
- (id)mutableCopy;	// 0x31f3f61d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31f3f631
- (id)privateCopy;	// 0x31f3f679
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x31f3fe85
- (void)release;	// 0x31f3f50d
- (id)retain;	// 0x31f3f4e5
- (unsigned)retainCount;	// 0x31f3f52d
- (id)subdataWithRange:(NSRange)range;	// 0x31f3f6c1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x31f3f739
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x31f3f6e9
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x31f3f7a9
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x31f3f759
@end

