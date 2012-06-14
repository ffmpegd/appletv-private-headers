/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFEncodedData : NSData {
@private
	NSData *_aData;	// 4 = 0x4
	unsigned _byteCount;	// 8 = 0x8
}
- (id)init;	// 0x32359d19
- (id)initWithCoder:(id)coder;	// 0x32359495
- (BOOL)_isDeallocating;	// 0x3235954d
- (BOOL)_tryRetain;	// 0x32359575
- (const void *)bytes;	// 0x323593f1
- (id)copyWithZone:(NSZone *)zone;	// 0x3235960d
- (id)description;	// 0x3235959d
- (void)encodeWithCoder:(id)coder;	// 0x323594a5
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x32359d6d
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x32359d81
- (BOOL)isEqualToData:(id)data;	// 0x32359d99
- (unsigned)length;	// 0x323593e1
- (id)mutableCopy;	// 0x3235961d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32359631
- (id)privateCopy;	// 0x32359679
- (NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x32359ec5
- (void)release;	// 0x3235950d
- (id)retain;	// 0x323594e5
- (unsigned)retainCount;	// 0x3235952d
- (id)subdataWithRange:(NSRange)range;	// 0x323596c1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x32359739
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x323596e9
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x323597a9
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x32359759
@end
