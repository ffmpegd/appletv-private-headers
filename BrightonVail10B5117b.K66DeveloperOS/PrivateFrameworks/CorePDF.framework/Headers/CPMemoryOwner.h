/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPDisposable.h"


@interface CPMemoryOwner : NSObject <CPDisposable> {
	void *memory;	// 4 = 0x4
}
- (id)initWithAllocatedMemory:(void *)allocatedMemory;	// 0x33a45c51
- (void)dealloc;	// 0x33a45cf5
- (void)dispose;	// 0x33a45c95
- (void)finalize;	// 0x33a45cb5
@end
