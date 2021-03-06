/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableArray;

@interface AVQueue : NSObject {
	NSRecursiveLock *_mutex;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	void *_reserved;	// 12 = 0xc
	int _isBeingModifiedCount;	// 16 = 0x10
}
+ (id)avQueue;	// 0x36caa26d
+ (id)queueWithArray:(id)array error:(id *)error;	// 0x36cb9fbd
- (id)init;	// 0x36cb9ffd
- (id)initWithArray:(id)array error:(id *)error;	// 0x36caa2a9
- (id)initWithError:(id *)error;	// 0x36caa325
- (int)_instantiateItem;	// 0x36cba011
- (BOOL)appendItem:(id)item error:(id *)error;	// 0x36caae9d
- (BOOL)appendItemsFromArray:(id)array error:(id *)error;	// 0x36cb55f9
- (void)dealloc;	// 0x36cb1581
- (unsigned)indexOfItem:(id)item;	// 0x36cba015
- (BOOL)insertItem:(id)item afterItem:(id)item2 error:(id *)error;	// 0x36cba121
- (BOOL)insertItem:(id)item atIndex:(unsigned)index error:(id *)error;	// 0x36caaed9
- (BOOL)isBeingModified;	// 0x36cba3b9
- (id)itemAfterItem:(id)item;	// 0x36cba075
- (id)itemAtIndex:(unsigned)index;	// 0x36cac10d
- (unsigned)itemCount;	// 0x36caa395
- (void)itemWasAdded:(id)added atIndex:(int)index;	// 0x36cab055
- (void)itemWillBeRemoved:(id)item atIndex:(int)index;	// 0x36cb0c35
- (void)removeAllItems;	// 0x36cba359
- (BOOL)removeItem:(id)item;	// 0x36cba2b9
- (BOOL)removeItemAtIndex:(unsigned)index;	// 0x36cb0b69
- (void)removeItemsInRange:(NSRange)range;	// 0x36cba329
@end

