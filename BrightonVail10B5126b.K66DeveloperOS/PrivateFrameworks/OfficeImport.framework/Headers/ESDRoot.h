/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

@interface ESDRoot : ESDObject {
	NSMutableArray *mChildren;	// 16 = 0x10
}
- (id)init;	// 0x34804cbd
- (id)initFromReader:(OcReader *)reader;	// 0x349246c5
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x348050ed
- (id)initWithPbState:(id)pbState;	// 0x34804a8d
- (void)addChild:(id)child;	// 0x34a53fd1
- (id)childAt:(unsigned)at;	// 0x348127fd
- (unsigned)childCount;	// 0x348127dd
- (void)dealloc;	// 0x348865a1
- (EshRoot *)eshRoot;	// 0x348051c1
- (id)pbReferenceWithID:(unsigned long)anId;	// 0x34812729
- (void)writeToWriter:(OcWriter *)writer;	// 0x34a54029
@end

