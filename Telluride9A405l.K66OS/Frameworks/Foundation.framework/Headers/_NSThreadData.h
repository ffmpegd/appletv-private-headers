/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSThreadData : NSObject {
@private
	id dict;	// 4 = 0x4
	id name;	// 8 = 0x8
	id target;	// 12 = 0xc
	SEL selector;	// 16 = 0x10
	id argument;	// 20 = 0x14
	int seqNum;	// 24 = 0x18
	unsigned char qstate;	// 28 = 0x1c
	unsigned char ____;	// 29 = 0x1d
	unsigned char cancel;	// 30 = 0x1e
	unsigned char status;	// 31 = 0x1f
	id performQ;	// 32 = 0x20
	NSMutableDictionary *performD;	// 36 = 0x24
	opaque_pthread_attr_t attr;	// 40 = 0x28
	opaque_pthread_t *tid;	// 80 = 0x50
}
@end

