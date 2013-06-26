/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {
	ODDPresentationPoint *mParent;	// 20 = 0x14
	NSMutableArray *mChildren;	// 24 = 0x18
}
- (void)addChild:(id)child order:(unsigned long)order;	// 0x34b3c4ed
- (id)children;	// 0x34c20cf9
- (void)dealloc;	// 0x34b427bd
- (id)parent;	// 0x34c20ce9
- (void)setType:(int)type;	// 0x34b3ba95
@end
