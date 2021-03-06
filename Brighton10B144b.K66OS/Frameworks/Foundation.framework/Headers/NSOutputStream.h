/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSOutputStream.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSOutputStream (NSOutputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x319549dd
+ (id)outputStreamToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x31954ac1
+ (id)outputStreamToFileAtPath:(id)path append:(BOOL)append;	// 0x31954b05
+ (id)outputStreamToMemory;	// 0x31954a85
+ (id)outputStreamWithURL:(id)url append:(BOOL)append;	// 0x31954b49
- (unsigned long)_cfTypeID;	// 0x31954b8d
- (BOOL)hasSpaceAvailable;	// 0x31954a61
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x31954a39
@end

@interface NSOutputStream (NSCFOutputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x31954bd5
@end

