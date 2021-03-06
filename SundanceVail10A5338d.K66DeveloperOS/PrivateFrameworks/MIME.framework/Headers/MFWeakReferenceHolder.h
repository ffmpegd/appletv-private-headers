/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@protocol NSObject;

@interface MFWeakReferenceHolder : NSObject {
	id<NSObject> _reference;	// 4 = 0x4
	unsigned _isZeroing : 1;	// 8 = 0x8
}
+ (id)weakReferenceWithObject:(id)object;	// 0x36b30c81
+ (id)weakReferenceWithObject:(id)object allowNonZeroing:(BOOL)zeroing;	// 0x36b30c95
- (id)init;	// 0x36b30a51
- (id)_initWithObject:(id)object allowNonZeroing:(BOOL)zeroing;	// 0x36b30a65
- (void)dealloc;	// 0x36b30c29
- (BOOL)isZeroingWeakReference;	// 0x36b30d89
- (id)retainedReference;	// 0x36b30d51
@end

