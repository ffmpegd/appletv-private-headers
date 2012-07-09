/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSOutputStream.h> // Unknown library


@interface NSOutputStream (NSOutputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x373aa2b1
+ (id)outputStreamToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x373aa395
+ (id)outputStreamToFileAtPath:(id)path append:(BOOL)append;	// 0x373aa3d9
+ (id)outputStreamToMemory;	// 0x373aa359
+ (id)outputStreamWithURL:(id)url append:(BOOL)append;	// 0x373aa41d
- (unsigned long)_cfTypeID;	// 0x373aa461
- (BOOL)hasSpaceAvailable;	// 0x373aa335
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x373aa30d
@end

@interface NSOutputStream (NSCFOutputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x373aa4a9
@end
