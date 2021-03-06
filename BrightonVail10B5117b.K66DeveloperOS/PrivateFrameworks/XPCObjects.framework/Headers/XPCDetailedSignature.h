/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library


@interface XPCDetailedSignature : NSObject {
	unsigned _argumentCount;	// 4 = 0x4
	Class *_classes;	// 8 = 0x8
}
+ (id)signatureWithArgumentCount:(unsigned)argumentCount classes:(Class)classes;	// 0x368d1b31
+ (id)signatureWithoutArguments;	// 0x368d1bc1
- (id)initWithArgumentCount:(unsigned)argumentCount;	// 0x368d1bdd
- (Class)argumentClassAtIndex:(unsigned)index;	// 0x368d1d2d
- (void)dealloc;	// 0x368d1c39
- (void)setClass:(Class)aClass forArgumentAtIndex:(unsigned)index;	// 0x368d1c7d
@end

