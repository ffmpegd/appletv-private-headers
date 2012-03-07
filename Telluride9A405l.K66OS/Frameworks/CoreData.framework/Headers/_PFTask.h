/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFTask : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	void *_task;	// 8 = 0x8
	void *arguments;	// 12 = 0xc
	opaque_pthread_mutex_t lock;	// 16 = 0x10
	opaque_pthread_cond_t condition;	// 60 = 0x3c
	int isFinishedFlag;	// 88 = 0x58
}
+ (int)getNumActiveProcessors;	// 0x33f65b3d
+ (unsigned long long)getPhysicalMemory;	// 0x33f651c1
+ (double)getProcessorSpeed;	// 0x33f7bb59
- (id)initWithFunction:(/*function-pointer*/ void *)function withArgument:(void *)argument andPriority:(int)priority;	// 0x33f7b03d
- (BOOL)_isDeallocating;	// 0x33f7afb5
- (BOOL)_tryRetain;	// 0x33f7afb1
- (void)dealloc;	// 0x33f7badd
- (void)finalize;	// 0x33f7bc45
- (void)release;	// 0x33f7bbe1
- (id)retain;	// 0x33f7bc25
- (unsigned)retainCount;	// 0x33f7af9d
@end

