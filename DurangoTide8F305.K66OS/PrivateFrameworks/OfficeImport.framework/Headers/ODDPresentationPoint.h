/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDPresentationPoint : ODDPoint {
@private
	ODDPresentationPoint *mParent;	// 20 = 0x14
	NSMutableArray *mChildren;	// 24 = 0x18
}
- (void)addChild:(id)child order:(unsigned long)order;	// 0x34542c69
- (id)children;	// 0x34597e35
- (void)dealloc;	// 0x34546c4d
- (id)parent;	// 0x34597e25
- (void)setType:(int)type;	// 0x34542341
@end

