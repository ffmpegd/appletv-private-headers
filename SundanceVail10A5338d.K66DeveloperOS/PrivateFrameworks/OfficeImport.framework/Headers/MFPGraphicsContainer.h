/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class MFPGraphicsState;

@interface MFPGraphicsContainer : NSObject {
	MFPGraphicsState *mParentGraphicsState;	// 4 = 0x4
	CGAffineTransform mContainerTransform;	// 8 = 0x8
}
- (id)initWithParentGraphicsState:(id)parentGraphicsState containerTransform:(CGAffineTransform)transform;	// 0x33c51ef5
- (id).cxx_construct;	// 0x33c52035
- (CGAffineTransform)containerTransform;	// 0x33c52001
- (void)dealloc;	// 0x33c51fa5
- (id)parentGraphicsState;	// 0x33c51ff1
@end
