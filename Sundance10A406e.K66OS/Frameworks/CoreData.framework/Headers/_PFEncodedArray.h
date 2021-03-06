/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSArray.h> // Unknown library

@class NSData;

@interface _PFEncodedArray : NSArray {
	NSData *_sourceData;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x33cbd60d; converted property
- (id)init;	// 0x33cf1359
- (BOOL)_isDeallocating;	// 0x33cf1415
- (void)_replaceObject:(id)object atIndex:(unsigned)index;	// 0x33cf14f9
- (BOOL)_tryRetain;	// 0x33cf13c5
- (const id *)_values;	// 0x33cbd609
- (Class)classForArchiver;	// 0x33cf1495
- (Class)classForCoder;	// 0x33cf1479
- (id)copy;	// 0x33cf1469
// converted property getter: - (unsigned)count;	// 0x33cbd60d
- (void)dealloc;	// 0x33cbd695
- (id)description;	// 0x33cf1441
- (id)mutableCopy;	// 0x33cf14b1
- (id)objectAtIndex:(unsigned)index;	// 0x33cbdfd9
- (oneway void)release;	// 0x33cbd621
- (id)retain;	// 0x33cbdf65
- (unsigned)retainCount;	// 0x33cf13b1
@end

