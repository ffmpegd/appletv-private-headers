/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

#import <NSObject.h> // Unknown library


@interface CUTWeakReference : NSObject {
	id _object;	// 4 = 0x4
	unsigned _objectAddress;	// 8 = 0x8
}
@property(readonly, retain) id object;	// G=0x31640b41; converted property
+ (id)weakRefWithObject:(id)object;	// 0x31640ae1
- (void)dealloc;	// 0x31640a39
- (unsigned)hash;	// 0x31640a7d
- (BOOL)isEqual:(id)equal;	// 0x31640a8d
// converted property getter: - (id)object;	// 0x31640b41
@end
